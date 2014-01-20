/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIAElement.h"


@class CLSimulationManager, NSDate, NSString, UIAHost;



@interface UIATarget : UIAElement

{

    NSDate *_startupDate;

    long long _textViewValueMaxLength;

    long long _interfaceOrientation;

    double _lastAnimationEndedTime;

    NSString *_nameOfLastApp;

    UIAHost *_host;

    CLSimulationManager *_locationSimulationManager;

    _Bool _logElementTakesScreenshot;

    _Bool _handlesAlerts;

    unsigned long long valueChangedCount;

}



+ (id)_locationForObject:(id)arg1 withOptions:(id)arg2;

+ (id)attributeKeys;

+ (id)localTarget;

+ (id)toManyRelationshipKeys;

+ (id)toOneRelationshipKeys;

- (id)_applicationAtPosition:(struct CGPoint)arg1;

- (_Bool)_dragFrom:(id)arg1 to:(id)arg2 forDuration:(double)arg3 withTouchCount:(int)arg4 withFlick:(_Bool)arg5;

- (void)_enterPasscode:(id)arg1;

- (_Bool)_handleAlert;

- (_Bool)_handleAnnouncement:(id)arg1;

- (long long)_interfaceOrientation;

- (void)_invalidate;

- (double)_lastAnimationEndedTime;

- (id)_lockScreenScrollView;

- (void)_setLastAnimationEndedTime:(double)arg1;

- (void)_slideToCamera:(id)arg1;

- (void)_slideToUnlock:(id)arg1;

- (id)_systemVersionDictionary;

- (_Bool)_tapOptionalObject:(id)arg1 tapCount:(double)arg2 touchCount:(double)arg3 tapOffset:(id)arg4;

- (void)_tapPictureFrame:(id)arg1;

- (_Bool)_tapRequiredObject:(id)arg1 tapCount:(double)arg2 touchCount:(double)arg3;

- (_Bool)_touch:(id)arg1 withOptions:(id)arg2;

- (_Bool)_trackValueChanges:(_Bool)arg1;

- (void)_updateInterfaceOrientation;

- (id)applicationAtPoint:(id)arg1;

- (id)applications;

- (void)captureRect:(id)arg1 withName:(id)arg2;

- (void)captureScreenWithName:(id)arg1;

- (_Bool)checkIsValid;

- (void)clickLock;

- (void)clickMenu;

- (void)clickVolumeDown;

- (void)clickVolumeUp;

- (_Bool)deactivateApp;

- (_Bool)deactivateAppForDuration:(id)arg1;

- (void)dealloc;

- (_Bool)delayForTimeInterval:(double)arg1;

- (id)delegate;

- (id)deviceOrientation;

- (void)doubleTap:(id)arg1;

- (void)dragFrom:(id)arg1 to:(id)arg2 forDuration:(id)arg3;

- (id)elements;

- (void)flickFrom:(id)arg1 to:(id)arg2;

- (id)frontMostApp;

@property _Bool handlesAlerts; // @synthesize handlesAlerts=_handlesAlerts;

- (unsigned long long)hash;

- (void)holdLock:(id)arg1;

- (void)holdMenu:(id)arg1;

- (void)holdVolumeDown:(id)arg1;

- (void)holdVolumeUp:(id)arg1;

- (id)host;

- (id)imageFromRect:(struct CGRect)arg1;

- (id)init;

- (_Bool)isEqual:(id)arg1;

- (_Bool)isLocked;

- (_Bool)isScreenOff;

- (_Bool)isValid;

- (id)languageID;

- (id)languageName;

- (id)lastCommandTime;

- (id)localeID;

- (id)localeName;

- (id)localizedStringForKey:(id)arg1;

- (id)localizedStringForKey:(id)arg1 value:(id)arg2 table:(id)arg3 bundlePath:(id)arg4;

- (id)localizedStringForKey:(id)arg1 withOptions:(id)arg2;

- (_Bool)lock;

- (_Bool)lockForDuration:(id)arg1;

@property _Bool logElementTakesScreenshot; // @synthesize logElementTakesScreenshot=_logElementTakesScreenshot;

- (id)mainScreen;

- (id)model;

- (id)name;

- (double)patience;

- (void)pinchCloseFrom:(id)arg1 to:(id)arg2 forDuration:(id)arg3;

- (void)pinchOpenFrom:(id)arg1 to:(id)arg2 forDuration:(id)arg3;

- (double)popPatience;

- (void)pushPatience:(double)arg1;

- (_Bool)reactivateApp;

- (id)rect;

- (id)remote;

- (void)rotate:(id)arg1 withOptions:(id)arg2;

- (id)scriptingFavoredSynonymString;

- (id)scriptingSynonymStrings;

- (id)scriptingSynonyms;

- (void)setDelegate:(id)arg1;

- (_Bool)setDeviceOrientation:(id)arg1;

- (_Bool)setLocation:(id)arg1;

- (_Bool)setLocation:(id)arg1 withOptions:(id)arg2;

- (void)setPassiveEventListeningMode:(id)arg1 withDelay:(id)arg2;

- (void)setPatience:(double)arg1;

- (void)setRinger:(id)arg1;

- (void)setTargetClipboard:(id)arg1;

- (void)setTextViewValueMaxLength:(long long)arg1;

@property unsigned long long valueChangedCount; // @synthesize valueChangedCount;

- (void)setVerboseOptions:(unsigned long long)arg1;

- (void)shake;

- (id)springboard;

- (id)startupDate;

- (id)systemBuild;

- (id)systemName;

- (id)systemVersion;

- (void)tap:(id)arg1;

- (void)tap:(id)arg1 withOptions:(id)arg2;

- (id)targetClipboard;

- (long long)textViewValueMaxLength;

- (void)touch:(id)arg1;

- (void)touch:(id)arg1 andHold:(id)arg2;

- (void)touch:(id)arg1 withOptions:(id)arg2;

- (void)twoFingerTap:(id)arg1;

- (id)uiaxSpringBoardElement;

- (id)uiaxSystemWideElement;

- (id)uniqueIdentifier;

- (_Bool)unlock;

- (_Bool)unlockWithOptions:(id)arg1;

- (double)upTime;

- (unsigned long long)verboseOptions;



@end

