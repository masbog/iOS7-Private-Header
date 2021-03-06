/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUIGiftTableViewSection.h"


@class NSString, SKUIGift, SKUIGiftRecipientTableViewCell, UITextView;



@interface SKUIGiftAddressingSection : SKUIGiftTableViewSection

{

    double _footerHeight;

    NSString *_footerString;

    SKUIGift *_gift;

    UITextView *_messagingTextView;

    SKUIGiftRecipientTableViewCell *_recipientTableViewCell;

    id <UITextFieldDelegate> _textFieldDelegate;

    double _textViewCellHeight;

}



- (void).cxx_destruct;

- (id)_attributedPlaceholderWithString:(id)arg1;

- (id)_footerString;

- (id)_recipientTableViewCell;

- (id)_textFieldTableViewCellForTableView:(id)arg1 indexPath:(id)arg2;

- (id)_textViewCellForTableView:(id)arg1 indexPath:(id)arg2;

- (void)beginEditingMessageForTableView:(id)arg1 indexPath:(id)arg2;

- (void)endEditingMessageForTableView:(id)arg1 indexPath:(id)arg2;

@property(retain, nonatomic) SKUIGift *gift; // @synthesize gift=_gift;

- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;

- (id)initWithGiftConfiguration:(id)arg1;

- (long long)numberOfRowsInSection;

@property(nonatomic) id <UITextFieldDelegate> textFieldDelegate; // @synthesize textFieldDelegate=_textFieldDelegate;

- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;

- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;



@end


