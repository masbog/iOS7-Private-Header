/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSKeyValueMutableArray.h"


@class NSKeyValueMutatingArrayMethodSet;



__attribute__((visibility("hidden")))

@interface NSKeyValueFastMutableArray : NSKeyValueMutableArray

{

    NSKeyValueMutatingArrayMethodSet *_mutatingMethods;

}



- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;

- (void)_proxyNonGCFinalize;

- (void)addObject:(id)arg1;

- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;

- (void)insertObjects:(id)arg1 atIndexes:(id)arg2;

- (void)removeLastObject;

- (void)removeObjectAtIndex:(unsigned long long)arg1;

- (void)removeObjectsAtIndexes:(id)arg1;

- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;

- (void)replaceObjectsAtIndexes:(id)arg1 withObjects:(id)arg2;



@end

