/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIKBKeyView.h"


#import "UIKeyboardCandidateGridCollectionViewControllerDelegate.h"



@class TIKeyboardCandidateResultSet, UIKeyboardCandidateGridCollectionViewController, UIKeyboardCandidateSortControl, UIView;



__attribute__((visibility("hidden")))

@interface UIKBCandidateView : UIKBKeyView <UIKeyboardCandidateGridCollectionViewControllerDelegate>

{

    UIView *_clippingView;

    UIView *_topBorder;

    unsigned long long _selectedSortIndex;

    UIKeyboardCandidateGridCollectionViewController *_collectionViewController;

    UIKeyboardCandidateSortControl *_scrollViewSortControl;

    CDStruct_961fb75c _visualStyling;

}



- (id).cxx_construct;

- (void)addSubview:(id)arg1;

- (void)candidateAcceptedAtIndex:(unsigned long long)arg1;

- (id)candidateList;

@property(readonly, nonatomic) TIKeyboardCandidateResultSet *candidateResultSet;

- (void)clearCollectionViewController;

@property(retain, nonatomic) UIKeyboardCandidateGridCollectionViewController *collectionViewController; // @synthesize collectionViewController=_collectionViewController;

- (id)currentCandidate;

- (unsigned long long)currentIndex;

- (void)dealloc;

- (void)displayLayer:(id)arg1;

- (unsigned long long)gridCollectionViewNumberOfColumns:(id)arg1;

- (unsigned long long)gridCollectionViewSelectedSortMethodIndex:(id)arg1;

- (id)groupedCandidatesFromCandidateSet:(id)arg1 forSortIndex:(unsigned long long)arg2;

- (_Bool)hasCandidates;

- (id)headerViewForCandidateSet:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

- (_Bool)isExtendedList;

- (_Bool)isHiddenCandidatesList;

- (_Bool)isTenKey;

- (id)keyboardBehaviors;

@property(retain, nonatomic) UIKeyboardCandidateSortControl *scrollViewSortControl; // @synthesize scrollViewSortControl=_scrollViewSortControl;

@property(nonatomic) unsigned long long selectedSortIndex; // @synthesize selectedSortIndex=_selectedSortIndex;

- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect)arg3 maxX:(double)arg4 layout:(_Bool)arg5;

- (void)setRenderConfig:(id)arg1;

- (void)setUIKeyboardCandidateListDelegate:(id)arg1;

@property(nonatomic) CDStruct_961fb75c visualStyling; // @synthesize visualStyling=_visualStyling;

- (void)showCandidate:(id)arg1;

- (void)showCandidateAtIndex:(unsigned long long)arg1;

- (void)showNextCandidate;

- (void)showNextPage;

- (void)showNextRow;

- (void)showPreviousCandidate;

- (void)showPreviousPage;

- (void)showPreviousRow;

- (void)sortSelectionBarAction:(id)arg1;

- (id)statisticsIdentifier;

- (void)updateCollectionViewController;

- (void)updateCollectionViewController:(_Bool)arg1;

- (void)updateForKeyplane:(id)arg1 key:(id)arg2;



@end


