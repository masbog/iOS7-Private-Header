/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



__attribute__((visibility("hidden")))

@interface GEOVLaneConnection : PBCodable

{

    unsigned int _firstLaneIndex;

    unsigned int _firstRoadIndex;

    unsigned int _secondLaneIndex;

    unsigned int _secondRoadIndex;

}



- (void)copyTo:(id)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(nonatomic) unsigned int firstLaneIndex; // @synthesize firstLaneIndex=_firstLaneIndex;

@property(nonatomic) unsigned int firstRoadIndex; // @synthesize firstRoadIndex=_firstRoadIndex;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

- (_Bool)readFrom:(id)arg1;

@property(nonatomic) unsigned int secondLaneIndex; // @synthesize secondLaneIndex=_secondLaneIndex;

@property(nonatomic) unsigned int secondRoadIndex; // @synthesize secondRoadIndex=_secondRoadIndex;

- (void)writeTo:(id)arg1;



@end

