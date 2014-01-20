/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class ISURLCacheConfiguration, NSString, NSURLCache;



@interface ISURLCache : NSObject

{

    NSURLCache *_cache;

    ISURLCacheConfiguration *_configuration;

}



+ (id)cacheDirectoryPath;

- (id)cachedResponseForRequest:(id)arg1;

@property(readonly, nonatomic) unsigned long long currentDiskUsage;

@property(readonly, nonatomic) unsigned long long currentMemoryUsage;

- (void)dealloc;

@property(readonly, nonatomic) unsigned long long diskCapacity;

- (id)init;

- (id)initWithCacheConfiguration:(id)arg1;

@property(readonly, nonatomic) unsigned long long memoryCapacity;

@property(readonly) NSString *persistentIdentifier;

- (void)purgeMemoryCache;

- (void)reloadWithCacheConfiguration:(id)arg1;

- (void)removeAllCachedResponses;

- (void)removeCachedResponseForRequest:(id)arg1;

- (void)saveMemoryCacheToDisk;

- (void)storeCachedResponse:(id)arg1 forRequest:(id)arg2;



@end

