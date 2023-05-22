const util = require('util')
const readline = require('readline');

var gc = (require('gc-stats'))();

gc.on('stats', function (stats) {
  console.log('GC_happened', stats);
});

const readLineAsync = () => {
  const rl = readline.createInterface({
    input: process.stdin
  });

  return new Promise((resolve) => {
    rl.prompt();
    rl.on('line', (line) => {
      rl.close();
      resolve(line);
    });
  });
};

var wakuMod = require('bindings')('waku');

var cfg = {
    host: "0.0.0.0",
    port: 60000,
    key: "364d111d729a6eb6d2e6113e163f017b5ef03a6f94c9b5b7bb1bb36fa5cb07a9",
    relay: true
};

function event_handler(event) {
    console.log("evento NodeJs: " + event)
}

console.log("Waku version: " + wakuMod.wakuVersion())

console.log("Setting callback event callback function")
wakuMod.wakuSetEventCallback(event_handler)
wakuMod.wakuNew(cfg)
wakuMod.wakuConnect("/ip4/127.0.0.1/tcp/60001/p2p/16Uiu2HAmVFXtAfSj4EiR7mL2KvL4EE2wztuQgUSBoj2Jx2KeXFLN",
                    10000)

console.log("Subscribing to the default pubsubtopic: " + wakuMod.wakuDefaultPubsubTopic())
console.log(wakuMod.wakuRelaySubscribe(wakuMod.wakuDefaultPubsubTopic()))

wakuMod.wakuStart()

console.log("Type the message to be published to the default pubsubtopic")

const run = async () => {
  let readLine = readLineAsync()
  setInterval(() => {
    if(!util.inspect(readLine).includes("pending")) {
      console.log(readLine)
      readLine = readLineAsync()
      console.log("Type the message to be published to the default pubsubtopic")
    }
    wakuMod.wakuPoll()
  }, 0)
}

run()
