/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CMDrawableMapper.h"


@class CMDrawingContext, ODDDiagram;



__attribute__((visibility("hidden")))

@interface CMDiagramMapper : CMDrawableMapper

{

    ODDDiagram *mDiagram;

    CMDrawingContext *mDrawingContext;

}



+ (int)diagramTypeFromString:(id)arg1;

- (id)copyDiagramMapperForId:(id)arg1;

- (id)diagram;

- (id)identifierFromLayoutTypeId:(id)arg1;

- (id)initWithOddDiagram:(id)arg1 drawingContext:(id)arg2 orientedBounds:(id)arg3 parent:(id)arg4;

- (void)mapAt:(id)arg1 withState:(id)arg2;

- (id)styleMatrix;



@end

