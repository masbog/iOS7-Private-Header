/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MPImageCache.h"


@interface MPRadioImageCache : MPImageCache

{

}



+ (void)_cacheRawStationImage:(id)arg1 forKey:(id)arg2;

+ (void)_cacheRawTrackImage:(id)arg1 forKey:(id)arg2;

+ (struct CGSize)_maximumSizeForRadioStations;

+ (struct CGSize)_maximumSizeForRadioTracks;

+ (id)_rawStationImageForKey:(id)arg1;

+ (id)_rawTrackImageForKey:(id)arg1;

+ (void)initialize;

+ (void)registerRadioStationStyle:(id)arg1;

+ (void)registerRadioTrackStyle:(id)arg1;

+ (void)unregisterRadioStationStyle:(id)arg1;

+ (void)unregisterRadioTrackStyle:(id)arg1;



@end


