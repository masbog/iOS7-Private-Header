/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray;



@interface SUDelayedQuitController : NSObject

{

    long long _delayTerminateCount;

    NSMutableArray *_longLivedViewControllers;

}



+ (void)beginDelayingTerminate;

+ (void)checkInLongLivedViewController:(id)arg1;

+ (void)checkOutLongLivedViewController:(id)arg1;

+ (id)checkedInViewControllerOfClass:(Class)arg1;

+ (void)endDelayingTerminate;

+ (_Bool)isDelayingTerminate;

+ (id)sharedInstance;

+ (_Bool)viewControllerIsLongLived:(id)arg1;

- (void)_beginDelayingTerminate;

- (void)_checkInLongLivedViewController:(id)arg1;

- (void)_checkOutLongLivedViewController:(id)arg1;

- (id)_checkedInViewControllerOfClass:(Class)arg1;

- (void)_endDelayingTerminate;

- (_Bool)_isDelayingTerminate;

- (_Bool)_viewControllerIsLongLived:(id)arg1;

- (void)dealloc;



@end

