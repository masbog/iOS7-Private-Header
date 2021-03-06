/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "UITableViewDataSource.h"



@class ABModel, ACAccountStore, NSArray, NSDictionary;



@interface ABAccountsAndGroupDataSource : NSObject <UITableViewDataSource>

{

    NSArray *_accountIdentifiers;

    NSArray *_accountDisplayNames;

    NSDictionary *_groupsByAccountIdentifier;

    ACAccountStore *_accountStore;

    _Bool _hidesSearchableSources;

    _Bool _hidesGlobalGroupWrapper;

    _Bool _dirty;

    ABModel *_model;

}



- (id)accountDisplayNameAtIndex:(long long)arg1;

@property(retain, nonatomic) ACAccountStore *accountStore; // @synthesize accountStore=_accountStore;

- (void)cancelScheduledRefresh;

- (void)dealloc;

- (id)defaultGroupWrapper;

- (id)groupWrapperForIndexPath:(id)arg1;

@property(nonatomic) _Bool hidesGlobalGroupWrapper; // @synthesize hidesGlobalGroupWrapper=_hidesGlobalGroupWrapper;

@property(nonatomic) _Bool hidesSearchableSources; // @synthesize hidesSearchableSources=_hidesSearchableSources;

- (id)indexPathForGroupWrapper:(id)arg1;

@property(nonatomic, getter=isDirty) _Bool dirty; // @synthesize dirty=_dirty;

@property(retain, nonatomic) ABModel *model; // @synthesize model=_model;

- (id)newContactsFilterFromSelectedGroupWrappers;

- (long long)numberOfGroupsForAccountIdentifier:(id)arg1;

- (long long)numberOfGroupsInAccountAtIndex:(long long)arg1;

- (long long)numberOfSectionsInTableView:(id)arg1;

- (void)reloadData;

- (void)reloadDataIncludingAccountStore:(_Bool)arg1 usingArchivedState:(_Bool)arg2;

- (void)scheduleRefresh;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;



@end


