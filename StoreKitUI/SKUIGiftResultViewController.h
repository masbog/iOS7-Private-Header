/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUIGiftStepViewController.h"


@class SKUIGiftItemView, UIButton, UIImage;



@interface SKUIGiftResultViewController : SKUIGiftStepViewController

{

    UIButton *_giftAgainButton;

    UIImage *_itemImage;

    SKUIGiftItemView *_itemView;

}



- (void).cxx_destruct;

- (void)_doneButtonAction:(id)arg1;

- (void)_giftAgainAction:(id)arg1;

- (id)_itemImage;

- (id)_itemView;

- (void)_setItemImage:(id)arg1 error:(id)arg2;

- (void)dealloc;

- (id)initWithGift:(id)arg1 configuration:(id)arg2;

- (void)loadView;

- (void)viewWillAppear:(_Bool)arg1;



@end


