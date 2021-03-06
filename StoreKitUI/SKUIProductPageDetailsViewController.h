/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "SKUIItemStateCenterObserver.h"

#import "SKUIProductPageChildViewController.h"

#import "SKUIScreenshotsDelegate.h"



@class NSMutableArray, NSOperationQueue, SKUIClientContext, SKUILayoutCache, SKUIProductPage, SKUIProductPageHeaderViewController, SKUIProductPageTableHeaderOnlySection, SKUIProductPageTableTextBoxSection, SKUIProductPageTableViewController, UIScrollView;



@interface SKUIProductPageDetailsViewController : UIViewController <SKUIScreenshotsDelegate, SKUIItemStateCenterObserver, SKUIProductPageChildViewController>

{

    SKUIClientContext *_clientContext;

    SKUIProductPageTableHeaderOnlySection *_copyrightSection;

    id <SKUIProductPageChildViewControllerDelegate> _delegate;

    SKUIProductPageTableTextBoxSection *_descriptionSection;

    NSOperationQueue *_operationQueue;

    SKUIProductPage *_productPage;

    SKUIProductPageTableHeaderOnlySection *_screenshotsSection;

    NSMutableArray *_sections;

    SKUIProductPageTableTextBoxSection *_storeNotesSection;

    SKUIProductPageTableViewController *_tableViewController;

    SKUILayoutCache *_textLayoutCache;

    SKUIProductPageTableTextBoxSection *_whatsNewSection;

}



+ (double)defaultPageWidthForUserInterfaceIdiom:(long long)arg1;

- (void).cxx_destruct;

- (void)_addTapRecognizerForView:(id)arg1 action:(SEL)arg2;

- (id)_copyrightSection;

- (id)_descriptionSection;

- (void)_expandSection:(id)arg1;

- (id)_featuresSection;

- (id)_infoSection;

- (id)_screenshotsSection;

- (id)_storeNotesSection;

- (id)_tableViewController;

- (id)_textLayoutRequestWithText:(id)arg1 widthOffset:(double)arg2;

- (id)_whatsNewSection;

@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;

- (void)dealloc;

@property(nonatomic) __weak id <SKUIProductPageChildViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

@property(retain, nonatomic) SKUIProductPageHeaderViewController *headerViewController;

- (id)initWithProductPage:(id)arg1;

- (void)itemStateCenterRestrictionsChanged:(id)arg1;

- (void)loadView;

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;

@property(readonly, nonatomic) SKUIProductPage *productPage; // @synthesize productPage=_productPage;

- (void)screenshotsWillBeginDragging:(id)arg1;

@property(readonly, nonatomic) UIScrollView *scrollView;



@end


