/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PBCodable.h"



#import "NSCopying.h"



@class GEOLatLng, GEOMapRegion, NSData;



@interface GEORPMapLocation : PBCodable <NSCopying>

{

    GEOLatLng *_coordinate;

    NSData *_image;

    GEOMapRegion *_mapRegion;

    float _zoomLevel;

    struct {

        unsigned int zoomLevel:1;

    } _has;

}



@property(retain, nonatomic) GEOLatLng *coordinate; // @synthesize coordinate=_coordinate;

- (void)copyTo:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

@property(readonly, nonatomic) _Bool hasCoordinate;

@property(readonly, nonatomic) _Bool hasImage;

@property(readonly, nonatomic) _Bool hasMapRegion;

@property(nonatomic) _Bool hasZoomLevel;

- (unsigned long long)hash;

@property(retain, nonatomic) NSData *image; // @synthesize image=_image;

- (_Bool)isEqual:(id)arg1;

@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;

- (_Bool)readFrom:(id)arg1;

@property(nonatomic) float zoomLevel; // @synthesize zoomLevel=_zoomLevel;

- (void)writeTo:(id)arg1;



@end


