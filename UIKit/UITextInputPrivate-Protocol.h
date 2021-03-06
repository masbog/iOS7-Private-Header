/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITextInput.h"

#import "UITextInputTokenizer.h"

#import "UITextInputTraits_Private.h"



@class UITextInteractionAssistant;



@protocol UITextInputPrivate <UITextInput, UITextInputTokenizer, UITextInputTraits_Private>

- (_Bool)hasContent;

- (_Bool)hasSelection;

@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;

- (void)selectAll;

- (struct _NSRange)selectionRange;

- (id)textInputTraits;



@optional

+ (void)_preheatDictationIfNecessary;

- (double)_delayUntilRepeatInsertText:(id)arg1;

- (id)_dictationLanguage;

- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;

- (_Bool)_shouldRepeatInsertText:(id)arg1;

- (void)_startDictation;

- (void)_stopDictation;

- (void)acceptedAutoFillWord:(id)arg1;

- (id)automaticallySelectedOverlay;

- (void)dictationRecordingDidBegin;

- (id)fontForCaretSelection;

- (void)handleKeyWebEvent:(id)arg1;

- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;

- (_Bool)isAutoFillMode;

- (id)metadataDictionariesForDictationResults;

- (id)rangeWithTextAlternatives:(id *)arg1 atPosition:(id)arg2;

- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;

- (_Bool)requiresKeyEvents;

@property(nonatomic) long long selectionGranularity;

- (void)setBottomBufferHeight:(double)arg1;

- (id)textColorForCaretSelection;

@end


