/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AVMetadataObject.h"


@class AVMetadataFaceObjectInternal;



@interface AVMetadataFaceObject : AVMetadataObject

{

    AVMetadataFaceObjectInternal *_internal;

}



+ (id)faceObjectWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;

- (void)dealloc;

- (id)description;

@property(readonly) long long faceID;

@property(readonly) _Bool hasRollAngle;

@property(readonly) _Bool hasYawAngle;

- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(_Bool)arg3 rollAdjustment:(double)arg4;

- (id)initWithFigEmbeddedCaptureDeviceFaceDictionary:(id)arg1 input:(id)arg2;

@property(readonly) double rollAngle;

@property(readonly) double yawAngle;



@end

