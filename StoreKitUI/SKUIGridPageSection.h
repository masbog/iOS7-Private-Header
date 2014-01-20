/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SKUIStorePageSection.h"


#import "SKUIArtworkRequestDelegate.h"

#import "SKUIEmbeddedMediaViewDelegate.h"

#import "SKUIItemStateCenterObserver.h"

#import "SKUIMissingItemDelegate.h"

#import "SKUIProductPageOverlayDelegate.h"



@class NSMapTable, NSMutableIndexSet, NSString, SKUIClientContext, SKUIGridComponent, SKUIMissingItemLoader, SKUIProductPageOverlayController;



@interface SKUIGridPageSection : SKUIStorePageSection <SKUIArtworkRequestDelegate, SKUIItemStateCenterObserver, SKUIEmbeddedMediaViewDelegate, SKUIMissingItemDelegate, SKUIProductPageOverlayDelegate>

{

    NSMapTable *_artworkRequests;

    SKUIClientContext *_clientContext;

    _Bool _containsLockups;

    NSMapTable *_editorialLayouts;

    NSMutableIndexSet *_hiddenIconIndexSet;

    _Bool _isLandscape;

    _Bool _isPad;

    struct CGSize _lockupImageBoundingSize;

    SKUIMissingItemLoader *_missingItemLoader;

    NSString *_moreButtonTitle;

    long long _numberOfColumns;

    SKUIProductPageOverlayController *_overlayController;

    long long _overlaySourceItemIndex;

    long long _screenScale;

    NSMapTable *_lockupArtworkContexts;

}



- (void).cxx_destruct;

- (id)_artworkContextForLockupSize:(long long)arg1;

- (id)_cellImageForItem:(id)arg1 lockupSize:(long long)arg2;

- (struct UIEdgeInsets)_contentInsetForMediaIndex:(long long)arg1;

- (id)_editorialCellWithEditorials:(id)arg1 indexPath:(id)arg2;

- (id)_editorialLayoutForEditorial:(id)arg1;

- (id)_editorialLayoutForLockup:(id)arg1;

- (id)_editorialLockupCellWithLockups:(id)arg1 indexPath:(id)arg2;

- (void)_enumerateItemsFromStartIndex:(long long)arg1 withBlock:(id)arg2;

- (void)_enumerateVisibleIndexPathsWithBlock:(id)arg1;

- (void)_enumerateVisibleItemsWithBlock:(id)arg1;

- (double)_heightForEditorialAtIndexPath:(id)arg1;

- (double)_heightForEditorialLockup:(id)arg1;

- (double)_heightForEditorialLockupAtIndexPath:(id)arg1;

- (double)_heightForLockup:(id)arg1;

- (double)_heightForLockupAtIndexPath:(id)arg1;

- (double)_heightForMedia:(id)arg1 width:(double)arg2;

- (double)_heightForMediaAtIndexPath:(id)arg1;

- (id)_itemCellWithLockups:(id)arg1 indexPath:(id)arg2;

- (id)_itemForIndex:(long long)arg1;

- (void)_loadImageForItem:(id)arg1 lockupSize:(long long)arg2 loader:(id)arg3 reason:(long long)arg4;

- (void)_loadMissingItemsFromIndex:(long long)arg1 withReason:(long long)arg2;

- (id)_mediaCellWithMedia:(id)arg1 indexPath:(id)arg2;

- (double)_mediaWidthForMediaIndex:(long long)arg1 gridWidth:(double)arg2;

- (id)_missingItemLoader;

- (id)_newSizeToFitArtworkRequestWithArtwork:(id)arg1 mediaIndex:(long long)arg2;

- (id)_popSourceViewForOverlayController:(id)arg1;

- (void)_reloadEditorialLockupCell:(id)arg1 withLockup:(id)arg2 index:(long long)arg3;

- (void)_reloadItemCell:(id)arg1 withLockup:(id)arg2 index:(long long)arg3;

- (void)_selectItem:(id)arg1 withIndex:(long long)arg2;

- (void)_setPositionForClickEvent:(id)arg1 withElementIndex:(long long)arg2;

- (void)_updateVisibileEditorialWithInterfaceOrientation:(long long)arg1;

- (void)addImpressionsForIndexPath:(id)arg1 toSession:(id)arg2;

- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;

- (id)cellForIndexPath:(id)arg1;

- (struct CGSize)cellSizeForIndexPath:(id)arg1;

- (id)clickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;

- (void)collectionViewDidConfirmItemOfferAtIndexPath:(id)arg1;

- (void)collectionViewDidEndDisplayingCellForItemAtIndexPath:(id)arg1;

- (void)collectionViewDidSelectItemAtIndexPath:(id)arg1;

- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;

- (void)dealloc;

- (id)initWithPageComponent:(id)arg1;

- (id)itemOfferClickEventWithItem:(id)arg1 elementName:(id)arg2 index:(long long)arg3;

- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;

- (void)itemStateCenterRestrictionsChanged:(id)arg1;

- (void)mediaView:(id)arg1 playbackStateDidChange:(long long)arg2;

- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2;

- (long long)numberOfCells;

- (void)prefetchResourcesWithReason:(long long)arg1;

- (id)productPageOverlay:(id)arg1 flipSourceViewToDismissItem:(id)arg2;

- (id)productPageOverlay:(id)arg1 flipSourceViewToPresentItem:(id)arg2;

- (void)productPageOverlayDidDismiss:(id)arg1;

- (void)willAppearInContext:(id)arg1;

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



// Remaining properties

@property(readonly, nonatomic) SKUIGridComponent *pageComponent; // @dynamic pageComponent;



@end

