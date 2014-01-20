/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UITableViewController.h"



#import "UIActionSheetDelegate.h"



@class EKSharee, UIActionSheet;



@interface EKShareeViewController : UITableViewController <UIActionSheetDelegate>

{

    UIActionSheet *_alertSheet;

    _Bool _allowEditing;

    EKSharee *_sharee;

    id <EKShareeViewControllerDelegate> _delegate;

}



- (void).cxx_destruct;

- (void)_allowEditingChanged:(id)arg1;

- (void)_reloadTitle;

- (long long)_rowForSubitem:(int)arg1;

- (_Bool)_shouldDisplayResendInvitationButton;

- (int)_subitemAtRow:(long long)arg1;

- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;

@property(nonatomic) _Bool allowEditing; // @synthesize allowEditing=_allowEditing;

@property(nonatomic) __weak id <EKShareeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (id)initWithSharee:(id)arg1;

- (void)loadView;

- (long long)numberOfSectionsInTableView:(id)arg1;

- (struct CGSize)preferredContentSize;

- (void)removeClicked:(id)arg1;

@property(retain, nonatomic) EKSharee *sharee; // @synthesize sharee=_sharee;

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;

- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;

- (void)viewWillAppear:(_Bool)arg1;



@end

