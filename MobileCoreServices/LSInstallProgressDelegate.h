/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "LSInstallProgressProtocol.h"

#import "NSXPCListenerDelegate.h"



@class LSInstallProgressList, LSObserverTimer, NSMutableDictionary, NSMutableOrderedSet, NSMutableSet, NSObject<OS_dispatch_queue>;



__attribute__((visibility("hidden")))

@interface LSInstallProgressDelegate : NSObject <NSXPCListenerDelegate, LSInstallProgressProtocol>

{

    NSMutableDictionary *_observers;

    LSInstallProgressList *_progresses;

    NSMutableOrderedSet *_orderedInstalls;

    NSMutableDictionary *_installIndexes;

    NSMutableSet *_inactiveInstalls;

    LSObserverTimer *installsStartedTimer;

    LSObserverTimer *installsUpdatedTimer;

    LSObserverTimer *installsFinishedTimer;

    LSObserverTimer *appsUninstalledTimer;

    NSObject<OS_dispatch_queue> *_installControlsQueue;

    _Bool _usingNetwork;

}



- (void)addObserver:(id)arg1 withUUID:(id)arg2;

- (void)createInstallProgressForApplication:(id)arg1 withPhase:(unsigned long long)arg2 andPublishingString:(id)arg3;

- (void)dealloc;

- (unsigned char)handleCancelInstallationForApp:(id)arg1;

- (id)init;

- (void)installationEndedForApplication:(id)arg1;

- (void)installationFailedForApplication:(id)arg1 reply:(id)arg2;

- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

- (id)parentProgressForApplication:(id)arg1 andPhase:(unsigned long long)arg2 isActive:(_Bool)arg3;

- (void)placeholderInstalledForApp:(id)arg1;

- (void)rebuildInstallIndexes;

- (void)removeObserverWithUUID:(id)arg1;

- (void)restoreInactiveInstalls;

- (void)sendAppControlsNotificationForApp:(id)arg1 withName:(id)arg2;

- (void)sendChangeNotificationForApp:(id)arg1;

- (void)sendIconUpdatedNotificationForApp:(id)arg1;

- (void)sendInstalledNotificationForApps:(id)arg1;

- (void)sendNetworkUsageChangedNotification;

- (void)sendUninstalledNotificationForApps:(id)arg1;



@end

