/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class IMMessageContext, NSLock, NSMutableArray, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>, NSObject<OS_xpc_object>, NSProtocolChecker, NSRecursiveLock, NSString;



@interface IMLocalObjectInternal : NSObject

{

    IMMessageContext *_currentMessageContext;

    NSRecursiveLock *_lock;

    id _target;

    NSObject<OS_xpc_object> *_connection;

    NSObject<OS_dispatch_queue> *_queue;

    NSObject<OS_dispatch_semaphore> *_deathLock;

    NSString *_portName;

    NSProtocolChecker *_protocolChecker;

    NSMutableArray *_componentQueue;

    NSLock *_componentQueueLock;

    NSRecursiveLock *_componentQueueProcessingLock;

    _Bool _pendingComponentQueueProcessing;

    _Bool _busyForwarding;

}



- (void)dealloc;



@end

