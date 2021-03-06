/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VGLContext.h"


@class VGLRoadAtlas, VGLTexture, VKCamera, VKViewTransform;



__attribute__((visibility("hidden")))

@interface VKDrawContext : VGLContext

{

    int _frameNumber;

    double _timestamp;

    id <VGLCanvas> _canvas;

    VKCamera *_camera;

    VKViewTransform *_viewTransform;

    CDStruct_aa5aacbc _modelMatrix;

    CDStruct_aa5aacbc _modelViewProjectionMatrix;

    CDUnion_f5b85e25 _shaderMatrix;

    Vec3Imp_f658403c _light;

    _Bool _cullFaceEnabled;

    unsigned long long _mapLayerPosition;

    VGLTexture *_alphaTexture;

    VGLTexture *_arrowTexture;

    VGLRoadAtlas *_alphaAtlas;

    VGLTexture *_mediumTrafficTexture;

    VGLTexture *_slowTrafficTexture;

    VGLTexture *_borderTexture;

    _Bool _gesturing;

    _Bool _hasOccluders;

    _Bool _hasMovingOccluders;

    double _styleZ;

    struct VKEdgeInsets _labelEdgeInsets;

    unsigned char _stencilStart;

}



- (id).cxx_construct;

@property(readonly, nonatomic) VGLRoadAtlas *alphaAtlas; // @synthesize alphaAtlas=_alphaAtlas;

@property(readonly, nonatomic) VGLTexture *alphaTexture; // @synthesize alphaTexture=_alphaTexture;

@property(readonly, nonatomic) VGLTexture *arrowTexture; // @synthesize arrowTexture=_arrowTexture;

@property(readonly, nonatomic) VGLTexture *borderTexture;

@property(readonly, nonatomic) VKCamera *camera; // @synthesize camera=_camera;

@property(nonatomic) id <VGLCanvas> canvas; // @synthesize canvas=_canvas;

- (void)dealloc;

- (void)debugDrawAsteriskAtPixel:(Vec2Imp_1782d7e3)arg1 color:(struct _VGLColor)arg2;

- (void)debugDrawAsteriskAtPoint:(Vec2Imp_1782d7e3)arg1 color:(struct _VGLColor)arg2;

- (void)debugDrawAsteriskAtWorldPoint:(struct VKPoint)arg1 color:(struct _VGLColor)arg2;

- (void)debugDrawPath:(int)arg1 pixels:(Vec2Imp_1782d7e3 *)arg2 color:(struct _VGLColor)arg3;

- (void)debugDrawPath:(int)arg1 points:(Vec2Imp_1782d7e3 *)arg2 color:(struct _VGLColor)arg3;

- (void)debugDrawString:(id)arg1 pixel:(Vec2Imp_1782d7e3)arg2 color:(struct _VGLColor)arg3 fontSize:(float)arg4;

- (void)debugDrawString:(id)arg1 point:(Vec2Imp_1782d7e3)arg2 color:(struct _VGLColor)arg3 fontSize:(float)arg4;

- (void)debugDrawString:(id)arg1 worldPoint:(struct VKPoint)arg2 color:(struct _VGLColor)arg3 fontSize:(float)arg4;

- (int)drawDebugText:(id)arg1 lineNumber:(int)arg2;

@property(nonatomic) int frameNumber; // @synthesize frameNumber=_frameNumber;

@property(nonatomic) _Bool hasMovingOccluders; // @synthesize hasMovingOccluders=_hasMovingOccluders;

@property(nonatomic) _Bool hasOccluders; // @synthesize hasOccluders=_hasOccluders;

@property(nonatomic, getter=isGesturing) _Bool gesturing; // @synthesize gesturing=_gesturing;

@property(nonatomic) struct VKEdgeInsets labelEdgeInsets; // @synthesize labelEdgeInsets=_labelEdgeInsets;

@property(nonatomic) Vec3Imp_f658403c light; // @synthesize light=_light;

@property(nonatomic) unsigned long long mapLayerPosition; // @synthesize mapLayerPosition=_mapLayerPosition;

- (void)markStencilAsDirty;

@property(readonly, nonatomic) VGLTexture *mediumTrafficTexture;

@property(nonatomic) const CDStruct_aa5aacbc *modelMatrix;

@property(readonly, nonatomic) const CDStruct_aa5aacbc *modelViewProjectionMatrix;

- (Vec2Imp_1782d7e3)pixelForPoint:(Vec2Imp_1782d7e3)arg1;

- (Vec2Imp_1782d7e3)pixelForWorldPoint:(struct VKPoint)arg1;

- (unsigned char)reserveStencilValues:(unsigned char)arg1;

@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

@property(retain, nonatomic) VKViewTransform *viewTransform; // @synthesize viewTransform=_viewTransform;

@property(readonly, nonatomic) CDUnion_f5b85e25 shaderMatrix; // @synthesize shaderMatrix=_shaderMatrix;

@property(readonly, nonatomic) VGLTexture *slowTrafficTexture;

- (void)startFrameWithCamera:(id)arg1;

@property(readonly, nonatomic) double styleZ; // @synthesize styleZ=_styleZ;

- (float)styleZAdjust;



@end


