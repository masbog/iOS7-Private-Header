/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CAMediaTimingFunction;



@interface WBSFluidProgressAnimation : NSObject

{

    CAMediaTimingFunction *_timingFunction;

    double _initialPosition;

    double _destinationPosition;

    double _animationDuration;

}



@property(nonatomic) double animationDuration; // @synthesize animationDuration=_animationDuration;

- (void)dealloc;

@property(nonatomic) double destinationPosition; // @synthesize destinationPosition=_destinationPosition;

@property(nonatomic) double initialPosition; // @synthesize initialPosition=_initialPosition;

@property(retain, nonatomic) CAMediaTimingFunction *timingFunction; // @synthesize timingFunction=_timingFunction;



@end

