/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKPersistentObject.h"


#import "NSCopying.h"



@class EKPersistentLocation, NSData, NSDate, NSSet, NSString, NSTimeZone;



@interface EKPersistentAlarm : EKPersistentObject <NSCopying>

{

}



+ (id)defaultPropertiesToLoad;

+ (id)relations;

@property(readonly, nonatomic) NSString *UUID;

@property(copy, nonatomic) NSDate *absoluteDate;

@property(copy, nonatomic) NSDate *acknowledgedDate;

@property(nonatomic) int alarmType;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

- (int)entityType;

@property(copy, nonatomic) NSData *externalData;

@property(copy, nonatomic) NSString *externalID;

- (id)init;

@property(readonly, nonatomic) _Bool isAbsolute;

@property(nonatomic, getter=isDefaultAlarm) _Bool defaultAlarm;

@property(copy, nonatomic) EKPersistentLocation *location;

@property(retain, nonatomic) EKPersistentAlarm *originalAlarm;

- (id)owner;

@property(nonatomic) long long proximity;

@property(nonatomic) double relativeOffset;

- (void)setOwner:(id)arg1;

@property(copy, nonatomic) NSSet *snoozedAlarms;

@property(copy, nonatomic) NSTimeZone *timeZone;

- (_Bool)validate:(id *)arg1;



@end

