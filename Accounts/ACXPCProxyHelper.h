/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSXPCConnection, Protocol;



@interface ACXPCProxyHelper : NSObject

{

    NSXPCConnection *_connection;

    Protocol *_protocol;

}



- (void).cxx_destruct;

- (void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withError:(id)arg3;

- (id)_copyReplyBlockFromInvocation:(id)arg1;

- (void)forwardInvocation:(id)arg1;

- (id)initWithXPCConnection:(id)arg1 protocol:(id)arg2;

- (id)methodSignatureForSelector:(SEL)arg1;



@end


