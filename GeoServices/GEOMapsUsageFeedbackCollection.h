/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class GEOPlaceActionDetails;



@interface GEOMapsUsageFeedbackCollection : PBCodable <NSCopying>

{

    CDStruct_612aec5b _sessionID;

    double _sessionRelativeTimestamp;

    int _actionType;

    GEOPlaceActionDetails *_placeActionDetails;

    struct {

        unsigned int sessionID:1;

        unsigned int sessionRelativeTimestamp:1;

        unsigned int actionType:1;

    } _has;

}



@property(nonatomic) int actionType; // @synthesize actionType=_actionType;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(nonatomic) _Bool hasActionType;

@property(readonly, nonatomic) _Bool hasPlaceActionDetails;

@property(nonatomic) _Bool hasSessionID;

@property(nonatomic) _Bool hasSessionRelativeTimestamp;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(retain, nonatomic) GEOPlaceActionDetails *placeActionDetails; // @synthesize placeActionDetails=_placeActionDetails;

- (_Bool)readFrom:(id)arg1;

@property(nonatomic) CDStruct_612aec5b sessionID; // @synthesize sessionID=_sessionID;

@property(nonatomic) double sessionRelativeTimestamp; // @synthesize sessionRelativeTimestamp=_sessionRelativeTimestamp;

- (void)writeTo:(id)arg1;



@end

