/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DChartLabelsContainingSceneObject.h"


__attribute__((visibility("hidden")))

@interface TSCH3DChartAxisLabelsSceneObject : TSCH3DChartLabelsContainingSceneObject

{

    id <TSCH3DAxisLabelPositioner><NSObject> mValueLabelPositioner;

    id <TSCH3DAxisLabelPositioner><NSObject> mCategoryLabelPositioner;

}



+ (void)cacheValueAxisLabelAlignmentForScene:(id)arg1;

+ (struct TSCH3DScenePart)partWithEnumerator:(id)arg1 chartInfo:(id)arg2 styleIndex:(unsigned long long)arg3;

+ (void)setSelectionPath:(id)arg1 selectionMode:(int)arg2 forScene:(id)arg3;

+ (unsigned int)valueAxisLabelAlignmentForScene:(id)arg1;

- (unsigned int)alignmentForPositioner:(id)arg1 scene:(id)arg2 enumerator:(id)arg3 returningDirection:(tvec3_17f03ce0 *)arg4;

- (_Bool)canEditTextForSelectionPath:(id)arg1 forInfo:(id)arg2;

- (_Bool)canRenderSelectionPath:(id)arg1 forInfo:(id)arg2;

@property(retain) id <TSCH3DAxisLabelPositioner> categoryLabelPositioner; // @synthesize categoryLabelPositioner=mCategoryLabelPositioner;

- (id)convertSelectionPathTo3D:(id)arg1 path:(id)arg2;

- (void)dealloc;

- (id)effects;

- (int)knobsModeForLabelType:(int)arg1 scene:(id)arg2;

- (tvec3_17f03ce0)labelPositionDirectionForScene:(id)arg1 enumerator:(id)arg2;

- (int)p_animationTextureSceneDelegateChunkPlane;

- (tvec3_17f03ce0)p_categoryLabelsOffsetFromAccessor:(const struct ChartScenePropertyAccessor *)arg1;

- (long long)p_categoryStride:(id)arg1;

- (void)p_renderCategoryLabels:(id)arg1;

- (void)p_renderLabels:(id)arg1 labelType:(int)arg2 part:(struct TSCH3DScenePart)arg3 positioner:(id)arg4 offset:(const tvec3_17f03ce0 *)arg5 offset2DBlock:(id)arg6 strideBlock:(void)arg7 skipFirst:(id)arg8 showLast:(void)arg9;

- (void)p_renderValueLabels:(id)arg1;

- (void)p_setOffset:(const tvec3_17f03ce0 *)arg1 forLabelType:(int)arg2 pipeline:(id)arg3 part:(struct TSCH3DScenePart)arg4 positioner:(id)arg5;

- (tvec3_17f03ce0)p_valueLabelsOffsetFromAccessor:(const struct ChartScenePropertyAccessor *)arg1;

- (void)postRenderBounds:(id)arg1;

- (void)renderAnnotatedLabels:(id)arg1;

- (id)renderInfoForSelectionPath:(id)arg1 info:(id)arg2;

- (void)renderLabels:(id)arg1;

- (id)selectionPathForInfo:(id)arg1 axis:(id)arg2 selectionPathLabelIndex:(unsigned long long)arg3;

- (id)selectionPathForInfo:(id)arg1 scene:(id)arg2 pickedPoint:(id)arg3;

@property(retain) id <TSCH3DAxisLabelPositioner> valueLabelPositioner; // @synthesize valueLabelPositioner=mValueLabelPositioner;



@end

