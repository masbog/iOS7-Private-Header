/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



#import "SBNumberPadDelegate.h"



@class NSArray, SBNumberPadWithDelegate, SBUIButton, UIColor, UIControl<SBUIPasscodeNumberPadButton>;



@interface SBUIPasscodeLockNumberPad : UIView <SBNumberPadDelegate>

{

    SBNumberPadWithDelegate *_numberPad;

    id <SBUIPasscodeLockNumberPadDelegate> _delegate;

    UIView *_leftPaddingView;

    UIView *_rightPaddingView;

    UIView *_bottomPaddingView;

    SBUIButton *_emergencyCallButton;

    SBUIButton *_backspaceButton;

    SBUIButton *_cancelButton;

    UIControl<SBUIPasscodeNumberPadButton> *_downButton;

    _Bool _showsBackspaceButton;

    _Bool _showsEmergencyCallButton;

    _Bool _showsCancelButton;

    UIColor *_customBackgroundColor;

}



+ (id)_buttonForCharacter:(unsigned int)arg1;

+ (struct CGSize)_inputButtonCircleSize;

+ (struct UIEdgeInsets)_inputButtonCircleSpacing;

- (void)_backspaceButtonHit;

- (void)_cancelButtonHit;

- (void)_configureAdditionalButtons;

- (double)_distanceToTopOfFirstButton;

- (void)_emergencyCallButtonHit;

- (id)_fontForAncillaryButton;

- (void)_numberPadTouchCancelled:(id)arg1 forEvent:(id)arg2;

- (void)_numberPadTouchDown:(id)arg1 forEvent:(id)arg2;

- (void)_numberPadTouchDrag:(id)arg1 forEvent:(id)arg2;

- (void)_numberPadTouchUp:(id)arg1 forEvent:(id)arg2;

- (void)_setLuminosityBoost:(double)arg1;

@property(readonly, nonatomic) NSArray *buttons;

- (void)dealloc;

@property(nonatomic) id <SBUIPasscodeLockNumberPadDelegate> delegate; // @synthesize delegate=_delegate;

@property(retain, nonatomic) UIControl<SBUIPasscodeNumberPadButton> *downButton; // @synthesize downButton=_downButton;

- (id)initWithDefaultSize;

- (void)setBackgroundAlpha:(double)arg1;

- (void)setCustomBackgroundColor:(id)arg1;

@property(nonatomic) _Bool showsBackspaceButton; // @synthesize showsBackspaceButton=_showsBackspaceButton;

@property(nonatomic) _Bool showsCancelButton; // @synthesize showsCancelButton=_showsCancelButton;

@property(nonatomic) _Bool showsEmergencyCallButton; // @synthesize showsEmergencyCallButton=_showsEmergencyCallButton;



@end


