/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIPercentDrivenInteractiveTransition.h"


#import "UIGestureRecognizerDelegate.h"



@class CADisplayLink, UIGestureRecognizer, UIPanGestureRecognizer, UIView, UIViewController, _UINavigationParallaxTransition;



@interface _UINavigationInteractiveTransitionBase : UIPercentDrivenInteractiveTransition <UIGestureRecognizerDelegate>

{

    UIView *_gestureRecognizerView;

    UIPanGestureRecognizer *_gestureRecognizer;

    long long __interactionState;

    _Bool __transitionWasStopped;

    _Bool __stoppedTransitionWasCancelled;

    UIViewController *__parent;

    _Bool __useAugmentedShouldPopDecisionProcedure;

    _Bool __completesTransitionOnEnd;

    CADisplayLink *_displayLink;

    double _timestamps[3];

    double _velocities[3];

    double _accelerations[3];

    _Bool _shouldReverseTranslation;

    _Bool _springAnimationIsPending;

    _Bool _inSpringAnimation;

    _UINavigationParallaxTransition *_animationController;

    id <_UINavigationInteractiveTransitionBaseDelegate> _delegate;

    unsigned long long _sampleCount;

    double _totalDistance;

    double _skipTimeStamp;

    double _previousTimeStamp;

    double _previousDisplacement;

    double _previousVelocity;

    double _previousAcceleration;

    double _averageVelocity;

    double _averageAcceleration;

}



- (void)_completeStoppedInteractiveTransition;

@property(nonatomic, setter=_setCompletesTransitionOnEnd:) _Bool _completesTransitionOnEnd; // @synthesize _completesTransitionOnEnd=__completesTransitionOnEnd;

- (_Bool)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;

@property(nonatomic, setter=_setInteractionState:) long long _interactionState; // @synthesize _interactionState=__interactionState;

@property(readonly, nonatomic, getter=_navigationGesture) UIGestureRecognizer *navigationGesture;

@property(nonatomic, setter=_setParent:) UIViewController *_parent; // @synthesize _parent=__parent;

- (void)_resetInteractionController;

@property(nonatomic, setter=_setStoppedTransitionWasCancelled:) _Bool _stoppedTransitionWasCancelled; // @synthesize _stoppedTransitionWasCancelled=__stoppedTransitionWasCancelled;

@property(nonatomic, setter=_setTransitionWasStopped:) _Bool _transitionWasStopped; // @synthesize _transitionWasStopped=__transitionWasStopped;

@property(nonatomic, setter=_setUseAugmentedShouldPopDecisionProcedure:) _Bool _useAugmentedShouldPopDecisionProcedure; // @synthesize _useAugmentedShouldPopDecisionProcedure=__useAugmentedShouldPopDecisionProcedure;

- (void)_stopInteractiveTransition;

- (void)_updateStatistics:(id)arg1 firstSample:(_Bool)arg2 finalSample:(_Bool)arg3;

@property(retain, nonatomic) _UINavigationParallaxTransition *animationController; // @synthesize animationController=_animationController;

@property(nonatomic) double averageAcceleration; // @synthesize averageAcceleration=_averageAcceleration;

@property(nonatomic) double averageVelocity; // @synthesize averageVelocity=_averageVelocity;

- (void)cancelInteractiveTransition;

- (void)dealloc;

@property(nonatomic) id <_UINavigationInteractiveTransitionBaseDelegate> delegate; // @synthesize delegate=_delegate;

- (void)finishInteractiveTransition;

@property(nonatomic) UIPanGestureRecognizer *gestureRecognizer; // @synthesize gestureRecognizer=_gestureRecognizer;

- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;

- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;

- (_Bool)gestureRecognizerShouldBegin:(id)arg1;

- (id)gestureRecognizerView;

- (void)handleNavigationTransition:(id)arg1;

@property(nonatomic) _Bool inSpringAnimation; // @synthesize inSpringAnimation=_inSpringAnimation;

- (id)initWithGestureRecognizerView:(id)arg1 animator:(id)arg2 delegate:(id)arg3;

- (_Bool)popGesture:(id)arg1 withRemainingDuration:(double)arg2 shouldPopWithVelocity:(double *)arg3;

@property(nonatomic) double previousAcceleration; // @synthesize previousAcceleration=_previousAcceleration;

@property(nonatomic) double previousDisplacement; // @synthesize previousDisplacement=_previousDisplacement;

@property(nonatomic) double previousTimeStamp; // @synthesize previousTimeStamp=_previousTimeStamp;

@property(nonatomic) double previousVelocity; // @synthesize previousVelocity=_previousVelocity;

@property(nonatomic) unsigned long long sampleCount; // @synthesize sampleCount=_sampleCount;

- (void)setNotInteractiveTransition;

@property(nonatomic) _Bool shouldReverseTranslation; // @synthesize shouldReverseTranslation=_shouldReverseTranslation;

@property(nonatomic) double skipTimeStamp; // @synthesize skipTimeStamp=_skipTimeStamp;

@property(nonatomic) _Bool springAnimationIsPending; // @synthesize springAnimationIsPending=_springAnimationIsPending;

@property(nonatomic) double totalDistance; // @synthesize totalDistance=_totalDistance;

- (void)startInteractiveTransition;

- (void)startInteractiveTransition:(id)arg1;



@end

