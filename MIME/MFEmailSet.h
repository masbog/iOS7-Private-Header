/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSMutableSet.h"



@interface MFEmailSet : NSMutableSet

{

    struct __CFSet *_set;

}



+ (id)set;

- (id)_generateAllObjectsFromSelector:(SEL)arg1;

- (void)addObject:(id)arg1;

- (id)allCommentedAddresses;

- (id)allObjects;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (unsigned long long)count;

- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;

- (void)dealloc;

- (id)init;

- (id)initWithCapacity:(unsigned long long)arg1;

- (void)intersectSet:(id)arg1;

- (_Bool)intersectsSet:(id)arg1;

- (_Bool)isEqualToSet:(id)arg1;

- (_Bool)isSubsetOfSet:(id)arg1;

- (id)member:(id)arg1;

- (void)minusSet:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (id)objectEnumerator;

- (void)removeAllObjects;

- (void)removeObject:(id)arg1;

- (void)setSet:(id)arg1;

- (void)unionSet:(id)arg1;



@end


