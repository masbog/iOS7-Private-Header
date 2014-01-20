/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



@protocol IMSystemMonitorListener



@optional

- (void)notificationCenterDidDisappear;

- (void)notificationCenterWillAppear;

- (void)screenLocked;

- (void)screenSaverDidStart;

- (void)screenSaverDidStop;

- (void)screenUnlocked;

- (void)systemApplicationDidBecomeActive;

- (void)systemApplicationDidEnterBackground;

- (void)systemApplicationDidResume;

- (void)systemApplicationDidResumeForEventsOnly;

- (void)systemApplicationDidSuspend;

- (void)systemApplicationDidSuspendForEventsOnly;

- (void)systemApplicationWillEnterForeground;

- (void)systemApplicationWillResignActive;

- (void)systemDidBecomeIdle;

- (void)systemDidBecomeUnidle;

- (void)systemDidEnterDataProtectionLock;

- (void)systemDidEnterMemoryPressure;

- (void)systemDidFastUserSwitchIn;

- (void)systemDidFastUserSwitchOut;

- (void)systemDidFinishMigration;

- (void)systemDidLeaveDataProtectionLock;

- (void)systemDidLeaveFirstDataProtectionLock;

- (void)systemDidLeaveMemoryPressure;

- (void)systemDidLock;

- (void)systemDidLogout;

- (void)systemDidStartBackup;

- (void)systemDidStopBackup;

- (void)systemDidUnlock;

- (void)systemDidWake;

- (void)systemRestoreStateDidChange;

- (void)systemScreenDidPowerDown;

- (void)systemScreenDidPowerUp;

- (void)systemWillShutdown;

- (void)systemWillSleep;

@end

