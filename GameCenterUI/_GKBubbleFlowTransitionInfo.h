/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class GKBubblePathAnimator, NSArray, UIViewController, UIViewController<GKBubbleFlowableViewController>, _GKBubbleFlowPathTransitionInfo;



@interface _GKBubbleFlowTransitionInfo : NSObject <NSCopying>

{

    UIViewController<GKBubbleFlowableViewController> *_toVC;

    UIViewController<GKBubbleFlowableViewController> *_fromVC;

    UIViewController *_toWrapperVC;

    UIViewController *_fromWrapperVC;

    UIViewController *_containingViewController;

    CDStruct_b207fc29 _toFlags;

    CDStruct_b207fc29 _fromFlags;

    NSArray *_fromBubbles;

    NSArray *_toBubbles;

    long long _toFocusBubbleType;

    long long _fromFocusBubbleType;

    long long _transitionType;

    long long _transitionPhase;

    double _startTime;

    double _duration;

    double _fadeOutDuration;

    double _crossfadeDuration;

    double _fadeInDuration;

    double _relativeDuration;

    double _relativeStartTime;

    double _relativeFadeOutDuration;

    double _relativeCrossfadeDuration;

    double _relativeFadeInDuration;

    GKBubblePathAnimator *_toPathAnimator;

    GKBubblePathAnimator *_fromPathAnimator;

    GKBubblePathAnimator *_onlyPathAnimator;

    _GKBubbleFlowPathTransitionInfo *_toPathTransitionInfo;

    _GKBubbleFlowPathTransitionInfo *_fromPathTransitionInfo;

    _GKBubbleFlowPathTransitionInfo *_onlyPathTransitionInfo;

    _Bool _fadedOutRealFromView;

    _Bool _disableInteractionDuringTransition;

}



- (void)adjustDuration:(double)arg1;

@property(readonly, nonatomic) _Bool animated;

@property(retain, nonatomic) UIViewController *containingViewController; // @synthesize containingViewController=_containingViewController;

- (id)copyForPhase:(long long)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;

- (void)dealloc;

- (id)description;

@property(nonatomic) _Bool disableInteractionDuringTransition; // @synthesize disableInteractionDuringTransition=_disableInteractionDuringTransition;

@property(nonatomic) double duration; // @synthesize duration=_duration;

@property(nonatomic) double fadeInDuration; // @synthesize fadeInDuration=_fadeInDuration;

@property(nonatomic) double fadeOutDuration; // @synthesize fadeOutDuration=_fadeOutDuration;

@property(nonatomic) _Bool fadedOutRealFromView; // @synthesize fadedOutRealFromView=_fadedOutRealFromView;

@property(retain, nonatomic) NSArray *fromBubbles; // @synthesize fromBubbles=_fromBubbles;

@property(nonatomic) CDStruct_b207fc29 fromFlags; // @synthesize fromFlags=_fromFlags;

@property(nonatomic) long long fromFocusBubbleType; // @synthesize fromFocusBubbleType=_fromFocusBubbleType;

@property(retain, nonatomic) GKBubblePathAnimator *fromPathAnimator; // @synthesize fromPathAnimator=_fromPathAnimator;

@property(retain, nonatomic) _GKBubbleFlowPathTransitionInfo *fromPathTransitionInfo; // @synthesize fromPathTransitionInfo=_fromPathTransitionInfo;

@property(retain, nonatomic) UIViewController<GKBubbleFlowableViewController> *fromVC; // @synthesize fromVC=_fromVC;

@property(retain, nonatomic) UIViewController *fromWrapperVC; // @synthesize fromWrapperVC=_fromWrapperVC;

@property(readonly, nonatomic) _Bool hasNonFallbackPathAnimator;

- (id)init;

@property(retain, nonatomic) GKBubblePathAnimator *onlyPathAnimator; // @synthesize onlyPathAnimator=_onlyPathAnimator;

@property(retain, nonatomic) _GKBubbleFlowPathTransitionInfo *onlyPathTransitionInfo; // @synthesize onlyPathTransitionInfo=_onlyPathTransitionInfo;

@property(readonly, nonatomic) UIViewController *realFromVC;

@property(readonly, nonatomic) UIViewController *realToVC;

- (void)recalculateDurationsAfterAdjustment;

@property(nonatomic) double relativeCrossfadeDuration; // @synthesize relativeCrossfadeDuration=_relativeCrossfadeDuration;

@property(nonatomic) double relativeDuration; // @synthesize relativeDuration=_relativeDuration;

@property(nonatomic) double relativeFadeInDuration; // @synthesize relativeFadeInDuration=_relativeFadeInDuration;

@property(nonatomic) double relativeFadeOutDuration; // @synthesize relativeFadeOutDuration=_relativeFadeOutDuration;

@property(nonatomic) double relativeStartTime; // @synthesize relativeStartTime=_relativeStartTime;

@property(nonatomic) double startTime; // @synthesize startTime=_startTime;

@property(retain, nonatomic) NSArray *toBubbles; // @synthesize toBubbles=_toBubbles;

@property(nonatomic) CDStruct_b207fc29 toFlags; // @synthesize toFlags=_toFlags;

@property(nonatomic) long long toFocusBubbleType; // @synthesize toFocusBubbleType=_toFocusBubbleType;

@property(retain, nonatomic) GKBubblePathAnimator *toPathAnimator; // @synthesize toPathAnimator=_toPathAnimator;

@property(retain, nonatomic) _GKBubbleFlowPathTransitionInfo *toPathTransitionInfo; // @synthesize toPathTransitionInfo=_toPathTransitionInfo;

@property(retain, nonatomic) UIViewController<GKBubbleFlowableViewController> *toVC; // @synthesize toVC=_toVC;

@property(retain, nonatomic) UIViewController *toWrapperVC; // @synthesize toWrapperVC=_toWrapperVC;

@property(nonatomic) long long transitionPhase; // @synthesize transitionPhase=_transitionPhase;

@property(nonatomic) long long transitionType; // @synthesize transitionType=_transitionType;



@end


