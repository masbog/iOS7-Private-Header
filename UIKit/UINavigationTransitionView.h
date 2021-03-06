/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"


#import "NSCoding.h"



@class UIResponder, UIWindow;



@interface UINavigationTransitionView : UIView <NSCoding>

{

    id _delegate;

    UIView *_fromView;

    UIView *_toView;

    long long _transition;

    UIResponder *_firstResponderToRestore;

    UIWindow *_originalWindow;

    double _fromViewAlpha;

    unsigned int _isTransitioning:1;

    unsigned int _popoverWillCleanUpNavigationTransition:1;

    unsigned int _usesRoundedCorners:1;

}



+ (double)defaultDurationForTransition:(long long)arg1;

- (void)_cleanupTransition;

- (void)_cleanupTransitionFromPopover;

- (_Bool)_isTransitioningFromView:(id)arg1;

- (void)_navigationTransitionDidStop;

- (void)_notifyDelegateTransitionDidStopWithContext:(id)arg1;

- (void)dealloc;

@property(nonatomic) id delegate; // @synthesize delegate=_delegate;

- (void)encodeWithCoder:(id)arg1;

@property(readonly) UIView *fromView; // @synthesize fromView=_fromView;

- (id)initWithCoder:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1;

@property(readonly) _Bool isTransitioning;

@property(nonatomic) _Bool popoverWillCleanUpNavigationTransition;

@property(nonatomic) _Bool usesRoundedCorners;

- (_Bool)transition:(long long)arg1 fromView:(id)arg2 toView:(id)arg3;

- (_Bool)transition:(long long)arg1 toView:(id)arg2;



@end


