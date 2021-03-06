/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSManagedObjectID;



@interface NSIncrementalStoreNode : NSObject

{

    NSManagedObjectID *_objectID;

    unsigned long long _versionNumber;

    id _propertyCache;

    void *_reserved1;

}



+ (void)initialize;

- (id)_propertyCache;

- (id)_snapshot_;

- (unsigned int)_versionNumber;

- (void)dealloc;

- (id)description;

- (id)initWithObjectID:(id)arg1 fromSQLRow:(id)arg2;

- (id)initWithObjectID:(id)arg1 withValues:(id)arg2 version:(unsigned long long)arg3;

- (const id *)knownKeyValuesPointer;

- (id)objectID;

- (void)updateFromSQLRow:(id)arg1;

- (void)updateWithValues:(id)arg1 version:(unsigned long long)arg2;

- (id)valueForPropertyDescription:(id)arg1;

- (unsigned long long)version;



@end


