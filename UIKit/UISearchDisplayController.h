/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "_UIScrollNotification.h"



@class NSArray, NSString, UIButton, UIColor, UILabel, UINavigationItem, UIPopoverController, UIScrollView, UISearchBar, UISearchDisplayControllerContainerView, UITableView, UIView, UIViewController, _UINavigationControllerPalette, _UISearchDisplayControllerDidScrollDelegate;



@interface UISearchDisplayController : NSObject <_UIScrollNotification>

{

    UIViewController *_viewController;

    UITableView *_tableView;

    UIView *_dimmingView;

    UISearchBar *_searchBar;

    UILabel *_noResultsLabel;

    NSString *_noResultsMessage;

    NSString *_resultsTitle;

    id <UISearchDisplayDelegate> _delegate;

    id <UITableViewDataSource> _tableViewDataSource;

    id <UITableViewDelegate> _tableViewDelegate;

    struct __CFArray *_containingScrollViews;

    double _lastKeyboardAdjustment;

    double _lastFooterAdjustment;

    UIPopoverController *_popoverController;

    long long _searchResultsTableViewStyle;

    id _navigationControllerBookkeeper;

    NSArray *_savedSelectedCellsWhenViewWillAppear;

    UIScrollView *_savedContainingScrollView;

    UISearchDisplayControllerContainerView *_containerView;

    unsigned long long _savedSearchBarResizingMask;

    UINavigationItem *_navigationItem;

    struct CGPoint _containingScrollViewContentOffset;

    struct CGRect _searchFieldInNavigationBarFrame;

    _UINavigationControllerPalette *_attachedNavigationPalette;

    UIButton *_animatingAppearanceNavigationButton;

    double _animatingAppearanceNavigationSearchBarWidth;

    UIColor *_dimmingOverlayColor;

    UIView *_tableViewBackgroundHeaderView;

    long long _unactivatedBarPosition;

    _UISearchDisplayControllerDidScrollDelegate *_didScrollDelegate;

    struct {

        unsigned int visible:1;

        unsigned int animating:1;

        unsigned int hidIndexBar:1;

        unsigned int hidNavigationBar:1;

        unsigned int noResultsMessageVisible:1;

        unsigned int noResultsMessageAutoDisplay:1;

        unsigned int navigationBarHidingEnabled:1;

        unsigned int dimTableViewOnEmptySearchString:1;

        unsigned int isRotatingWithPopover:1;

        unsigned int cancelButtonManagementDisabled:1;

        unsigned int allowDisablingNavigationBarHiding:1;

        unsigned int adjustsSearchBarContentInsetForIndexBar:1;

        unsigned int showsResultsForEmptyField:1;

        unsigned int searchBarCanBeHoisted:1;

        unsigned int animatingSearchResultsDisappearance:1;

        unsigned int navigationBarShadowWasHidden:1;

        unsigned int hoistingSearchBar:1;

    } _searchDisplayControllerFlags;

    _Bool _displaysSearchBarInNavigationBar;

    unsigned long long _navigationBarSearchFieldSizing;

    double __activationGapHeight;

    double __additionalNonCollapsingHeightAboveSearchBar;

}



@property(nonatomic) double _activationGapHeight; // @synthesize _activationGapHeight=__activationGapHeight;

@property(nonatomic) double _additionalNonCollapsingHeightAboveSearchBar; // @synthesize _additionalNonCollapsingHeightAboveSearchBar=__additionalNonCollapsingHeightAboveSearchBar;

- (void)_adjustTableViewContentInsetsAndOffsetsIgnoringCurrent:(_Bool)arg1;

- (_Bool)_adjustsSearchBarContentInsetForIndexBar;

- (_Bool)_allowDisablingNavigationBarHiding;

- (void)_animateNavigationBarSearchBarAppearance:(id)arg1;

- (_Bool)_areSearchContentsSplitViewMaster;

- (void)_cleanUpSearchBar;

- (void)_clearSavedSelectedCellsWeUsedWhenHedgingOurBets;

- (void)_clearViewController;

- (void)_configureContainerView;

- (void)_configureNewSearchBar;

- (void)_configureSearchBarForTableView;

- (id)_containerView;

- (id)_containingTableView;

- (id)_containingViewOfClass:(Class)arg1;

- (id)_createPopoverController;

- (void)_destroyManagedTableView;

- (void)_didScroll;

- (id)_dimmingOverlayColor;

- (double)_dimmingViewAlpha;

- (id)_dimmingViewColor;

- (void)_disableParentScrollViews;

- (void)_enableParentScrollViews;

- (void)_hideVisibleRefreshControl;

- (void)_hoistSearchBar;

- (void)_indexBarFrameChanged:(id)arg1;

@property(nonatomic, getter=_isCancelButtonManagementDisabled, setter=_setCancelButtonManagementDisabled:) _Bool cancelButtonManagementDisabled;

- (_Bool)_isSearchBarInBar;

- (void)_keyboardWillHide:(id)arg1;

- (void)_keyboardWillShow:(id)arg1;

- (void)_managedTableViewDidScroll;

- (id)_noResultsMessageLabel;

- (void)_popoverClearButtonPressed:(id)arg1;

- (void)_popoverKeyboardDidHide:(id)arg1;

- (void)_popoverKeyboardDidShow:(id)arg1;

- (void)_restoreSelectedCellsInCaseViewDidNotReallyAppear;

- (void)_saveSelectedRowsInCaseViewDoesNotReallyAppear;

- (_Bool)_searchBarInNavigationControllerComponent;

- (_Bool)_searchBarShouldScrollToVisible:(id)arg1;

- (void)_searchBarSuperviewChanged;

- (void)_searchBarSuperviewWillChange;

- (void)_sendDelegateDidBeginDidEndSearch;

- (void)_setAdjustsSearchBarContentInsetForIndexBar:(_Bool)arg1;

- (void)_setAllowDisablingNavigationBarHiding:(_Bool)arg1;

- (void)_setDimmingOverlayColor:(id)arg1;

- (void)_setShowsResultsForEmptyField:(_Bool)arg1;

- (void)_setTableViewVisible:(_Bool)arg1 inView:(id)arg2;

- (void)_setupNoResultsLabelIfNecessary;

- (_Bool)_shouldAccountForStatusBarHeight;

- (_Bool)_showsResultsForEmptyField;

- (double)_statusBarHeight;

- (struct UIEdgeInsets)_tableViewContentInsets;

- (id)_topShadowView;

- (void)_updateBackdropMaskViewsInScrollView:(id)arg1;

- (double)_updateNavigationPalette;

- (void)_updateNoSearchResultsMessageVisiblity;

- (void)_updatePinnedSearchBar;

- (void)_updateSearchBarForTableViewIndexBar:(id)arg1;

- (void)_updateSearchBarMaskIfNecessary;

- (void)_updateTableHeaderBackgroundViewInTableView:(id)arg1 amountScrolledUnder:(double)arg2;

- (void)_watchContainingTableViewForScrolling:(_Bool)arg1;

@property(nonatomic) _Bool automaticallyShowsNoResultsMessage;

- (void)dealloc;

@property(nonatomic) id <UISearchDisplayDelegate> delegate; // @synthesize delegate=_delegate;

@property(nonatomic) _Bool dimTableViewOnEmptySearchString;

@property(nonatomic) _Bool displaysSearchBarInNavigationBar; // @synthesize displaysSearchBarInNavigationBar=_displaysSearchBarInNavigationBar;

- (void)encodeWithCoder:(id)arg1;

- (_Bool)hidNavigationBar;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2;

- (id)initWithSearchBar:(id)arg1 contentsController:(id)arg2 searchResultsTableViewStyle:(long long)arg3;

@property(nonatomic, getter=isActive) _Bool active;

@property(nonatomic, getter=isNavigationBarHidingEnabled) _Bool navigationBarHidingEnabled;

@property(nonatomic) unsigned long long navigationBarSearchFieldSizing; // @synthesize navigationBarSearchFieldSizing=_navigationBarSearchFieldSizing;

- (void)navigationControllerDidCancelShowingViewController:(id)arg1;

- (void)navigationControllerDidShowViewController:(id)arg1;

- (void)navigationControllerWillShowViewController:(id)arg1;

@property(readonly, nonatomic) UINavigationItem *navigationItem;

@property(copy, nonatomic) NSString *noResultsMessage;

@property(nonatomic) _Bool noResultsMessageVisible;

- (void)popoverController:(id)arg1 animationCompleted:(long long)arg2;

- (_Bool)popoverControllerShouldDismissPopover:(id)arg1;

@property(readonly, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;

- (void)searchBar:(id)arg1 selectedScopeButtonIndexDidChange:(long long)arg2;

- (void)searchBar:(id)arg1 textDidChange:(id)arg2;

- (void)searchBarCancelButtonClicked:(id)arg1;

- (void)searchBarResultsListButtonClicked:(id)arg1;

- (void)searchBarSearchButtonClicked:(id)arg1;

- (void)searchBarTextDidBeginEditing:(id)arg1;

@property(readonly, nonatomic) UIViewController *searchContentsController; // @synthesize searchContentsController=_viewController;

@property(nonatomic) id <UITableViewDataSource> searchResultsDataSource; // @synthesize searchResultsDataSource=_tableViewDataSource;

@property(nonatomic) id <UITableViewDelegate> searchResultsDelegate; // @synthesize searchResultsDelegate=_tableViewDelegate;

@property(readonly, nonatomic) UITableView *searchResultsTableView; // @synthesize searchResultsTableView=_tableView;

@property(copy, nonatomic) NSString *searchResultsTitle; // @synthesize searchResultsTitle=_resultsTitle;

- (void)setActive:(_Bool)arg1 animated:(_Bool)arg2;

- (void)setSearchBar:(id)arg1;

- (void)setSearchContentsController:(id)arg1;

- (void)showHideAnimationDidFinish;

- (void)windowDidRotate:(id)arg1;

- (void)windowWillAnimateRotation:(id)arg1;



@end


