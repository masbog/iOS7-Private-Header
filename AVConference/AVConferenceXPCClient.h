/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_xpc_object>;



__attribute__((visibility("hidden")))

@interface AVConferenceXPCClient : NSObject

{

    NSObject<OS_xpc_object> *connection;

    NSMutableDictionary *registeredBlocks;

    NSObject<OS_dispatch_queue> *replyQueue;

    NSObject<OS_dispatch_queue> *connectionQueue;

}



+ (id)AVConferenceXPCClientSingleton;

- (void)closeConnectionToServer;

@property(readonly) NSObject<OS_xpc_object> *connection; // @synthesize connection;

- (void)createConnectionToServer;

- (id)createNSDictionaryFromNSError:(id)arg1;

- (id)createNSDictionaryFromXPCDictionary:(id)arg1;

- (id)createNSErrorFromNSDictionary:(id)arg1;

- (id)createServerDiedDictionary;

- (id)createTimeoutDictionary;

- (id)createXPCDictionaryFromNSDictionary:(id)arg1;

- (void)dealloc;

- (void)deregisterFromService:(char *)arg1;

- (id)init;

- (void)registerBlockForService:(char *)arg1 block:(id)arg2;

- (void)registerBlockForService:(char *)arg1 block:(id)arg2 queue:(void)arg3;

@property(readonly) NSMutableDictionary *registeredBlocks; // @synthesize registeredBlocks;

- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2;

- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 reply:(id)arg3;

- (void)sendMessageAsync:(char *)arg1 arguments:(id)arg2 reply:(id)arg3 queue:(void)arg4;

- (id)sendMessageSync:(char *)arg1 arguments:(id)arg2;

- (id)sendMessageSync:(char *)arg1 arguments:(id)arg2 timeout:(unsigned int)arg3;



@end


