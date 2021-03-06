/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMapTable, _UIModalItemAppViewController, _UIModalItemHostingWindow, _UIModalItemSBViewController;



@interface _UIModalItemsCoordinator : NSObject

{

    NSMapTable *_presentingSessionsMapTable;

    NSMapTable *_sessionForItemMapTable;

    _UIModalItemSBViewController *__viewControllerForSBAlerts;

    _UIModalItemHostingWindow *__hostingWindowForSBAlerts;

    _UIModalItemAppViewController *__viewControllerForAlerts;

    _UIModalItemHostingWindow *__hostingWindowForAlerts;

}



+ (void)_desaturateUIForSB;

+ (void)_getRidOfViewControllerForAlerts;

+ (void)_getRidOfViewControllerForSBAlerts;

+ (void)_resaturateUIForSB;

+ (void)noteOrientationChangingTo:(long long)arg1 animated:(_Bool)arg2;

+ (id)sharedModalItemsCoordinator;

- (void)_addItemToStack:(id)arg1 replacingItem:(id)arg2 forPresentingViewController:(id)arg3;

- (void)_dismissItem:(id)arg1 withTappedButtonIndex:(long long)arg2 animated:(_Bool)arg3 notifyDelegate:(_Bool)arg4;

- (void)_getRidOfViewControllerForAlerts;

- (void)_getRidOfViewControllerForSBAlerts;

- (void)_hideModalItemsForType:(long long)arg1 presentingViewController:(id)arg2 dimSpotlightView:(_Bool)arg3 animated:(_Bool)arg4;

- (void)_hidePresentingSessionForModalItem:(id)arg1 keepDimmingView:(_Bool)arg2 animated:(_Bool)arg3;

@property(retain, nonatomic) _UIModalItemHostingWindow *_hostingWindowForAlerts; // @synthesize _hostingWindowForAlerts=__hostingWindowForAlerts;

@property(retain, nonatomic) _UIModalItemHostingWindow *_hostingWindowForSBAlerts; // @synthesize _hostingWindowForSBAlerts=__hostingWindowForSBAlerts;

- (void)_notifyDelegateDidDismissItem:(id)arg1 withIndex:(long long)arg2;

- (void)_notifyDelegateDidPresentItem:(id)arg1;

- (_Bool)_notifyDelegateModalItem:(id)arg1 tappedButtonAtIndex:(long long)arg2;

- (void)_notifyDelegateWillDismissItem:(id)arg1 withIndex:(long long)arg2;

- (void)_notifyDelegateWillPresentItem:(id)arg1;

- (void)_notifyDissmissedItem:(id)arg1;

- (void)_presentItem:(id)arg1 replacingItem:(id)arg2 inViewController:(id)arg3 animated:(_Bool)arg4;

- (id)_presentingSessionForViewController:(id)arg1 ofItemsType:(long long)arg2;

- (id)_presentingViewControllerForAlertCompatibility;

- (id)_presentingViewControllerForAlertCompatibilityCreateIfNeeded:(_Bool)arg1;

- (id)_presentingViewControllerForSBCompatibility;

- (id)_rootViewControllerForModalItem:(id)arg1;

- (void)_showModalItemsForType:(long long)arg1 presentingViewController:(id)arg2 undimSpotlightView:(_Bool)arg3 animated:(_Bool)arg4;

- (void)_showNextModalItemIfNecessaryAfterHidingItem:(id)arg1 showingItem:(id)arg2 animate:(_Bool)arg3;

- (void)_updateItem:(id)arg1 animated:(_Bool)arg2;

@property(retain, nonatomic) _UIModalItemAppViewController *_viewControllerForAlerts; // @synthesize _viewControllerForAlerts=__viewControllerForAlerts;

@property(retain, nonatomic) _UIModalItemSBViewController *_viewControllerForSBAlerts; // @synthesize _viewControllerForSBAlerts=__viewControllerForSBAlerts;

- (void)dealloc;

- (void)hideForSpringBoardAlert:(_Bool)arg1;

- (id)hostingViewControllerForViewController:(id)arg1 andModalItem:(id)arg2 create:(_Bool)arg3;

- (id)init;

- (void)noteOrientationChangingTo:(long long)arg1 animated:(_Bool)arg2;

@property(retain, nonatomic) NSMapTable *presentingSessionsMapTable; // @synthesize presentingSessionsMapTable=_presentingSessionsMapTable;

- (id)presentingViewControllerForItem:(id)arg1 create:(_Bool)arg2;

@property(retain, nonatomic) NSMapTable *sessionForItemMapTable; // @synthesize sessionForItemMapTable=_sessionForItemMapTable;

- (void)showAfterSpringBoardAlert:(_Bool)arg1;



@end


