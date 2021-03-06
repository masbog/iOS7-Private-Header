/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CKMessageEntryTextView.h"


#import "NSTextStorageDelegate.h"



@class NSArray, NSMutableDictionary;



@interface CKMessageEntryRichTextView : CKMessageEntryTextView <NSTextStorageDelegate>

{

    BOOL _balloonColor;

    NSMutableDictionary *_mediaObjects;

    NSMutableDictionary *_composeImages;

    NSArray *_pasteboardValues;

}



@property(nonatomic) BOOL balloonColor; // @synthesize balloonColor=_balloonColor;

- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;

- (id)composeImageForTransferGUID:(id)arg1;

@property(retain, nonatomic) NSMutableDictionary *composeImages; // @synthesize composeImages=_composeImages;

- (id)compositionText;

- (void)copy:(id)arg1;

- (void)cut:(id)arg1;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1 textContainer:(id)arg2;

@property(retain, nonatomic) NSMutableDictionary *mediaObjects; // @synthesize mediaObjects=_mediaObjects;

- (void)paste:(id)arg1;

@property(retain, nonatomic) NSArray *pasteboardValues; // @synthesize pasteboardValues=_pasteboardValues;

- (void)previewDidChange:(id)arg1;

- (void)setCompositionText:(id)arg1;

- (void)textStorage:(id)arg1 willProcessEditing:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4;

- (void)updateComposeImages;



@end


