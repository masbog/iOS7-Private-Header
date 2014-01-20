/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "MPMediaLibraryDataProviderPrivate.h"



@class ML3MusicLibrary, NSArray, NSObject<OS_dispatch_queue>, NSSet, NSString;



@interface MPMediaLibraryDataProviderML3 : NSObject <MPMediaLibraryDataProviderPrivate>

{

    NSString *_uniqueIdentifier;

    NSObject<OS_dispatch_queue> *_backgroundTaskQueue;

    unsigned long long _backgroundTask;

    unsigned long long _backgroundTaskCount;

    _Bool _hasScheduledEventPosting;

    ML3MusicLibrary *_library;

    int _refreshState;

}



+ (id)_unadjustedValueForMPProperty:(id)arg1 withDefaultValue:(id)arg2;

- (void).cxx_destruct;

- (id)ML3SystemFilterPredicatesWithGroupingType:(long long)arg1 cloudTrackFilteringType:(long long)arg2 additionalFilterPredicates:(id)arg3;

- (void)_coalesceEvents;

- (_Bool)_dataProviderSupportsEntityChangeTracking;

- (void)_displayValuesDidChange:(id)arg1;

- (void)_dynamicPropertiesDidChange:(id)arg1;

- (void)_invisiblePropertiesDidChange:(id)arg1;

- (void)_libraryContentsDidChange:(id)arg1;

- (void)_libraryUIDDidChange:(id)arg1;

- (void)_loadProperties:(id)arg1 ofEntityWithIdentifier:(long long)arg2 ML3EntityClass:(Class)arg3 completionBlock:(id)arg4;

- (void)_loadValueForAggregateFunction:(id)arg1 entityClass:(Class)arg2 property:(id)arg3 query:(id)arg4 completionBlock:(id)arg5;

- (void)_postEvents;

- (_Bool)_removeEntitiesWithIdentifiers:(long long *)arg1 count:(unsigned long long)arg2 entityClass:(Class)arg3;

- (void)_syncGenerationDidChange:(id)arg1;

- (void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(id)arg3;

- (void)addItemsWithIdentifiers:(long long *)arg1 count:(unsigned long long)arg2 toPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;

- (long long)addPlaylistWithValuesForProperties:(id)arg1;

- (id)adjustedValueForMPProperty:(id)arg1 ofEntity:(id)arg2 withDefaultValue:(id)arg3;

- (id)collectionResultSetForQueryCriteria:(id)arg1;

- (unsigned long long)currentEntityRevision;

@property(readonly, nonatomic) NSString *databasePath;

- (void)dealloc;

- (void)enumerateCollectionIdentifiersForQueryCriteria:(id)arg1 ordered:(_Bool)arg2 cancelBlock:(id)arg3 usingBlock:(void)arg4;

- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 itemBlock:(id)arg2 collectionBlock:(void)arg3;

- (void)enumerateItemIdentifiersForQueryCriteria:(id)arg1 ordered:(_Bool)arg2 cancelBlock:(id)arg3 usingBlock:(void)arg4;

- (_Bool)hasGeniusMixes;

- (_Bool)hasMediaOfType:(unsigned long long)arg1;

- (_Bool)hasUbiquitousBookmarkableItems;

- (id)initWithLibrary:(id)arg1;

- (_Bool)isCurrentThreadInTransaction;

- (_Bool)itemExistsWithPersistentID:(unsigned long long)arg1;

- (long long)itemPersistentIDForStoreID:(long long)arg1;

- (id)itemResultSetForQueryCriteria:(id)arg1;

- (id)lastModifiedDate;

@property(retain, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;

- (void)loadBestArtworkImageDataForSize:(struct CGSize)arg1 ofItemWithIdentifier:(long long)arg2 atPlaybackTime:(double)arg3 completionBlock:(id)arg4;

- (void)loadProperties:(id)arg1 ofCollectionWithIdentifier:(long long)arg2 groupingType:(long long)arg3 completionBlock:(id)arg4;

- (void)loadProperties:(id)arg1 ofItemWithIdentifier:(long long)arg2 completionBlock:(id)arg3;

- (void)loadQueryCriteria:(id)arg1 countOfCollectionsWithCompletionBlock:(id)arg2;

- (void)loadQueryCriteria:(id)arg1 countOfItemsWithCompletionBlock:(id)arg2;

- (void)loadQueryCriteria:(id)arg1 hasCollectionsWithCompletionBlock:(id)arg2;

- (void)loadQueryCriteria:(id)arg1 hasItemsWithCompletionBlock:(id)arg2;

- (void)loadValueForAggregateFunction:(id)arg1 onCollectionsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(id)arg4;

- (void)loadValueForAggregateFunction:(id)arg1 onItemsForProperty:(id)arg2 queryCriteria:(id)arg3 completionBlock:(id)arg4;

- (id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;

@property(readonly, nonatomic) NSArray *localizedSectionIndexTitles;

- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;

@property(readonly, nonatomic) NSString *name;

- (void)performBackgroundTaskWithBlock:(id)arg1;

- (void)performReadTransactionWithBlock:(id)arg1;

- (_Bool)performTransactionWithBlock:(id)arg1;

- (_Bool)playlistExistsWithPersistentID:(unsigned long long)arg1;

- (long long)playlistGeneration;

- (void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(id)arg2;

@property(readonly, nonatomic) NSArray *preferredAudioLanguages;

@property(readonly, nonatomic) NSArray *preferredSubtitleLanguages;

- (void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1;

- (void)removeItemsWithIdentifiers:(long long *)arg1 atFilteredIndexes:(id)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;

- (_Bool)removeItemsWithIdentifiers:(long long *)arg1 count:(unsigned long long)arg2 hideFromPurchaseHistory:(_Bool)arg3;

- (_Bool)removePlaylistWithIdentifier:(long long)arg1;

- (void)setLibraryContainerFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2;

- (void)setLibraryEntityFilterPredicatesWithCloudFilteringType:(long long)arg1 additionalFilterPredicates:(id)arg2;

- (void)setValue:(id)arg1 forProperty:(id)arg2 ofCollectionWithIdentifier:(long long)arg3 groupingType:(long long)arg4 completionBlock:(id)arg5;

- (void)setValue:(id)arg1 forProperty:(id)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(id)arg4;

- (void)setValue:(id)arg1 forProperty:(id)arg2 ofPlaylistWithIdentifier:(long long)arg3 completionBlock:(id)arg4;

- (unsigned long long)syncGenerationID;

@property(readonly, nonatomic) NSString *syncValidity;

- (id)systemFilterPredicatesWithGroupingType:(long long)arg1 cloudTrackFilteringType:(long long)arg2;

@property(readonly, nonatomic) NSString *uniqueIdentifier;

- (_Bool)writable;



// Remaining properties

@property(readonly, nonatomic) _Bool isGeniusEnabled;

@property(readonly, nonatomic) NSSet *propertiesToCache;

@property(readonly, nonatomic) _Bool requiresAuthentication;



@end

