/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSManagedObject.h"



@class NSDate, NSString;



@interface RadioManagedTrackHistory : NSManagedObject

{

}



@property(copy, nonatomic) NSString *stationHash;

@property(nonatomic) long long stationID;

@property(copy, nonatomic) NSString *stationName;

@property(nonatomic) long long trackStoreID;



// Remaining properties

@property(copy, nonatomic) NSDate *date; // @dynamic date;



@end

