/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSOperationQueue;



@interface ISOperationQueue : NSObject

{

    NSOperationQueue *_queue;

}



+ (id)mainQueue;

- (void)addOperation:(id)arg1;

- (void)addOperations:(id)arg1 waitUntilFinished:(_Bool)arg2;

@property _Bool adjustsMaxConcurrentOperationCount;

- (void)cancelAllOperations;

- (void)dealloc;

- (id)init;

- (long long)maxConcurrentOperationCount;

- (id)name;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

- (long long)operationCount;

- (id)operations;

- (void)setMaxConcurrentOperationCount:(long long)arg1;

- (void)setName:(id)arg1;

- (void)setSuspended:(_Bool)arg1;



@end


