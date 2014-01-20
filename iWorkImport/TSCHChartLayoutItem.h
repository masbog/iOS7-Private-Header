/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSCHUnretainedParent.h"



@class NSArray, TSCHChartInfo, TSCHChartModel, TSCHChartRootLayoutItem;



__attribute__((visibility("hidden")))

@interface TSCHChartLayoutItem : NSObject <TSCHUnretainedParent>

{

    TSCHChartLayoutItem *mParent;

    NSArray *mChildren;

    _Bool mTreeBuilt;

    struct CGPoint mOffset;

    struct CGSize mLayoutSize;

    _Bool mLayoutSizeSet;

    struct CGRect mDrawingRectCache;

    _Bool mDrawingRectCacheValid;

    struct CGSize mMinSizeCache;

    _Bool mMinSizeCacheValid;

    struct CGRect mOverhangRectCache;

    _Bool mOverhangRectCacheValid;

}



+ (id)chartLayoutWithChartInfo:(id)arg1;

- (void)buildSubTree;

- (struct CGRect)calcDrawingRect;

- (struct CGSize)calcMinSize;

- (struct CGRect)calcOverhangRect;

@property(readonly, nonatomic) TSCHChartInfo *chartInfo;

- (void)clearAll;

- (void)clearDrawingRect;

- (void)clearLayoutSize;

- (void)clearMinSize;

- (void)clearOverhangRect;

- (void)clearParent;

@property(readonly, nonatomic) unsigned long long dataSetIndex;

- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) struct CGPoint drawingOffset;

@property(readonly, nonatomic) struct CGRect drawingRect;

@property(readonly, nonatomic) struct CGSize drawingSize;

- (id)hitChartElements:(struct CGPoint)arg1 passingTest:(id)arg2;

- (id)initWithParent:(id)arg1;

@property(readonly, nonatomic) _Bool isInResize;

@property(nonatomic) struct CGPoint layoutOffset; // @synthesize layoutOffset=mOffset;

@property(nonatomic) struct CGRect layoutRect;

@property(nonatomic) CDStruct_9aa9521f layoutSettings;

@property(nonatomic) struct CGSize layoutSize;

- (void)layoutUsingMethod:(int)arg1;

@property(readonly) struct CGSize minSize;

@property(readonly, nonatomic) TSCHChartModel *model;

- (id)mutationTuplesToApplyDuringResize;

- (struct CGPath *)newDragAndDropHighlightPathForSelection:(id)arg1;

- (double)overhangMagnitudeForEdge:(int)arg1;

- (struct CGPoint)overhangOffset;

@property(readonly, nonatomic) struct CGRect overhangRect;

- (struct CGSize)overhangSize;

- (id)p_description;

- (void)p_iterateChildrenWithBlock:(id)arg1;

- (void)p_layoutInward;

- (void)p_layoutOutward;

@property(readonly, nonatomic) TSCHChartLayoutItem *parent; // @synthesize parent=mParent;

- (void)protected_iterateHitChartElements:(struct CGPoint)arg1 withBlock:(id)arg2;

- (id)renderersWithRep:(id)arg1;

@property(readonly, nonatomic) TSCHChartRootLayoutItem *root;

@property(readonly, nonatomic) struct CGRect rootedDrawingRect;

@property(readonly, nonatomic) struct CGRect rootedLayoutRect;

@property(readonly, nonatomic) struct CGSize startingSize;

- (_Bool)stopIteratingItemsContainingPoint:(struct CGPoint)arg1 withBlock:(id)arg2;

- (id)subselectionHaloPositionsForSelections:(id)arg1;

- (id)subselectionKnobPositionsForSelection:(id)arg1;



@end

