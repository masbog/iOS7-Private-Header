/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"



@class NSString;



@interface ISURLCacheConfiguration : NSObject <NSCopying>

{

    unsigned long long _diskCapacity;

    unsigned long long _memoryCapacity;

    NSString *_persistentIdentifier;

}



- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

@property(nonatomic) unsigned long long diskCapacity; // @synthesize diskCapacity=_diskCapacity;

@property(nonatomic) unsigned long long memoryCapacity; // @synthesize memoryCapacity=_memoryCapacity;

@property(copy, nonatomic) NSString *persistentIdentifier; // @synthesize persistentIdentifier=_persistentIdentifier;



@end

