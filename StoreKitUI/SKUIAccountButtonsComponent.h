/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUIPageComponent.h"


@class SKUILink;



@interface SKUIAccountButtonsComponent : SKUIPageComponent

{

    SKUILink *_ecommerceLink;

    _Bool _hidesTermsAndConditions;

}



- (void).cxx_destruct;

@property(retain, nonatomic) SKUILink *ECommerceLink; // @synthesize ECommerceLink=_ecommerceLink;

- (long long)componentType;

@property(nonatomic) _Bool hidesTermsAndConditions; // @synthesize hidesTermsAndConditions=_hidesTermsAndConditions;

- (id)initWithCustomPageContext:(id)arg1;

- (id)initWithFeaturedContentContext:(id)arg1 kind:(long long)arg2;



@end


