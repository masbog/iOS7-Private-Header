/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDLayout.h"


#import "TSKChangeSourceObserver.h"

#import "TSWPColumnMetrics.h"

#import "TSWPLayoutParent.h"



@class TSWPLayout, TSWPPadding;



__attribute__((visibility("hidden")))

@interface KNNoteLayout : TSDLayout <TSKChangeSourceObserver, TSWPLayoutParent, TSWPColumnMetrics>

{

    struct CGSize mSizeOfScrollViewEnclosingCanvas;

    TSWPLayout *mContainedLayout;

    TSWPPadding *mPadding;

}



- (id).cxx_construct;

- (void)addChild:(id)arg1;

@property(readonly, nonatomic) struct CGSize adjustedInsets;

@property(readonly, nonatomic) _Bool alwaysStartsNewTarget;

- (void)asyncProcessChanges:(id)arg1 forChangeSource:(id)arg2;

- (unsigned int)autosizeFlagsForTextLayout:(id)arg1;

- (struct CGRect)autosizedFrameForTextLayout:(id)arg1 textSize:(struct CGSize)arg2;

- (struct CGPoint)capturedInfoPositionForAttachment;

- (id)childSearchTargets;

- (id)children;

@property(readonly, nonatomic) unsigned long long columnCount;

- (id)columnMetricsForCharIndex:(unsigned long long)arg1 outRange:(struct _NSRange)arg2;

@property(readonly, nonatomic) _Bool columnsAreLeftToRight;

- (id)computeLayoutGeometry;

@property(readonly, nonatomic) TSWPLayout *containedLayout; // @synthesize containedLayout=mContainedLayout;

- (void)createContainedLayoutForEditing;

- (void)dealloc;

- (id)dependentsOfTextLayout:(id)arg1;

- (double)gapForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;

- (void)insertChild:(id)arg1 above:(id)arg2;

- (void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2;

- (void)insertChild:(id)arg1 below:(id)arg2;

- (void)invalidateForAutosizingTextLayout:(id)arg1;

- (void)invalidateSize;

- (id)layoutGeometryFromInfo;

@property(readonly, nonatomic) TSWPPadding *layoutMargins;

- (double)maxAutoGrowHeightForTextLayout:(id)arg1;

- (struct CGRect)nonAutosizedFrameForTextLayout:(id)arg1;

- (id)p_adjustedPaddingForBodyWidth:(double)arg1;

- (void)p_setSizeOfScrollViewEnclosingCanvasFromLayoutController:(id)arg1;

@property(readonly, nonatomic) TSWPPadding *padding;

- (double)positionForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2 outWidth:(double *)arg3 outGap:(double *)arg4;

- (Class)repClassForTextLayout:(id)arg1;

- (void)replaceChild:(id)arg1 with:(id)arg2;

- (void)setChildren:(id)arg1;

@property(readonly, nonatomic) _Bool shrinkTextToFit;

- (void)sizeOfScrollViewEnclosingCanvasDidChange;

- (_Bool)supportsBoldItalicUnderlineShortcuts;

- (_Bool)textIsVertical;

@property(readonly, nonatomic) double textScaleFactor;

- (double)textScaleFactorForPrinting;

- (void)updateChildrenFromInfo;

- (int)verticalAlignmentForTextLayout:(id)arg1;

- (double)widthForColumnIndex:(unsigned long long)arg1 bodyWidth:(double)arg2;

- (void)willBeAddedToLayoutController:(id)arg1;

- (void)willBeRemovedFromLayoutController:(id)arg1;



@end


