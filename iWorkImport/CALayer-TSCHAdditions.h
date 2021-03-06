/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CALayer.h"



@interface CALayer (TSCHAdditions)

- (void)addCDEChartFlipAnimationFromPosition:(struct CGPoint)arg1 toLeft:(_Bool)arg2 cameraDistance:(double)arg3;

- (void)addCDEChartFlipAnimationToFinalPosition:(struct CGPoint)arg1 fromLeft:(_Bool)arg2 cameraDistance:(double)arg3;

- (void)addCDEEditorFlipInAnimationFromPosition:(struct CGPoint)arg1 fromLeft:(_Bool)arg2 cameraDistance:(double)arg3;

- (void)addCDEEditorFlipOutAnimationToPosition:(struct CGPoint)arg1 toLeft:(_Bool)arg2 cameraDistance:(double)arg3;

- (void)addCDEShieldInAnimation;

- (void)addCDEShieldOutAnimation;

- (void)addCallbackAnimationWithName:(id)arg1 duration:(double)arg2 target:(id)arg3 selector:(SEL)arg4;

- (void)addPerspectiveProjectionWithDistance:(double)arg1;

- (void)addZoomAnimationFromPoint:(struct CGPoint)arg1 speed:(double)arg2;

- (void)removeCDEChartFlipAnimationFromPosition;

- (void)removeCDEChartFlipAnimationToFinalPosition;

- (void)removeCDEEditorFlipInAnimation;

- (void)removeCDEEditorFlipOutAnimation;

- (void)removeCDEShieldInAnimation;

- (void)removeCDEShieldOutAnimation;

- (void)removeCallbackAnimationWithName:(id)arg1;

- (void)removeZoomAnimation;

@end


