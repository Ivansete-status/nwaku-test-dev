{.used.}

import
  testutils/unittests,
  chronos,
  libp2p,
  libp2p/protocols/connectivity/autonat/client,
  libp2p/protocols/connectivity/relay/relay,
  libp2p/protocols/connectivity/relay/client,
  libp2p/protocols/rendezvous,
  stew/byteutils
import
  ../../waku/v2/node/waku_switch,
  ./testlib/common,
  ./testlib/wakucore

proc newCircuitRelayClientSwitch(relayClient: RelayClient): Switch =
  SwitchBuilder.new()
    .withRng(rng())
    .withAddresses(@[MultiAddress.init("/ip4/0.0.0.0/tcp/0").tryGet()])
    .withTcpTransport()
    .withMplex()
    .withNoise()
    .withCircuitRelay(relayClient)
    .build()

proc newRendezvousClientSwitch(rdv: RendezVous): Switch =
  SwitchBuilder.new()
    .withRng(rng())
    .withAddresses(@[MultiAddress.init("/ip4/0.0.0.0/tcp/0").tryGet()])
    .withTcpTransport()
    .withMplex()
    .withNoise()
    .withRendezVous(rdv)
    .build()

suite "Waku Switch":

  asyncTest "Waku Switch works with AutoNat":
    ## Given
    let
      sourceSwitch = newTestSwitch()
      wakuSwitch = newWakuSwitch(rng = rng())
    await sourceSwitch.start()
    await wakuSwitch.start()

    ## When
    await sourceSwitch.connect(wakuSwitch.peerInfo.peerId, wakuSwitch.peerInfo.addrs)
    let ma = await AutonatClient.new().dialMe(sourceSwitch, wakuSwitch.peerInfo.peerId, wakuSwitch.peerInfo.addrs)

    ## Then
    check:
      ma == sourceSwitch.peerInfo.addrs[0]

    ## Teardown
    await allFutures(sourceSwitch.stop(), wakuSwitch.stop())

  asyncTest "Waku Switch acts as circuit relayer":
    ## Setup
    let
      wakuSwitch = newWakuSwitch(rng = rng())
      sourceClient = RelayClient.new()
      destClient = RelayClient.new()
      sourceSwitch = newCircuitRelayClientSwitch(sourceClient)
      destSwitch = newCircuitRelayClientSwitch(destClient)

    # Setup client relays
    sourceClient.setup(sourceSwitch)
    destClient.setup(destSwitch)

    await allFutures(wakuSwitch.start(), sourceSwitch.start(), destSwitch.start())

    ## Given
    let
      # Create a relay address to destSwitch using wakuSwitch as the relay
      addrs = MultiAddress.init($wakuSwitch.peerInfo.addrs[0] & "/p2p/" &
                                $wakuSwitch.peerInfo.peerId & "/p2p-circuit").get()
      msg = "Just one relay away..."

    # Create a custom protocol
    let customProtoCodec = "/vac/waku/test/1.0.0"
    var
      completionFut = newFuture[bool]()
      proto = new LPProtocol
    proto.codec = customProtoCodec
    proto.handler = proc(conn: Connection, proto: string) {.async.} =
      assert (await conn.readLp(1024)) == msg.toBytes()
      completionFut.complete(true)

    await proto.start()
    destSwitch.mount(proto)

    ## When
    # Connect destSwitch to the relay
    await destSwitch.connect(wakuSwitch.peerInfo.peerId, wakuSwitch.peerInfo.addrs)

    # Connect sourceSwitch to the relay
    await sourceSwitch.connect(wakuSwitch.peerInfo.peerId, wakuSwitch.peerInfo.addrs)

    # destClient reserves a slot on the relay.
    let rsvp = await destClient.reserve(wakuSwitch.peerInfo.peerId, wakuSwitch.peerInfo.addrs)

    # sourceSwitch dial destSwitch using the relay
    let conn = await sourceSwitch.dial(destSwitch.peerInfo.peerId, @[addrs], customProtoCodec)

    await conn.writeLp(msg)

    ## Then
    check:
      await completionFut.withTimeout(3.seconds)

    ## Teardown
    await allFutures(wakuSwitch.stop(), sourceSwitch.stop(), destSwitch.stop())

  asyncTest "Waku Switch uses Rendezvous":
    ## Setup

    let
      wakuClient = RendezVous.new()
      sourceClient = RendezVous.new()
      destClient = RendezVous.new()
      wakuSwitch = newRendezvousClientSwitch(wakuClient) #rendezvous point
      sourceSwitch = newRendezvousClientSwitch(sourceClient) #client
      destSwitch = newRendezvousClientSwitch(destClient) #client

    # Setup client rendezvous
    wakuClient.setup(wakuSwitch)
    sourceClient.setup(sourceSwitch)
    destClient.setup(destSwitch)

    await allFutures(wakuSwitch.start(), sourceSwitch.start(), destSwitch.start())

    # Connect clients to the rendezvous pint
    await sourceSwitch.connect(wakuSwitch.peerInfo.peerId, wakuSwitch.peerInfo.addrs)
    await destSwitch.connect(wakuSwitch.peerInfo.peerId, wakuSwitch.peerInfo.addrs)

    let res0 = await sourceClient.request("empty")
    check res0.len == 0

    # Check that source client gets peer info of dest client from rendezvous point
    await sourceClient.advertise("foo")
    let res1 = await destClient.request("foo")
    check:
      res1.len == 1
      res1[0] == sourceSwitch.peerInfo.signedPeerRecord.data
    
    await allFutures(wakuSwitch.stop(), sourceSwitch.stop(), destSwitch.stop())
