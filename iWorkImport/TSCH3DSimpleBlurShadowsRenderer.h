/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "TSCH3DShadowsRenderer.h"



@class NSArray, TSCH3DFBOResource;



__attribute__((visibility("hidden")))

@interface TSCH3DSimpleBlurShadowsRenderer : NSObject <TSCH3DShadowsRenderer>

{

    TSCH3DFBOResource *mShadowsFBOResource;

    TSCH3DFBOResource *mBlurFBOResource;

    tvec2_3b141483 mShadowsSize;

    NSArray *mBlurParametersArray;

}



- (id).cxx_construct;

- (void)blurParametersFromQuality:(float)arg1 shadowSize:(long long *)arg2 numPasses:(long long *)arg3 kernelScale:(float *)arg4;

- (float)blurSlackForQuality:(float)arg1;

- (void)dealloc;

- (id)initWithBlurParametersArray:(id)arg1;

- (void)invalidate;

- (void)protectShadowForQuality:(float)arg1 pipeline:(id)arg2 renderBlock:(id)arg3;

- (id)shadowsFBOForContext:(id)arg1;

- (void)unprotectShadowInSession:(id)arg1;



@end

