/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "UIActivityItemDeferredSource.h"

#import "UIActivityItemSource.h"



@class NSData, NSObject<OS_dispatch_semaphore>, NSString, PLManagedAsset, PLVideoRemaker, PUActivityItemSourceOperation;



@interface PUActivityItemSource : NSObject <UIActivityItemDeferredSource, UIActivityItemSource>

{

    PLManagedAsset *_asset;

    _Bool _isMogul;

    NSData *_data;

    NSString *_utiType;

    PUActivityItemSourceOperation *_operation;

    PLVideoRemaker *_remaker;

    _Bool _remakingWasCancelled;

    NSObject<OS_dispatch_semaphore> *_remakingSemaphore;

    NSString *_remakerTempPath;

    id _strongSelf;

    float _remakerProgress;

}



- (void).cxx_destruct;

- (void)_cancelRemaking:(id)arg1;

- (void)_cleanup;

- (void)_cleanupRemaker;

- (void)_getAssetData:(id *)arg1 type:(id *)arg2 forActivityType:(id)arg3;

- (void)_getData:(id *)arg1 type:(id *)arg2 forActivityType:(id)arg3;

- (void)_removeTempFile;

- (void)_setRemakerProgress:(float)arg1;

- (_Bool)_videoRemakerNeededForActivityType:(id)arg1;

- (id)activityViewController:(id)arg1 dataTypeIdentifierForActivityType:(id)arg2;

- (id)activityViewController:(id)arg1 itemForActivityType:(id)arg2;

- (id)activityViewControllerOperation:(id)arg1;

- (id)activityViewControllerPlaceholderItem:(id)arg1;

@property(readonly, nonatomic) PLManagedAsset *asset; // @synthesize asset=_asset;

- (void)cleanupForActivityDidComplete;

@property(readonly, nonatomic) NSData *data;

- (void)dealloc;

- (id)initWithAsset:(id)arg1;

- (_Bool)needsVideoRemakerForActivityType:(id)arg1;

- (void)prepareItemForActivityType:(id)arg1;

@property float remakerProgress; // @synthesize remakerProgress=_remakerProgress;

@property(readonly, nonatomic) NSString *utiType;

- (void)videoRemaker:(id)arg1 progressDidChange:(float)arg2;

- (void)videoRemakerDidBeginRemaking:(id)arg1;

- (void)videoRemakerDidEndRemaking:(id)arg1 temporaryPath:(id)arg2;



@end


