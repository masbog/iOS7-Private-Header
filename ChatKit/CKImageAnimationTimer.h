/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CADisplayLink, NSMutableSet;



@interface CKImageAnimationTimer : NSObject

{

    unsigned long long _frame;

    NSMutableSet *_observers;

    CADisplayLink *_displayLink;

}



+ (id)sharedTimer;

- (void)addAnimationTimerObserver:(id)arg1;

- (void)animationTimerFired;

- (void)dealloc;

@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;

- (unsigned long long)frame;

- (id)init;

@property(retain, nonatomic) NSMutableSet *observers; // @synthesize observers=_observers;

- (void)removeAnimationTimerObserver:(id)arg1;



@end


