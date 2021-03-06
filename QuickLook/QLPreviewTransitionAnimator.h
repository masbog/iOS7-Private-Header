/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "UIViewControllerAnimatedTransitioning.h"

#import "UIViewControllerInteractiveTransitioning.h"



@class QLPreviewController;



@interface QLPreviewTransitionAnimator : NSObject <UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning>

{

    _Bool showing;

    id <UIViewControllerContextTransitioning> _transitionContext;

}



- (long long)_transitionStateForAnimationEnding:(_Bool)arg1;

- (void)animateTransition:(id)arg1;

- (void)didTransitionWithAnimationEnding:(_Bool)arg1;

@property(readonly) QLPreviewController *previewController;

@property _Bool showing; // @synthesize showing;

@property id <UIViewControllerContextTransitioning> transitionContext; // @synthesize transitionContext=_transitionContext;

- (void)startInteractiveTransition:(id)arg1;

- (double)transitionDuration:(id)arg1;

- (void)updateStatusBarWithDuration:(double)arg1;

- (void)willTransitionWithAnimationEnding:(_Bool)arg1;



@end


