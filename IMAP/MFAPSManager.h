/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "APSConnectionDelegate.h"

#import "MFAPSManager.h"



@class APSConnection, NSConditionLock, NSCountedSet, NSData, NSMutableSet, NSObject<OS_dispatch_queue>;



@interface MFAPSManager : NSObject <APSConnectionDelegate, MFAPSManager>

{

    NSObject<OS_dispatch_queue> *_queue;

    APSConnection *_pushService;

    NSCountedSet *_watchedTopics;

    NSMutableSet *_unwatchedTopics;

    NSConditionLock *_deviceTokenLock;

    NSData *_deviceToken;

}



+ (Class)APSConnection;

+ (id)sharedManager;

- (void)_startAPS_nts;

- (void)_stopAPS_nts;

- (void)connect;

- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;

- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;

- (id)copyDeviceToken;

- (id)copyDiagnosticInformation;

- (void)dealloc;

- (id)init;

- (void)startWatchingForTopic:(id)arg1;

- (void)stopWatchingForTopic:(id)arg1;

- (void)swapTopic:(id)arg1 forNewTopic:(id)arg2;



@end

