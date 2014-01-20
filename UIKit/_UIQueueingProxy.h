/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "_UITargetedProxy.h"


#import "XPCProxyTarget.h"



@class NSMutableArray;



__attribute__((visibility("hidden")))

@interface _UIQueueingProxy : _UITargetedProxy <XPCProxyTarget>

{

    int _lock;

    unsigned long long _suspensionCount;

    NSMutableArray *_queuedInvocations;

    id _shouldSuspendInvocationBlock;

}



+ (id)proxyWithTarget:(id)arg1;

+ (id)proxyWithTarget:(id)arg1 shouldSuspendInvocationBlock:(id)arg2;

- (void)_dispatchSuspendedMessages;

- (void)dealloc;

- (id)description;

- (void)forwardInvocation:(id)arg1;

- (id)proxy:(id)arg1 detailedSignatureForSelector:(SEL)arg2;

- (void)removeAllEnqueuedInvocations;

- (_Bool)respondsToSelector:(SEL)arg1;

- (void)resume;

- (void)suspend;



@end

