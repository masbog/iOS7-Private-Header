/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SUViewController.h"


#import "SUGridViewDataSource.h"

#import "SUGridViewDelegate.h"



@class SUGridView, SUTableDataSource;



@interface SUGridViewController : SUViewController <SUGridViewDataSource, SUGridViewDelegate>

{

    SUTableDataSource *_dataSource;

    long long _disappearOrientation;

    double _tableMargin;

    long long _tableViewStyle;

}



- (id)_existingGridView;

@property(retain, nonatomic) SUTableDataSource *dataSource; // @synthesize dataSource=_dataSource;

- (void)dealloc;

- (_Bool)deleteCellAtIndexPath:(id)arg1;

- (void)didRotateFromInterfaceOrientation:(long long)arg1;

@property(readonly, nonatomic) SUGridView *gridView;

- (void)gridView:(id)arg1 commitEditingStyle:(long long)arg2 forCellAtIndexPath:(id)arg3;

- (long long)gridView:(id)arg1 editingStyleForCellAtIndexPath:(id)arg2;

- (id)gridView:(id)arg1 gridCellForRowAtIndexPath:(id)arg2;

- (double)gridView:(id)arg1 heightForHeaderInSection:(long long)arg2;

- (long long)gridView:(id)arg1 numberOfColumnsInSection:(long long)arg2;

- (long long)gridView:(id)arg1 numberOfRowsInSection:(long long)arg2;

- (id)gridView:(id)arg1 titleForHeaderInSection:(long long)arg2;

- (id)gridView:(id)arg1 viewForHeaderInSection:(long long)arg2;

- (void)gridView:(id)arg1 willDisplayCell:(id)arg2 forIndexPath:(id)arg3;

- (id)initWithTableViewStyle:(long long)arg1;

- (void)loadView;

- (double)marginForGridView:(id)arg1;

- (long long)numberOfSectionsInGridView:(id)arg1;

- (void)reloadData;

@property(nonatomic) double tableMargin; // @synthesize tableMargin=_tableMargin;

- (void)viewDidAppear:(_Bool)arg1;

- (void)viewWillAppear:(_Bool)arg1;

- (void)viewWillDisappear:(_Bool)arg1;

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



@end


