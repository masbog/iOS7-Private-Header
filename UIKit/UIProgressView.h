/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


#import "NSCoding.h"



@class CAGradientLayer, UIColor, UIImage, UIImageView;



@interface UIProgressView : UIView <NSCoding>

{

    long long _progressViewStyle;

    float _progress;

    long long _barStyle;

    UIColor *_progressTintColor;

    UIColor *_trackTintColor;

    UIImageView *_trackView;

    UIImageView *_progressView;

    _Bool _isAnimating;

    _Bool _useArtwork;

    CAGradientLayer *_trackGradientLayer;

    CAGradientLayer *_progressGradientLayer;

    struct CGRect _previousBounds;

    struct CGRect _previousProgressBounds;

    UIImage *_trackImage;

    UIImage *_progressImage;

}



+ (int)_indexForStyle:(long long)arg1 barStyle:(long long)arg2;

+ (CDStruct_d58a15aa)_standardImagesForStyle:(long long)arg1 barStyle:(long long)arg2;

+ (struct CGSize)defaultSize;

- (id)_appropriateProgressImage;

- (id)_appropriateTrackImage;

- (_Bool)_contentHuggingDefault_isUsuallyFixedHeight;

- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg1;

- (void)_populateArchivedSubviews:(id)arg1;

- (id)_progressColor;

- (void)_setProgress:(float)arg1;

- (void)_setProgressAnimated:(float)arg1 duration:(double)arg2 delay:(double)arg3 options:(unsigned long long)arg4;

- (void)_setProgressColor:(id)arg1;

- (_Bool)_shouldTintProgress;

- (_Bool)_shouldTintTrack;

- (void)_updateImages;

- (struct UIEdgeInsets)alignmentRectInsets;

- (long long)barStyle;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

- (id)initWithCoder:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

- (id)initWithProgressViewStyle:(long long)arg1;

- (_Bool)isElementAccessibilityExposedToInterfaceBuilder;

- (void)layoutSubviews;

@property(nonatomic) float progress; // @synthesize progress=_progress;

@property(retain, nonatomic) UIImage *progressImage; // @synthesize progressImage=_progressImage;

@property(retain, nonatomic) UIColor *progressTintColor; // @synthesize progressTintColor=_progressTintColor;

@property(nonatomic) long long progressViewStyle; // @synthesize progressViewStyle=_progressViewStyle;

- (void)setBarStyle:(long long)arg1;

- (void)setBounds:(struct CGRect)arg1;

- (void)setFrame:(struct CGRect)arg1;

- (void)setProgress:(float)arg1 animated:(_Bool)arg2;

@property(retain, nonatomic) UIImage *trackImage; // @synthesize trackImage=_trackImage;

@property(retain, nonatomic) UIColor *trackTintColor; // @synthesize trackTintColor=_trackTintColor;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;



@end


