{.push raises: [Exception, Defect].}

import
  std/options,
  json_rpc/rpcserver,
  ../../protocol/waku_store/waku_store_types,
  ../wakunode2,
  ./jsonrpc_types, ./jsonrpc_utils

export jsonrpc_types

logScope:
  topics = "store api"

proc installStoreApiHandlers*(node: WakuNode, rpcsrv: RpcServer) =
  const futTimeout = 5.seconds

  ## Store API version 1 definitions

  rpcsrv.rpc("get_waku_v2_store_v1_messages") do(contentFilters: seq[HistoryContentFilter], pagingOptions: Option[StorePagingOptions]) -> StoreResponse:
    ## Returns history for a list of content topics with optional paging
    debug "get_waku_v2_store_v1_messages"

    var responseFut = newFuture[StoreResponse]()
 
    proc queryFuncHandler(response: HistoryResponse) {.gcsafe, closure.} =
      debug "get_waku_v2_store_v1_messages response"
      responseFut.complete(response.toStoreResponse())
    
    let historyQuery = HistoryQuery(contentFilters: contentFilters,
                                    pagingInfo: if pagingOptions.isSome: pagingOptions.get.toPagingInfo() else: PagingInfo())
    
    await node.query(historyQuery, queryFuncHandler)

    if (await responseFut.withTimeout(futTimeout)):
      # Future completed
      return responseFut.read()
    else:
      # Future failed to complete
      raise newException(ValueError, "No history response received")