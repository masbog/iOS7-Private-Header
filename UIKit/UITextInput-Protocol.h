/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIKeyInput.h"



@class NSDictionary, UITextPosition, UITextRange, UIView;



@protocol UITextInput <UIKeyInput>

- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;

@property(readonly, nonatomic) UITextPosition *beginningOfDocument;

- (struct CGRect)caretRectForPosition:(id)arg1;

- (id)characterRangeAtPoint:(struct CGPoint)arg1;

- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;

- (id)closestPositionToPoint:(struct CGPoint)arg1;

- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;

- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;

@property(readonly, nonatomic) UITextPosition *endOfDocument;

- (struct CGRect)firstRectForRange:(id)arg1;

@property(nonatomic) id <UITextInputDelegate> inputDelegate;

@property(readonly, nonatomic) UITextRange *markedTextRange;

@property(copy, nonatomic) NSDictionary *markedTextStyle;

- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;

- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;

- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;

- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;

- (void)replaceRange:(id)arg1 withText:(id)arg2;

@property(copy) UITextRange *selectedTextRange;

- (id)selectionRectsForRange:(id)arg1;

- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;

- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;

- (id)textInRange:(id)arg1;

- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;

@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;

- (void)unmarkText;



@optional

- (long long)characterOffsetOfPosition:(id)arg1 withinRange:(id)arg2;

- (void)dictationRecognitionFailed;

- (void)dictationRecordingDidEnd;

- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;

- (void)insertDictationResult:(id)arg1;

- (id)insertDictationResultPlaceholder;

- (id)positionWithinRange:(id)arg1 atCharacterOffset:(long long)arg2;

- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;

@property(nonatomic) long long selectionAffinity;

- (_Bool)shouldChangeTextInRange:(id)arg1 replacementText:(id)arg2;

@property(readonly, nonatomic) UIView *textInputView;

- (id)textStylingAtPosition:(id)arg1 inDirection:(long long)arg2;

@end


