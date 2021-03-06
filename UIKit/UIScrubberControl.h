/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIOldSliderControl.h"


@class UIView;



@interface UIScrubberControl : UIOldSliderControl

{

    CDUnion_b710d1cf _sliderAvailableFill;

    double _duration;

    float _lastDisplayedWidth;

    float _maxTrackWidth;

    UIView *_elapsedTimeView;

    UIView *_remainingTimeView;

    id _delegate;

    double _trackingStartTime;

    struct CGPoint _lastUpdatedPoint;

    float _valueAvailable;

    unsigned int _didDrag:1;

    unsigned int _sentScrubbingStart:1;

    unsigned int _autoSizesToFitDuration:1;

    unsigned int _layoutTimeParts:2;

    unsigned int _remainingIsDuration:1;

    unsigned int _delegateDidEnterScrubbingState:1;

    unsigned int _delegateDidChangeScrubValue:1;

    unsigned int _delegateShouldBeginScrubbing:1;

    unsigned int _endingTracking:1;

    unsigned int _showKnob:1;

    unsigned int _largeKnob:1;

    unsigned int _rightCapIsDownloadCap:1;

    unsigned int _requireMomentaryDelay:1;

    unsigned int _showFullWidthComponents:1;

    unsigned int _alwaysShowAllComponentsForDuration:1;

    unsigned int _timeLayoutDisabledCount:7;

    unsigned int _timeLayoutSkippedLayout:1;

    unsigned int _timeLayoutSkippedForcedLayout:1;

    unsigned int _showTimeCentered:1;

    unsigned int _leftCapIsDownloadCap:1;

    unsigned int _allowsAnyValue:1;

    unsigned int _unused:3;

}



+ (_Bool)allowLayeredFillForKnob;

- (_Bool)_notAllValueAvailable;

- (struct CGRect)_rectOfTrack;

- (void)_resetTimeFrames;

- (void)_sendDelegateDidEnterScrubbingState:(_Bool)arg1;

- (void)_setValue:(float)arg1 andSendAction:(_Bool)arg2;

- (void)_updateAvailableFill;

- (void)_updateTimes:(_Bool)arg1;

- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

- (_Bool)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

- (id)createSliderKnobView;

- (void)dealloc;

- (void)disableTimesLayout;

- (void)drawSliderPiece:(int)arg1 inRect:(struct CGRect)arg2;

- (double)duration;

- (void)enableTimesLayout;

- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

- (struct CGRect)fillBounds;

- (struct CGRect)hitRect;

- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;

- (id)imageForSliderPiece:(int)arg1;

- (id)initWithFrame:(struct CGRect)arg1 maxTrackWidth:(float)arg2 showTimes:(_Bool)arg3 knobStyle:(int)arg4;

- (id)initWithFrame:(struct CGRect)arg1 maxTrackWidth:(float)arg2 showTimes:(_Bool)arg3 showKnob:(_Bool)arg4;

- (const CDStruct_869f9c67 *)metrics;

- (_Bool)pointInside:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;

- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

- (_Bool)pointInsideKnob:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;

- (_Bool)pointInsideKnob:(struct CGPoint)arg1 withEvent:(id)arg2;

- (double)requiredAutoUpdateDurationForDuration:(double)arg1;

- (float)scrubValue;

- (void)setAllowsAnyValue:(_Bool)arg1;

- (void)setDelegate:(id)arg1;

- (void)setDuration:(double)arg1;

- (void)setPinTimeToOutsideEdges:(_Bool)arg1;

- (void)setScrubbingRequiresMomentaryDelay:(_Bool)arg1;

- (void)setShowDuration:(_Bool)arg1;

- (void)setShowFullWidthComponents:(_Bool)arg1;

- (void)setShowTimeCenteredInAvailableArea:(_Bool)arg1;

- (void)setTimeColor:(id)arg1;

- (void)setTimeShadowColor:(id)arg1;

- (void)setValue:(float)arg1 animated:(_Bool)arg2 animationCurve:(int)arg3;

- (void)setValueAvailable:(float)arg1;

- (void)sizeToFit;

- (struct CGRect)sliderBounds;



@end


