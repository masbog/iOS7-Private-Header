/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, OADDrawingTheme, OADGroup, OADOrientedBounds, OADShapeStyle, ODDDiagram;



__attribute__((visibility("hidden")))

@interface ODIState : NSObject

{

    ODDDiagram *mDiagram;

    OADOrientedBounds *mDiagramOrientedBounds;

    struct CGRect mLogicalBounds;

    double mScale;

    OADGroup *mGroup;

    NSMutableArray *mPresentationNames;

    NSMutableArray *mDefaultStyleLabelNames;

    int mPointCount;

    int mPointIndex;

    OADShapeStyle *mTextStyle;

    OADDrawingTheme *mDrawingTheme;

}



- (id).cxx_construct;

- (void)dealloc;

- (id)defaultStyleLabelNameForPointType:(int)arg1;

- (id)diagram;

- (id)diagramOrientedBounds;

- (id)drawingTheme;

- (id)group;

- (id)initWithDiagram:(id)arg1 group:(id)arg2 drawingTheme:(id)arg3;

- (struct CGRect)logicalBounds;

- (int)pointCount;

- (int)pointIndex;

- (id)presentationNameForPointType:(int)arg1;

- (double)scale;

- (void)setDefaultStyleLabelName:(id)arg1 forPointType:(int)arg2;

- (void)setGroup:(id)arg1;

- (void)setLogicalBounds:(struct CGRect)arg1;

- (void)setLogicalBounds:(struct CGRect)arg1 maintainAspectRatio:(_Bool)arg2;

- (void)setPointCount:(int)arg1;

- (void)setPointIndex:(int)arg1;

- (void)setPresentationName:(id)arg1 forPointType:(int)arg2;

- (void)setTextStyle:(id)arg1;

- (id)textStyle;



@end


