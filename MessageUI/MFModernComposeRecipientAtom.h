/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MFModernAtomView.h"


@class MFComposeRecipient, UITextInputTraits;



@interface MFModernComposeRecipientAtom : MFModernAtomView

{

    id <MFComposeRecipientAtomDelegate> _delegate;

    MFComposeRecipient *_recipient;

    UITextInputTraits *_traits;

    unsigned int _wasSelectedWhenTouchesBegan:1;

    unsigned int _touchesWereCancelled:1;

}



- (void)dealloc;

@property(nonatomic) id <MFComposeRecipientAtomDelegate> delegate; // @synthesize delegate=_delegate;

- (void)handleTouchAndHold;

- (id)initWithFrame:(struct CGRect)arg1 recipient:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1 recipient:(id)arg2 presentationOptions:(unsigned long long)arg3;

- (id)keyCommands;

- (void)moveLeft:(id)arg1;

- (void)moveRight:(id)arg1;

@property(readonly, nonatomic) MFComposeRecipient *recipient;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;



@end

