/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableSet, NSProgress;



__attribute__((visibility("hidden")))

@interface _NSProgressGroup : NSObject

{

    NSProgress *_parent;

    long long _portionOfParent;

    NSMutableSet *_children;

    double _fractionCompleted;

    unsigned long long _finishedChildrenCount;

    _Bool _closed;

}



- (void)addChild:(id)arg1;

- (id)children;

- (void)close;

- (void)dealloc;

- (id)description;

- (double)fractionCompleted;

- (id)initWithParent:(id)arg1;

- (id)parent;

- (long long)portionOfParent;

- (void)setPortionOfParent:(long long)arg1;

- (void)stopNotifications;

- (void)updateChild:(id)arg1 oldFractionCompleted:(double)arg2 newFractionCompleted:(double)arg3 finished:(_Bool)arg4;



@end


