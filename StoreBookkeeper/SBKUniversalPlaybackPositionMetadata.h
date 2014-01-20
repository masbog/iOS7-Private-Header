/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "SBKSyncKeyValuePair.h"



@class NSString;



@interface SBKUniversalPlaybackPositionMetadata : NSObject <SBKSyncKeyValuePair, NSCopying>

{

    _Bool _hasBeenPlayed;

    NSString *_itemIdentifier;

    double _timestamp;

    double _bookmarkTime;

    unsigned long long _playCount;

}



+ (id)_testableMetadataItem_1;

+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;

+ (id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2;

+ (id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2 failuresOkay:(_Bool)arg3;

+ (id)metadataWithValuesFromDataSourceItem:(id)arg1;

- (void).cxx_destruct;

@property double bookmarkTime; // @synthesize bookmarkTime=_bookmarkTime;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (id)description;

@property _Bool hasBeenPlayed; // @synthesize hasBeenPlayed=_hasBeenPlayed;

- (unsigned long long)hash;

- (id)init;

- (id)initAsTestableItem;

- (_Bool)isEqual:(id)arg1;

@property(copy) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;

- (id)keyValueStorePayload;

- (id)kvsKey;

- (id)kvsPayload;

- (id)kvsValueDescription;

@property unsigned long long playCount; // @synthesize playCount=_playCount;

@property double timestamp; // @synthesize timestamp=_timestamp;



@end

