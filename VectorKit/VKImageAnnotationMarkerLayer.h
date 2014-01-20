/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VKAnnotationMarkerLayer.h"


@class VGLRenderState, VKImage;



@interface VKImageAnnotationMarkerLayer : VKAnnotationMarkerLayer

{

    VKImage *_image;

    _Bool _drawsOnGround;

    double _rotationRadians;

    _Bool _shouldDraw;

    _Bool _hasCustomShaderMatrix;

    CDUnion_f5b85e25 _shaderMatrix;

    _Bool _hasCustomModelMatrix;

    CDStruct_aa5aacbc _modelMatrix;

    float _scale;

    float _brightness;

    _Bool _isMask;

    struct _VGLColor _color;

    VGLRenderState *_imageRenderState;

    float _opacity;

}



- (id).cxx_construct;

- (id)_configuredProgramWithContext:(id)arg1;

@property(nonatomic) float brightness; // @synthesize brightness=_brightness;

@property(nonatomic) struct _VGLColor color; // @synthesize color=_color;

- (void)dealloc;

- (void)drawWithContext:(id)arg1;

@property(nonatomic) _Bool drawsOnGround; // @synthesize drawsOnGround=_drawsOnGround;

- (id)init;

@property(nonatomic) _Bool isMask; // @synthesize isMask=_isMask;

- (void)layoutWithContext:(id)arg1;

@property(nonatomic) float opacity; // @synthesize opacity=_opacity;

@property(nonatomic) double rotationRadians; // @synthesize rotationRadians=_rotationRadians;

@property(nonatomic) float scale; // @synthesize scale=_scale;

- (void)setImage:(id)arg1;

- (_Bool)shouldSnapToPixelsWithContext:(id)arg1;

- (void)updateWithStyle:(id)arg1;



@end

