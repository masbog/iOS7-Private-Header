/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "IMServiceAgent.h"


@interface IMServiceAgentImpl : IMServiceAgent

{

}



+ (void)_determineStatusImageAppearance;

+ (void)_statusImageAppearanceChanged:(id)arg1;

+ (void)forgetStatusImageAppearance;

+ (id)imageNameForStatus:(unsigned long long)arg1;

+ (id)imageURLForStatus:(unsigned long long)arg1;

+ (void)initialize;

+ (id)notificationCenter;

+ (id)sharedAgent;

- (void)_customMessagesChanged:(id)arg1;

- (void)_daemonConnected:(id)arg1;

- (void)_daemonDisconnected:(id)arg1;

- (void)_statusImageAppearanceChanged:(id)arg1;

- (void)dealloc;

- (void)finalize;

- (id)init;

- (void)launchIfNecessary;

- (id)myAvailableMessages;

- (id)myAwayMessages;

- (id)notificationCenter;

- (id)serviceWithName:(id)arg1;

- (void)setMyAvailableMessages:(id)arg1;

- (void)setMyAwayMessages:(id)arg1;

- (void)setMyStatus:(unsigned long long)arg1 message:(id)arg2;

- (void)setupComplete;

- (unsigned long long)vcCapabilities;

- (void)vcCapabilitiesChanged:(unsigned long long)arg1;



@end


