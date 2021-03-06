/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKPersistentObject.h"


#import "NSCopying.h"



@class EKPersistentCalendarItem, EKRecurrenceEnd, NSArray, NSDate, NSString;



@interface EKPersistentRecurrenceRule : EKPersistentObject <NSCopying>

{

    id _helper;

    EKRecurrenceEnd *_recurrenceEnd;

}



+ (id)defaultPropertiesToLoad;

+ (id)relations;

@property(readonly, nonatomic) NSString *UUID;

- (id)_helper;

@property(readonly, nonatomic) NSDate *cachedEndDate;

@property(readonly, nonatomic) NSString *calendarIdentifier;

- (id)copyWithZone:(struct _NSZone *)arg1;

@property(nonatomic) unsigned long long count;

@property(copy, nonatomic) NSArray *daysOfTheMonth;

@property(copy, nonatomic) NSArray *daysOfTheWeek;

@property(copy, nonatomic) NSArray *daysOfTheYear;

- (void)dealloc;

- (id)description;

@property(copy, nonatomic) NSDate *endDate;

- (int)entityType;

@property(nonatomic) long long firstDayOfTheWeek;

@property(nonatomic) int frequency;

- (CDStruct_6e43267c)gregorianUnits;

- (id)init;

@property(nonatomic) long long interval;

- (_Bool)isDirty;

@property(copy, nonatomic) NSArray *monthsOfTheYear;

@property(retain, nonatomic) EKPersistentCalendarItem *owner;

@property(copy, nonatomic) NSArray *setPositions;

@property(copy, nonatomic) NSArray *weeksOfTheYear;

@property(readonly, nonatomic) _Bool shouldPinMonthDays;

- (_Bool)validate:(id *)arg1;



@end


