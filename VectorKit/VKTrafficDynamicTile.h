/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VKTile.h"


__attribute__((visibility("hidden")))

@interface VKTrafficDynamicTile : VKTile

{

    struct _GEOTileKey _downloadKey;

    struct shared_ptr<zilch::TrafficDynamicTile> _tile;

    struct unordered_multimap<long long, const zilch::TrafficDynamicTile::Flow *, std::__1::hash<long long>, std::__1::equal_to<long long>, vk_allocator<std::__1::pair<const long long, const zilch::TrafficDynamicTile::Flow *>>> _flows;

}



- (id).cxx_construct;

- (void).cxx_destruct;

- (void)dealloc;

- (int)flowForRoadId:(long long)arg1 buffer:(const struct Flow **)arg2 maxSize:(int)arg3;

- (const struct Incident *)incidentAtIndex:(unsigned int)arg1;

@property(readonly, nonatomic) unsigned int incidentCount;

- (id)initWithKey:(const struct VKTileKey *)arg1 downloadKey:(const struct _GEOTileKey *)arg2 data:(id)arg3;

@property(readonly, nonatomic) long long updateTime;



@end


