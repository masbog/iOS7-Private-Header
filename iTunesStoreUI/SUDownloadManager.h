/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, SSDownloadManager, SUClientInterface;



@interface SUDownloadManager : NSObject

{

    NSArray *_cachedDownloads;

    SUClientInterface *_clientInterface;

    NSObject<OS_dispatch_queue> *_dispatchQueue;

    SSDownloadManager *_downloadManager;

    NSMutableDictionary *_downloadsByID;

}



- (void)_finishPreflightWithCompletionBlock:(id)arg1;

- (void)_reloadDownloadManager;

- (void)_removeObject:(id)arg1 fromArray:(id *)arg2;

- (void)dealloc;

- (_Bool)deleteDownload:(id)arg1;

- (id)downloadForDownloadIdentifier:(long long)arg1;

@property(readonly, nonatomic) SSDownloadManager *downloadManager;

@property(readonly, nonatomic) NSArray *downloads;

- (id)initWithDownloadManager:(id)arg1;

- (id)initWithDownloadManager:(id)arg1 clientInterface:(id)arg2;

- (void)preflightWithCompletionBlock:(id)arg1;

- (void)reloadDownloadManager;



@end


