/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIControl.h"



@class CADisplayLink, CALayer, NSArray, NSIndexSet, NSTimer, UIView;



@interface SKUIFlowcaseView : UIControl

{

    id <SKUIFlowcaseViewDelegate> _delegate;

    long long _distanceIndex;

    CADisplayLink *_displayLink;

    float _distances[10];

    _Bool _landscape;

    CALayer *_maskLayer1;

    CALayer *_maskLayer2;

    double _position;

    NSArray *_positions;

    _Bool _sendScrollDidEnd;

    long long _selection;

    CALayer *_selectionLayer;

    UIView *_shadowView1;

    UIView *_shadowView2;

    struct CGPoint _startPoint;

    double _startTime;

    NSTimer *_timer;

    NSArray *_views;

}



+ (id)_arrayForStartPosition:(double)arg1 endPosition:(double)arg2;

+ (double)_endPositionForStartPosition:(double)arg1 velocity:(double)arg2 landscape:(_Bool)arg3;

+ (id)_gradientMaskWithLandscape:(_Bool)arg1 inverted:(_Bool)arg2;

- (void).cxx_destruct;

- (void)_decelerateWithVelocity:(double)arg1;

- (long long)_indexOfViewAtPoint:(struct CGPoint)arg1;

- (float)_positionForPosition:(double)arg1;

- (void)_reloadForPosition;

- (void)_showSelectionAtIndex:(long long)arg1 immediately:(_Bool)arg2;

- (void)_timerAction:(id)arg1;

- (void)_timerStart;

- (void)_timerStop;

- (struct CATransform3D)_transformForPosition:(float)arg1;

- (void)_update;

- (void)clearSelection;

- (void)dealloc;

@property(nonatomic) __weak id <SKUIFlowcaseViewDelegate> delegate; // @synthesize delegate=_delegate;

@property(readonly, nonatomic) NSIndexSet *indexSetForVisibleViews;

- (id)initWithFrame:(struct CGRect)arg1;

@property(nonatomic) _Bool landscape; // @synthesize landscape=_landscape;

- (void)layoutSubviews;

@property(nonatomic) double position; // @synthesize position=_position;

@property(retain, nonatomic) NSArray *views; // @synthesize views=_views;

- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

- (void)start;

- (void)stop;

- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;

- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;



@end


