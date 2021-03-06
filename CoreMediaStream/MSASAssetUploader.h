/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MSASAssetTransferer.h"


@class NSMutableArray, NSMutableDictionary, NSMutableSet;



@interface MSASAssetUploader : MSASAssetTransferer

{

    _Bool _didEncounterNetworkConditionError;

    int _state;

    NSMutableArray *_itemsInFlight;

    NSMutableDictionary *_assetCollectionsToItemInFlightMap;

    NSMutableDictionary *_assetToAssetCollectionMap;

    NSMutableArray *_finishedAssetCollections;

    NSMutableSet *_assetCollectionsWithAuthorizationError;

    NSMutableDictionary *_assetCollectionGUIDToRequestorContext;

}



- (void).cxx_destruct;

- (void)MMCSEngine:(id)arg1 didCreateRequestorContext:(id)arg2 forAssets:(id)arg3;

- (void)MMCSEngine:(id)arg1 didFinishGettingAsset:(id)arg2 path:(id)arg3 error:(id)arg4;

- (void)MMCSEngine:(id)arg1 didFinishPuttingAsset:(id)arg2 putReceipt:(id)arg3 error:(id)arg4;

- (void)MMCSEngine:(id)arg1 didMakeGetProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;

- (void)MMCSEngine:(id)arg1 didMakePutProgress:(float)arg2 state:(int)arg3 onAsset:(id)arg4;

- (id)_orphanedAssetCollectionError;

- (id)_pathForPersonID:(id)arg1;

- (void)_workQueueStop;

@property(retain, nonatomic) NSMutableDictionary *assetCollectionGUIDToRequestorContext; // @synthesize assetCollectionGUIDToRequestorContext=_assetCollectionGUIDToRequestorContext;

@property(retain, nonatomic) NSMutableDictionary *assetCollectionsToItemInFlightMap; // @synthesize assetCollectionsToItemInFlightMap=_assetCollectionsToItemInFlightMap;

@property(retain, nonatomic) NSMutableSet *assetCollectionsWithAuthorizationError; // @synthesize assetCollectionsWithAuthorizationError=_assetCollectionsWithAuthorizationError;

@property(retain, nonatomic) NSMutableDictionary *assetToAssetCollectionMap; // @synthesize assetToAssetCollectionMap=_assetToAssetCollectionMap;

- (void)cancelAssetCollections:(id)arg1;

@property(nonatomic) _Bool didEncounterNetworkConditionError; // @synthesize didEncounterNetworkConditionError=_didEncounterNetworkConditionError;

- (void)didFinishGettingAllAssets;

- (void)didFinishPuttingAllAssets;

@property(retain, nonatomic) NSMutableArray *finishedAssetCollections; // @synthesize finishedAssetCollections=_finishedAssetCollections;

@property(retain, nonatomic) NSMutableArray *itemsInFlight; // @synthesize itemsInFlight=_itemsInFlight;

- (void)registerAssetCollections:(id)arg1 completionBlock:(id)arg2;

@property(nonatomic) int state; // @synthesize state=_state;

- (void)unregisterAssetCollections:(id)arg1;

- (void)unregisterAssetCollections:(id)arg1 completionBlock:(id)arg2;

- (void)workQueueCancel;

- (void)workQueueCancelAssetCollections:(id)arg1;

- (void)workQueueDidFinishWithItem:(id)arg1 error:(id)arg2;

- (void)workQueueGoIdle;

- (void)workQueueRegisterAssetCollections:(id)arg1 index:(unsigned long long)arg2 results:(id)arg3 completionBlock:(id)arg4;

- (void)workQueueRegisterAssets:(id)arg1 index:(unsigned long long)arg2 completionBlock:(id)arg3;

- (void)workQueueRetryOutstandingActivities;

- (void)workQueueShutDownCompletionBlock:(id)arg1;

- (void)workQueueStop;

- (void)workQueueStopTrackingItem:(id)arg1;

- (void)workQueueUploadNextBatch;



// Remaining properties

@property(nonatomic) __weak id <MSASAssetUploaderDelegate> delegate; // @dynamic delegate;



@end


