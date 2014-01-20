/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUIItemCellLayout.h"


@class NSString, UIColor, _SKUIItemBrowseCellContentView;



@interface SKUIItemBrowseCellLayout : SKUIItemCellLayout

{

    _SKUIItemBrowseCellContentView *_cellContentView;

    struct CGSize _imageBoundingSize;

    _Bool _largeSpacing;

    long long _numberOfUserRatings;

    UIColor *_primaryTextColor;

    UIColor *_secondaryTextColor;

    double _userRating;

}



- (void).cxx_destruct;

- (id)_decimalNumberFormatter;

- (void)_initSKUIItemBrowseCellLayout;

- (void)_reloadUserRatingViews;

@property(copy, nonatomic) NSString *category;

@property(nonatomic) struct CGSize imageBoundingSize; // @synthesize imageBoundingSize=_imageBoundingSize;

@property(copy, nonatomic) NSString *indexNumberString;

- (id)initWithCollectionViewCell:(id)arg1;

- (id)initWithParentView:(id)arg1;

- (id)initWithTableViewCell:(id)arg1;

@property(nonatomic, getter=isLargeSpacing) _Bool largeSpacing; // @synthesize largeSpacing=_largeSpacing;

- (void)layoutForItemOfferChange;

- (void)layoutSubviews;

@property(nonatomic) long long numberOfUserRatings; // @synthesize numberOfUserRatings=_numberOfUserRatings;

- (void)setBackgroundColor:(id)arg1;

- (void)setColoringWithColorScheme:(id)arg1;

- (void)setIconImage:(id)arg1;

@property(copy, nonatomic) NSString *title;

@property(nonatomic) double userRating; // @synthesize userRating=_userRating;



@end

