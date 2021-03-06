/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class ABContactsFilter, NSArray, NSMutableArray, NSRecursiveLock;



@interface ABModel : NSObject

{

    void *_addressBook;

    CDStruct_0029e0ce *_sectionLists;

    struct __CFDictionary *_headerSortKeyToHeaderString;

    struct _NSRange _displayedMemberPreparedRange;

    unsigned long long _numberOfDisplayedMembers;

    _Bool _displayedMembersAreSearchResults;

    void *_selectedPerson;

    unsigned int _displayOrdering;

    struct __CFArray *_databaseChangeDelegates;

    void *_backgroundAddressBook;

    _Bool _backgroundAddressBookInvalidated;

    NSMutableArray *_cachedModelRecords;

    NSRecursiveLock *_memberLock;

    _Bool _loadingInBackground;

    NSRecursiveLock *_backgroundLoadingLock;

    _Bool _backgroundInvalidated;

    id _delayedNotificationHandler;

    _Bool _autoInvalidateOnDatabaseChange;

    NSArray *_lastSeenSources;

    NSArray *_lastSeenGroups;

    int _meID;

    ABContactsFilter *_displayedContactsFilter;

    ABContactsFilter *_selectedContactsFilter;

    ABContactsFilter *_lastSelectedContactsFilter;

}



+ (void)initialize;

+ (unsigned int)sortOrdering;

- (void)_cacheMeID;

- (void)_cachePeople:(struct __CFArray *)arg1 atEnd:(_Bool)arg2;

- (struct __CFArray *)_copyArrayOfPeopleInDisplayedContactsFilterForRange:(struct _NSRange)arg1 inBackground:(_Bool)arg2;

- (struct __CFArray *)_databaseChangeDelegates;

- (id)_displayedGroupMembersInRange:(struct _NSRange)arg1;

- (long long)_indexOfMember:(void *)arg1 inDisplayedMembers:(id)arg2;

- (void)_loadMembersInBackground:(id)arg1;

- (void)_modelDatabaseChangedExternally:(struct __CFDictionary *)arg1;

- (void)_modelDatabaseChangedLocally:(struct __CFDictionary *)arg1;

- (id)_newModelRecordFromRecord:(void *)arg1;

- (void)_notifyDelegatesOfExternalDatabaseChangeWithDeletedGroup:(_Bool)arg1 deletedPerson:(_Bool)arg2;

- (id)_partialDisplayedGroupMembersInRange:(struct _NSRange)arg1;

- (void)_startBackgroundThreadIfNecessaryScanningForward:(_Bool)arg1;

- (void)_updateForMajorAddressBookChange:(_Bool)arg1;

- (void)_waitUntilBackgroundThreadFinished;

- (void)addDatabaseChangeDelegate:(id)arg1;

@property(nonatomic) void *addressBook;

- (id)allCachedModelRecords;

- (id)allDatabaseDirectories;

- (id)allGroups;

- (id)allSources;

- (void)copyDisplayedNamePieces:(id *)arg1 isGroup:(_Bool *)arg2 highlightIndex:(long long *)arg3 forMemberID:(int *)arg4 atindex:(long long)arg5;

- (id)databaseFullDirectory;

- (id)databaseHomeDirectory;

- (id)databaseSubdirectory;

- (void)dealloc;

@property(retain, nonatomic) ABContactsFilter *displayedContactsFilter; // @synthesize displayedContactsFilter=_displayedContactsFilter;

- (void *)displayedMemberAtIndex:(long long)arg1;

- (CDStruct_0029e0ce *)displayedMemberSectionLists;

- (unsigned long long)displayedMemberSectionListsCount;

- (id)displayedMembersInRange:(struct _NSRange)arg1;

@property(readonly, nonatomic) void *groupForNewRecords;

- (struct __CFDictionary *)headerSortKeyToHeaderStringDictionary;

- (long long)indexForDisplayedMember:(void *)arg1;

- (id)initWithAddressBook:(void *)arg1;

- (void)invalidateDisplayedMembers;

- (void)invalidateLastSelectedContactsFilter;

@property(readonly, nonatomic) ABContactsFilter *lastSelectedContactsFilter; // @synthesize lastSelectedContactsFilter=_lastSelectedContactsFilter;

- (int)meID;

- (unsigned long long)numberOfDisplayedMembers;

- (void)prepareDisplayedMembersInRange:(struct _NSRange)arg1;

- (void)removeDatabaseChangeDelegate:(id)arg1;

- (long long)resetFullSectionList:(struct __CFDictionary *)arg1 maximumSectionCount:(int)arg2;

- (long long)resetPartialSectionListWithMaximumCount:(int)arg1 headerSortKeyToHeaderString:(struct __CFDictionary *)arg2;

- (void)resetSectionList;

- (void)resetSortKeyToHeaderStringDictionary;

@property(readonly, nonatomic) ABContactsFilter *selectedContactsFilter; // @synthesize selectedContactsFilter=_selectedContactsFilter;

- (void *)selectedPerson;

- (void)setAutoInvalidateOnDatabaseChange:(_Bool)arg1;

- (void)setDisplayNameOrdering:(unsigned int)arg1;

- (void)setFilteredDisplayedMembers:(struct __CFArray *)arg1;

- (void)setLastSelectedContactsFilter:(id)arg1;

- (void)setSelectedContactsFilter:(id)arg1;

- (void)setSelectedPerson:(void *)arg1;

- (void)setSortOrdering:(unsigned int)arg1;

- (_Bool)shouldUsePartialLoadingForContactsFilter:(id)arg1;

@property(readonly, nonatomic) void *sourceForNewRecords;

- (void)startDelayingNotificationsForDatabaseChangeDelegate:(id)arg1;

- (void)stopDelayingNotificationsForDatabaseChangeDelegate:(id)arg1 andDeliverDelayedNotifications:(_Bool)arg2;

- (void)updateForMajorAddressBookChange;



@end


