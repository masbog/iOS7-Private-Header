/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VKModelObject.h"


#import "VKMapLayer.h"

#import "VKStylesheetObserver.h"



@class VGLMesh, VGLRenderState, VKMapModel, VKStylesheet;



__attribute__((visibility("hidden")))

@interface VKGridModel : VKModelObject <VKMapLayer, VKStylesheetObserver>

{

    VKMapModel *_mapModel;

    _Bool _simpleGridEnabled;

    VGLRenderState *_renderState;

    double _gridMix;

    CDStruct_aa5aacbc _projection;

    CDStruct_aa5aacbc _gridView;

    Vec2Imp_1782d7e3 _invFwidth;

    struct _VGLColor _fillColor;

    struct _VGLColor _lineColor;

    VGLMesh *_mesh;

}



+ (_Bool)reloadOnStylesheetChange;

- (id).cxx_construct;

- (void)dealloc;

- (void)drawScene:(id)arg1 withContext:(id)arg2;

@property(readonly, nonatomic) struct _VGLColor fillColor; // @synthesize fillColor=_fillColor;

- (id)init;

- (void)layoutScene:(id)arg1 withContext:(id)arg2;

- (unsigned long long)mapLayerPosition;

@property(nonatomic) VKMapModel *mapModel; // @synthesize mapModel=_mapModel;

@property(nonatomic) _Bool simpleGridEnabled; // @synthesize simpleGridEnabled=_simpleGridEnabled;

@property(readonly, nonatomic) VKStylesheet *stylesheet;

- (void)stylesheetDidChange;

- (unsigned int)supportedRenderPasses;

- (void)updateGridColor;



@end


