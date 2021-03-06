/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



@class GEOVLaneCharacteristic;



__attribute__((visibility("hidden")))

@interface GEOVPointCharacteristic : PBCodable

{

    GEOVLaneCharacteristic *_laneCharacteristic;

    int _roadLaneCount;

    int _roadOffset;

    int _sectionIndex;

    int _vertexIndex;

    int _zLevel;

    _Bool _brunnelEntry;

    _Bool _castShadow;

    _Bool _cropped;

    _Bool _shouldDrawLanes;

    struct {

        unsigned int roadLaneCount:1;

        unsigned int roadOffset:1;

        unsigned int sectionIndex:1;

        unsigned int vertexIndex:1;

        unsigned int zLevel:1;

        unsigned int brunnelEntry:1;

        unsigned int castShadow:1;

        unsigned int cropped:1;

        unsigned int shouldDrawLanes:1;

    } _has;

}



@property(nonatomic) _Bool brunnelEntry; // @synthesize brunnelEntry=_brunnelEntry;

@property(nonatomic) _Bool castShadow; // @synthesize castShadow=_castShadow;

- (void)copyTo:(id)arg1;

@property(nonatomic) _Bool cropped; // @synthesize cropped=_cropped;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(nonatomic) _Bool hasBrunnelEntry;

@property(nonatomic) _Bool hasCastShadow;

@property(nonatomic) _Bool hasCropped;

@property(readonly, nonatomic) _Bool hasLaneCharacteristic;

@property(nonatomic) _Bool hasRoadLaneCount;

@property(nonatomic) _Bool hasRoadOffset;

@property(nonatomic) _Bool hasSectionIndex;

@property(nonatomic) _Bool hasShouldDrawLanes;

@property(nonatomic) _Bool hasVertexIndex;

@property(nonatomic) _Bool hasZLevel;

- (unsigned long long)hash;

- (_Bool)isEqual:(id)arg1;

@property(retain, nonatomic) GEOVLaneCharacteristic *laneCharacteristic; // @synthesize laneCharacteristic=_laneCharacteristic;

- (_Bool)readFrom:(id)arg1;

@property(nonatomic) int roadLaneCount; // @synthesize roadLaneCount=_roadLaneCount;

@property(nonatomic) int roadOffset; // @synthesize roadOffset=_roadOffset;

@property(nonatomic) int sectionIndex; // @synthesize sectionIndex=_sectionIndex;

@property(nonatomic) _Bool shouldDrawLanes; // @synthesize shouldDrawLanes=_shouldDrawLanes;

@property(nonatomic) int vertexIndex; // @synthesize vertexIndex=_vertexIndex;

@property(nonatomic) int zLevel; // @synthesize zLevel=_zLevel;

- (void)writeTo:(id)arg1;



@end


