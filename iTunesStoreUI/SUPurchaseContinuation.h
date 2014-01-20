/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUContinuation.h"


@class SUPurchaseManager;



@interface SUPurchaseContinuation : SUContinuation

{

    id _purchase;

    SUPurchaseManager *_purchaseManager;

}



- (void)cancel;

- (void)dealloc;

- (id)initWithPurchase:(id)arg1;

@property(readonly, nonatomic) id purchase; // @synthesize purchase=_purchase;

@property(nonatomic) __weak SUPurchaseManager *purchaseManager; // @synthesize purchaseManager=_purchaseManager;

- (void)start;



@end

