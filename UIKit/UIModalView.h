/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


#import "UITextFieldDelegate.h"



@class NSMutableArray, NSString, UILabel, UIToolbar, UIWindow;



@interface UIModalView : UIView <UITextFieldDelegate>

{

    id <UIModalViewDelegate> _delegate;

    UILabel *_titleLabel;

    UILabel *_subtitleLabel;

    UILabel *_bodyTextLabel;

    UILabel *_taglineTextLabel;

    double _startX;

    double _startY;

    id _context;

    long long _cancelButton;

    long long _defaultButton;

    long long _firstOtherButton;

    UIToolbar *_toolbar;

    UIWindow *_originalWindow;

    UIWindow *_dimWindow;

    long long _suspendTag;

    long long _dismissButtonIndex;

    double _bodyTextHeight;

    NSMutableArray *_buttons;

    NSMutableArray *_textFields;

    UIView *_keyboard;

    UIView *_table;

    UIView *_dimView;

    UIView *_sheetView;

    struct {

        unsigned int numberOfRows:7;

        unsigned int delegateAlertSheetButtonClicked:1;

        unsigned int delegateDidPresentAlertSheet:1;

        unsigned int delegateDidDismissAlertSheet:1;

        unsigned int hideButtonBar:1;

        unsigned int alertStyle:3;

        unsigned int dontDimBackground:1;

        unsigned int dismissSuspended:1;

        unsigned int dontBlockInteraction:1;

        unsigned int sheetWasPoppedUp:1;

        unsigned int animating:1;

        unsigned int hideWhenDoneAnimating:1;

        unsigned int layoutWhenDoneAnimating:1;

        unsigned int titleMaxLineCount:2;

        unsigned int bodyTextMaxLineCount:3;

        unsigned int runsModal:1;

        unsigned int runningModal:1;

        unsigned int addedTextView:1;

        unsigned int addedTableShadows:1;

        unsigned int showOverSBAlerts:1;

        unsigned int showMinTableContent:1;

        unsigned int bodyTextTruncated:1;

        unsigned int orientation:3;

        unsigned int groupsTextFields:1;

        unsigned int delegateBodyTextAlignment:1;

        unsigned int delegateClickedButtonAtIndex:1;

        unsigned int delegateCancel:1;

        unsigned int delegateWillPresent:1;

        unsigned int delegateDidPresent:1;

        unsigned int delegateWillDismiss:1;

        unsigned int delegateDidDismiss:1;

        unsigned int popupFromPoint:1;

        unsigned int extra:20;

        unsigned int dontCallDismissDelegate:1;

        unsigned int useAutomaticKB:1;

        unsigned int shouldHandleFirstKeyUpEvent:1;

        unsigned int cancelWhenDoneAnimating:1;

    } _modalViewFlags;

}



+ (id)_popupAlertBackground;

+ (_Bool)atLeastOneAlertVisible;

+ (struct CGSize)minimumSize;

+ (void)noteOrientationChangingTo:(long long)arg1;

+ (id)topMostAlert;

+ (id)visibleAlert;

- (id)_addButtonWithTitle:(id)arg1;

- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2;

- (id)_addButtonWithTitleText:(id)arg1;

- (void)_alertSheetAnimationDidStop:(id)arg1 finished:(id)arg2;

- (void)_alertSheetTextFieldReturn:(id)arg1;

- (void)_appSuspended:(id)arg1;

- (double)_bottomVerticalInset;

- (void)_bubbleAnimationNormalDidStop:(id)arg1 finished:(id)arg2;

- (void)_bubbleAnimationShrinkDidStop:(id)arg1 finished:(id)arg2;

- (void)_buttonClicked:(id)arg1;

- (double)_buttonHeight;

- (_Bool)_canShowAlerts;

- (void)_cancelAnimated:(_Bool)arg1;

- (void)_cleanupAfterPopupAnimation;

- (void)_createBodyTextLabelIfNeeded;

- (void)_createSubtitleLabelIfNeeded;

- (void)_createTaglineTextLabelIfNeeded;

- (void)_createTitleLabelIfNeeded;

- (long long)_currentOrientation;

- (id)_defaultButton;

- (id)_dimView;

- (_Bool)_dimsBackground;

- (void)_growAnimationDidStop:(id)arg1 finished:(id)arg2;

- (void)_handleKeyUIEvent:(id)arg1;

- (void)_hideAnimated:(_Bool)arg1;

- (id)_initWithTelephoneNumber:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(long long)arg3 delegate:(id)arg4 context:(id)arg5;

- (_Bool)_isAnimating;

- (_Bool)_isSBAlert;

- (void)_keyboardWillHide:(id)arg1;

- (void)_keyboardWillShow:(id)arg1;

- (void)_layoutIfNeeded;

- (void)_layoutPopupAlertWithOrientation:(long long)arg1 animated:(_Bool)arg2;

- (_Bool)_manualKeyboardIsVisible;

- (double)_maxHeight;

- (_Bool)_needsKeyboard;

- (void)_performPopoutAnimationAnimated:(_Bool)arg1;

- (void)_performPopup:(_Bool)arg1;

- (void)_popoutAnimationDidStop:(id)arg1 finished:(id)arg2;

- (void)_prepareForDisplay;

- (void)_prepareToBeReplaced;

- (void)_presentSheetFromView:(id)arg1 above:(_Bool)arg2;

- (void)_presentSheetStartingFromYCoordinate:(double)arg1;

- (void)_removeAlertWindowOrShowAnOldAlert;

- (void)_repopup;

- (void)_repopupNoAnimation;

- (void)_rotatingAnimationDidStop:(id)arg1;

- (void)_setAlertSheetStyleFromButtonBar:(id)arg1;

- (void)_setDefaultButton:(id)arg1;

- (void)_setFirstOtherButtonIndex:(long long)arg1;

- (void)_setTextFieldsHidden:(_Bool)arg1;

- (void)_setupInitialFrame;

- (void)_setupTitleStyle;

- (void)_slideSheetOut:(_Bool)arg1;

- (void)_temporarilyHideAnimated:(_Bool)arg1;

- (double)_titleHorizontalInset;

- (double)_titleVerticalBottomInset;

- (double)_titleVerticalTopInset;

- (void)_truncateViewHeight:(id)arg1 toFitInFrame:(struct CGRect)arg2 withMinimumHeight:(double)arg3;

- (long long)addButtonWithTitle:(id)arg1;

- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;

- (id)addTextFieldWithValue:(id)arg1 label:(id)arg2;

- (int)alertSheetStyle;

- (struct CGSize)backgroundSize;

- (_Bool)blocksInteraction;

- (long long)bodyMaxLineCount;

- (id)bodyText;

- (id)bodyTextView;

- (long long)buttonCount;

- (id)buttonTitleAtIndex:(long long)arg1;

- (id)buttons;

- (_Bool)canBecomeFirstResponder;

@property(nonatomic) long long cancelButtonIndex;

- (id)context;

- (void)dealloc;

- (id)defaultButton;

- (long long)defaultButtonIndex;

@property(nonatomic) id <UIModalViewDelegate> delegate;

- (id)destructiveButton;

- (_Bool)dimsBackground;

- (void)dismiss;

- (void)dismissAnimated:(_Bool)arg1;

- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;

- (void)drawRect:(struct CGRect)arg1;

- (long long)firstOtherButtonIndex;

@property(nonatomic) _Bool groupsTextFields;

- (id)initWithFrame:(struct CGRect)arg1;

- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(long long)arg3 delegate:(id)arg4 context:(id)arg5;

- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6;

- (_Bool)isBodyTextTruncated;

@property(readonly, nonatomic, getter=isVisible) _Bool visible;

- (id)keyboard;

- (void)layout;

- (void)layoutAnimated:(_Bool)arg1;

- (void)layoutAnimated:(_Bool)arg1 withDuration:(double)arg2;

@property(copy, nonatomic) NSString *message;

@property(readonly, nonatomic) long long numberOfButtons;

- (long long)numberOfLinesInTitle;

- (long long)numberOfRows;

- (void)popupAlertAnimated:(_Bool)arg1;

- (void)popupAlertAnimated:(_Bool)arg1 atOffset:(double)arg2;

- (void)popupAlertAnimated:(_Bool)arg1 fromBarButtonItem:(id)arg2;

- (void)presentSheetFromAboveView:(id)arg1;

- (void)presentSheetFromBehindView:(id)arg1;

- (void)presentSheetFromButtonBar:(id)arg1;

- (void)presentSheetInView:(id)arg1;

- (void)presentSheetToAboveView:(id)arg1;

- (void)replaceAlert:(id)arg1;

- (_Bool)requiresPortraitOrientation;

- (_Bool)runsModal;

- (void)setAlertSheetStyle:(int)arg1;

- (void)setBlocksInteraction:(_Bool)arg1;

- (void)setBodyText:(id)arg1;

- (void)setBodyTextMaxLineCount:(long long)arg1;

- (void)setContext:(id)arg1;

- (void)setDefaultButton:(id)arg1;

- (void)setDefaultButtonIndex:(long long)arg1;

- (void)setDestructiveButton:(id)arg1;

- (void)setDimView:(id)arg1;

- (void)setDimsBackground:(_Bool)arg1;

- (void)setNumberOfRows:(long long)arg1;

- (void)setRunsModal:(_Bool)arg1;

- (void)setShowsOverSpringBoardAlerts:(_Bool)arg1;

- (void)setSubtitle:(id)arg1;

- (void)setSuspendTag:(long long)arg1;

- (void)setTableShouldShowMinimumContent:(_Bool)arg1;

- (void)setTaglineText:(id)arg1;

@property(copy, nonatomic) NSString *title;

- (void)setTitleMaxLineCount:(long long)arg1;

- (_Bool)showsOverSpringBoardAlerts;

- (id)subtitle;

- (long long)suspendTag;

- (_Bool)tableShouldShowMinimumContent;

- (id)tableView;

- (id)taglineTextView;

- (id)textField;

- (id)textFieldAtIndex:(long long)arg1;

- (long long)textFieldCount;

- (long long)titleMaxLineCount;

- (struct CGRect)titleRect;

- (void)userDidCancelPopoverView:(id)arg1;



@end


