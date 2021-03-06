/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "GKBubbleControl.h"


@class GKBubbleStackedContentView, NSArray;



@interface GKBubbleWithStackedContent : GKBubbleControl

{

    double _maximumDimension;

    GKBubbleStackedContentView *_contentView;

    NSArray *_dimensionConstraints;

}



+ (void)initialize;

+ (double)maximumDimensionBasedOnDeviceAdjustForTallness:(_Bool)arg1;

@property(retain, nonatomic) GKBubbleStackedContentView *contentView; // @synthesize contentView=_contentView;

- (void)dealloc;

- (void)didMoveToWindow;

@property(retain, nonatomic) NSArray *dimensionConstraints; // @synthesize dimensionConstraints=_dimensionConstraints;

- (id)initWithFrame:(struct CGRect)arg1;

- (struct CGSize)intrinsicContentSize;

- (void)invalidateIntrinsicContentSize;

@property(nonatomic) double maximumDimension;

@property(nonatomic) double paddingSizeMultiplier;

- (void)setCenter:(struct CGPoint)arg1;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

- (void)updateConstraints;



@end


