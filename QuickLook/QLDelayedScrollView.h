/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIScrollView.h"



@interface QLDelayedScrollView : UIScrollView

{

    id <QLDelayedScrollViewDelegate> _delayedScrollViewDelegate;

    struct CGRect _newFrame;

    struct CGRect _newBounds;

    _Bool _isRotating;

    struct CGRect _oldScrollerBounds;

    struct CGRect _rotationRect;

    unsigned int _rotationEdgePin;

    float _oldWidth;

}



- (void)_centerRotationRectWithWebViewToScale:(id)arg1;

- (void)_redrawWebView:(id)arg1 withOldWidth:(float)arg2 andNewSize:(struct CGSize)arg3 enablingTileDrawing:(_Bool)arg4;

- (void)_setIsRotating:(_Bool)arg1;

- (void)didRotateToInterfaceOrientation:(long long)arg1;

- (void)layoutSubviews;

- (void)setDelayedScrollViewDelegate:(id)arg1;

- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;



@end


