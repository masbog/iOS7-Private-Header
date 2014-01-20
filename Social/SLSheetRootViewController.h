/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "UITableViewDataSource.h"

#import "UITableViewDelegate.h"



@class NSArray, SLComposeServiceViewController, SLSheetTitleView, UIImage, UINavigationItem, UITableView, UITableViewController, UIView;



__attribute__((visibility("hidden")))

@interface SLSheetRootViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

{

    NSArray *_sheetActions;

    UITableViewController *_tableViewController;

    SLSheetTitleView *_titleView;

    UINavigationItem *_navItem;

    UIViewController *_autoCompletionViewController;

    SLComposeServiceViewController *_delegate;

    UIView *_contentView;

    UIImage *_serviceIconImage;

}



- (void).cxx_destruct;

- (double)_preferredTableViewHeight;

- (void)_updateCell:(id)arg1 withSheetAction:(id)arg2;

- (void)_updateCellForSheetAction:(id)arg1;

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;

- (void)dealloc;

@property(nonatomic) __weak SLComposeServiceViewController *delegate; // @synthesize delegate=_delegate;

- (void)dismissAutoCompletionViewControllerWithContentViewChangeBlock:(id)arg1;

- (void)loadView;

- (id)navigationItem;

- (long long)numberOfSectionsInTableView:(id)arg1;

- (void)observeSheetActions:(id)arg1;

- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

- (void)presentAutoCompletionViewController:(id)arg1 apparentContentHeight:(double)arg2 contentViewChangeBlock:(id)arg3;

- (void)resetSheetActions;

@property(retain, nonatomic) UIImage *serviceIconImage; // @synthesize serviceIconImage=_serviceIconImage;

- (void)setPostButtonEnabled:(_Bool)arg1;

- (void)setSheetActions:(id)arg1;

- (void)setTitle:(id)arg1;

- (id)sheetActions;

@property(readonly, nonatomic) UITableView *tableView;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;

- (void)updateContentViewSize:(struct CGSize)arg1;

- (void)viewDidLayoutSubviews;

- (void)viewDidLoad;



@end

