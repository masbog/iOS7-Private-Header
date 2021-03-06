/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIControl.h"


@class NSMutableArray, NSTimer, UIImageView, UILabel, UIView;



@interface UICalloutView : UIControl

{

    UIImageView *_leftCap;

    UIImageView *_rightCap;

    UIImageView *_topAnchor;

    UIImageView *_bottomAnchor;

    UIImageView *_leftBackground;

    UIImageView *_rightBackground;

    UILabel *_title;

    UILabel *_subtitle;

    UILabel *_temporary;

    UIView *_leftView;

    UIView *_rightView;

    struct {

        struct CGPoint origin;

        struct CGPoint offset;

        int position;

        struct CGPoint desiredPoint;

        struct CGRect desiredBounds;

    } _anchor;

    struct CGRect _frame;

    id _delegate;

    struct {

        unsigned int animated:1;

        unsigned int didMoveCalled:1;

        unsigned int hasPendingAnimatedLayout:1;

        unsigned int canAnchorFromBottom:1;

        unsigned int reserved:28;

    } _flags;

    NSMutableArray *_fadeInViews;

    NSMutableArray *_fadeOutViews;

    NSTimer *_layoutAnimationTimer;

    double _maximumWidth;

}



+ (id)_backgroundImage;

+ (id)_bottomAnchorImage;

+ (id)_leftCapImage;

+ (id)_rightCapImage;

+ (id)_topAnchorImage;

+ (double)defaultHeight;

+ (id)sharedCalloutView;

@property(readonly, nonatomic) double UICalloutViewButtonPadding;

@property(readonly, nonatomic) double UICalloutViewCapHeight;

@property(readonly, nonatomic) double UICalloutViewCapPaddingTop;

@property(readonly, nonatomic) double UICalloutViewHorizontalMargin;

@property(readonly, nonatomic) double UICalloutViewHorizontalPadding;

@property(readonly, nonatomic) double UICalloutViewLayoutDuration;

@property(readonly, nonatomic) double UICalloutViewMinimumWidth;

@property(readonly, nonatomic) double UICalloutViewVerticalMargin;

- (void)_fadeViewsIn:(_Bool)arg1;

- (void)_layoutAnimation;

- (void)_layoutSubviews:(_Bool)arg1;

- (void)_markDidMoveCalled;

- (void)_scheduleLayoutAnimation;

- (void)_scheduleViewToFadeIn:(id)arg1;

- (void)_scheduleViewToFadeOut:(id)arg1;

- (void)_setLayoutAnimationTimer:(id)arg1;

- (void)_setLeftView:(id)arg1;

- (void)_setOriginForScale:(double)arg1;

- (void)_setRightView:(id)arg1;

- (void)addTarget:(id)arg1 action:(SEL)arg2;

- (struct CGPoint)anchorPoint;

- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;

@property(nonatomic) _Bool canAnchorFromBottom;

- (void)completeBounceAnimation;

- (void)dealloc;

- (id)delegate;

- (void)fadeOutWithDuration:(double)arg1;

- (void)getActualAnchorPoint:(struct CGPoint *)arg1 frame:(struct CGRect *)arg2 position:(int *)arg3 forDesiredAnchorPoint:(struct CGPoint)arg4 boundaryRect:(struct CGRect)arg5;

- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1;

@property(retain, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;

@property(nonatomic) double maximumWidth; // @synthesize maximumWidth=_maximumWidth;

- (struct CGPoint)offset;

- (void)removeTarget:(id)arg1;

@property(retain, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;

- (void)setAnchorPoint:(struct CGPoint)arg1 boundaryRect:(struct CGRect)arg2 animate:(_Bool)arg3;

- (void)setDelegate:(id)arg1;

- (void)setLeftView:(id)arg1 animated:(_Bool)arg2;

- (void)setOffset:(struct CGPoint)arg1;

- (void)setRightView:(id)arg1 animated:(_Bool)arg2;

- (void)setSubtitle:(id)arg1;

- (void)setSubtitle:(id)arg1 animated:(_Bool)arg2;

@property(nonatomic) long long subtitleLineBreakMode;

@property(nonatomic) long long subtitleTextAlignment;

- (void)setTemporaryTitle:(id)arg1;

- (void)setTitle:(id)arg1;

@property(nonatomic) long long titleLineBreakMode;

@property(nonatomic) long long titleTextAlignment;

- (id)subtitle;

- (id)temporaryTitle;

- (id)title;



@end


