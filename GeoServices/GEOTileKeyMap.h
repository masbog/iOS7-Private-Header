/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface GEOTileKeyMap : NSObject

{

    long long _type;

    void *_map;

}



- (id)contentsDescription;

- (unsigned long long)count;

- (void)dealloc;

- (id)initWithMapType:(long long)arg1;

- (id)objectForKey:(const struct _GEOTileKey *)arg1;

- (void)removeObjectForKey:(const struct _GEOTileKey *)arg1;

- (void)setObject:(id)arg1 forKey:(const struct _GEOTileKey *)arg2;



@end


