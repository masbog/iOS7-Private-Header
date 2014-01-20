/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIView.h"



#import "UIAccelerometerDelegate.h"



@class CADisplayLink, CALayer, CMMotionManager, NSOperationQueue, PLCameraLevelView, PLCameraPanoramaBrokenArrowView, PLCameraPanoramaTextLabel, UIImageView;



@interface PLCameraPanoramaView : UIView <UIAccelerometerDelegate>

{

    id <PLCameraPanoramaViewDelegate> _delegate;

    float _previewScale;

    _Bool _isCapturing;

    _Bool _isProcessing;

    int _direction;

    double _currentSpeed;

    UIImageView *_previewBackgroundImageView;

    UIView *_previewContainer;

    UIView *_previewMaskingContainer;

    CALayer *_previewLayer;

    UIImageView *_previewGhostImageView;

    PLCameraPanoramaTextLabel *_instructionalText;

    UIView *_instructionalTextBackground;

    PLCameraPanoramaBrokenArrowView *_arrowView;

    PLCameraLevelView *_levelView;

    struct CGPoint _arrowViewBeginCenter;

    struct CGRect _initialArrowFrame;

    struct CGRect _currentArrowFrame;

    struct CGRect _initialMaskFrame;

    struct CGRect _currentMaskFrame;

    _Bool _isAnimatingTextIn;

    _Bool _isAnimatingTextOut;

    _Bool _showingFastText;

    _Bool _isAnimatingDirection;

    _Bool _showingMoveText;

    struct CGRect _visiblePreviewRect;

    _Bool _ignorePreviewUpdates;

    CADisplayLink *_displayLink;

    long long _frameCounter;

    CMMotionManager *_motionManager;

    NSOperationQueue *_accelerometerQueue;

    float _initialAcceleration;

    float _currentAcceleration;

    long long _deviceOrientation;

    long long _deferredDeviceOrientation;

}



- (void)_arrowWasTapped:(id)arg1;

- (void)_cancelDelayedShowMoveText;

- (void)_createMotionManagerAndDisplayLink;

- (void)_hideText;

- (void)_showMoveDownText;

- (void)_showMoveUpText;

- (void)_updateInstructionalText:(id)arg1;

- (void)_updateInstructionalTextBackground;

- (void)dealloc;

@property(nonatomic) id <PLCameraPanoramaViewDelegate> delegate; // @synthesize delegate=_delegate;

- (void)hideArrowTextAfterDelay;

- (void)hideFastMovementTextAfterDelay;

- (void)hideInstructionalText;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1 centerYOffset:(double)arg2 panoramaPreviewScale:(float)arg3;

@property(readonly, nonatomic) CALayer *panoramaPreviewLayer; // @synthesize panoramaPreviewLayer=_previewLayer;

- (void)panoramaWillStart;

- (void)setCaptureDirection:(int)arg1;

- (void)setDeviceOrientation:(long long)arg1;

- (void)setMaskingContainerFrame:(struct CGRect)arg1 direction:(int)arg2;

- (void)showFastMovementText;

- (void)showMoveDownText;

- (void)showMoveDownTextAfterDelay;

- (void)showMoveUpText;

- (void)showMoveUpTextAfterDelay;

- (void)showSavingHUD:(_Bool)arg1;

- (void)updateUI;

- (void)updateWithPreviewState:(id)arg1;

- (void)viewWillAppear;

- (void)viewWillDisappear;

- (struct CGRect)visiblePreviewRect;



@end

