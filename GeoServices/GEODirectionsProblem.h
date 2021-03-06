/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class NSData, NSMutableArray;



@interface GEODirectionsProblem : PBCodable <NSCopying>

{

    unsigned long long _problematicEventIndex;

    NSMutableArray *_directionsRequests;

    NSMutableArray *_directionsResponses;

    NSMutableArray *_events;

    NSData *_overviewScreenshotImageData;

    unsigned int _problematicResponseIndex;

    NSData *_problematicRouteID;

    unsigned int _problematicStepIndex;

    CDStruct_d18ab72a _has;

}



- (void)addDirectionsRequests:(id)arg1;

- (void)addDirectionsResponses:(id)arg1;

- (void)addEvents:(id)arg1;

- (void)clearDirectionsRequests;

- (void)clearDirectionsResponses;

- (void)clearEvents;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(retain, nonatomic) NSMutableArray *directionsRequests; // @synthesize directionsRequests=_directionsRequests;

- (id)directionsRequestsAtIndex:(unsigned long long)arg1;

- (unsigned long long)directionsRequestsCount;

@property(retain, nonatomic) NSMutableArray *directionsResponses; // @synthesize directionsResponses=_directionsResponses;

- (id)directionsResponsesAtIndex:(unsigned long long)arg1;

- (unsigned long long)directionsResponsesCount;

@property(retain, nonatomic) NSMutableArray *events; // @synthesize events=_events;

- (id)eventsAtIndex:(unsigned long long)arg1;

- (unsigned long long)eventsCount;

@property(readonly, nonatomic) _Bool hasOverviewScreenshotImageData;

@property(nonatomic) _Bool hasProblematicEventIndex;

@property(nonatomic) _Bool hasProblematicResponseIndex;

@property(readonly, nonatomic) _Bool hasProblematicRouteID;

@property(nonatomic) _Bool hasProblematicStepIndex;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(retain, nonatomic) NSData *overviewScreenshotImageData; // @synthesize overviewScreenshotImageData=_overviewScreenshotImageData;

@property(nonatomic) unsigned long long problematicEventIndex; // @synthesize problematicEventIndex=_problematicEventIndex;

@property(nonatomic) unsigned int problematicResponseIndex; // @synthesize problematicResponseIndex=_problematicResponseIndex;

@property(retain, nonatomic) NSData *problematicRouteID; // @synthesize problematicRouteID=_problematicRouteID;

@property(nonatomic) unsigned int problematicStepIndex; // @synthesize problematicStepIndex=_problematicStepIndex;

- (_Bool)readFrom:(id)arg1;

- (void)writeTo:(id)arg1;



@end


