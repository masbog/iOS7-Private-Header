/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"

#import "NSCopying.h"

#import "NSMutableCopying.h"



__attribute__((visibility("hidden")))

@interface TSUPair : NSObject <NSCopying, NSMutableCopying, NSCoding>

{

    id mFirst;

    id mSecond;

}



+ (id)pair;

+ (id)pairWithFirst:(id)arg1 second:(id)arg2;

+ (id)pairWithPair:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (void)encodeWithCoder:(id)arg1;

- (id)first;

- (unsigned long long)hash;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithFirst:(id)arg1 second:(id)arg2;

- (id)initWithPair:(id)arg1;

- (_Bool)isEqual:(id)arg1;

- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

- (void)p_SetFirst:(id)arg1;

- (void)p_SetSecond:(id)arg1;

- (id)second;



@end


