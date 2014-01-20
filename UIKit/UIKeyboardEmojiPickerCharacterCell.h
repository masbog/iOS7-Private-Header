/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableViewCell.h"


@class NSArray, NSString, UIKeyboardEmojiInputController, UIView;



__attribute__((visibility("hidden")))

@interface UIKeyboardEmojiPickerCharacterCell : UITableViewCell

{

    NSArray *_characters;

    NSString *_emojiString;

    UIKeyboardEmojiInputController *_inputController;

    UIView *_pressIndicator;

}



+ (id)emojiFontAttributes;

@property(retain) NSArray *characters;

- (void)dealloc;

- (void)drawRect:(struct CGRect)arg1;

- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@property UIKeyboardEmojiInputController *inputController; // @synthesize inputController=_inputController;

@property(retain) UIView *pressIndicator; // @synthesize pressIndicator=_pressIndicator;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;



@end

