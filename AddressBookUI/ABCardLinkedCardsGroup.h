/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ABCardGroup.h"


@class NSArray;



@interface ABCardLinkedCardsGroup : ABCardGroup

{

    NSArray *_linkedContacts;

}



- (void)dealloc;

- (id)displayItems;

- (id)editingItems;

@property(retain, nonatomic) NSArray *linkedContacts; // @synthesize linkedContacts=_linkedContacts;

- (id)title;



@end

