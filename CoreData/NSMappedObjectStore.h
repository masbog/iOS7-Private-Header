/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSPersistentStore.h"


@class NSPersistentStoreMap, NSSet;



__attribute__((visibility("hidden")))

@interface NSMappedObjectStore : NSPersistentStore

{

    NSPersistentStoreMap *_theMap;

    NSSet *_entitiesToFetch;

}



- (void)_addObject:(id)arg1 objectIDMap:(id)arg2;

- (id)_pathFromURI:(id)arg1;

- (id)_rawMetadata__;

- (void)_removeObject:(id)arg1 objectIDMap:(id)arg2;

- (void)_setMap:(id)arg1;

- (id)_theMap;

- (void)_updateObject:(id)arg1 objectIDMap:(id)arg2;

- (id)dataForKey:(id)arg1;

- (void)dealloc;

- (id)executeCountRequest:(id)arg1 withContext:(id)arg2;

- (id)executeFetchRequest:(id)arg1 withContext:(id)arg2;

- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;

- (id)executeSaveChangesRequest:(id)arg1 withContext:(id)arg2;

- (id)getNewIDForObject:(id)arg1;

- (id)identifier;

- (id)init;

- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;

- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;

- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;

- (id)metadata;

- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;

- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id *)arg3;

- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;

- (void)save;

- (void)saveDocumentToPath:(id)arg1;

- (void)setMetadata:(id)arg1;



@end


