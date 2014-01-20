/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "AVCaptureOutput.h"


@class AVCaptureVideoDataOutputInternal, NSArray, NSDictionary, NSObject<OS_dispatch_queue>;



@interface AVCaptureVideoDataOutput : AVCaptureOutput

{

    AVCaptureVideoDataOutputInternal *_internal;

}



+ (void)initialize;

+ (id)supportedVideoSettingsKeys;

- (void)_AVCaptureVideoDataOutput_VideoDataBecameReady;

- (void)_applyOverridesToCaptureOptions:(id)arg1;

- (void)_setMinFrameDuration:(CDStruct_1b6d18a9)arg1;

- (id)addConnection:(id)arg1 error:(id *)arg2;

@property(nonatomic) _Bool alwaysDiscardsLateVideoFrames;

- (_Bool)appliesMirroringWithPhysicalFlipForConnection:(id)arg1;

- (_Bool)appliesOrientationWithPhysicalRotationForConnection:(id)arg1;

@property(readonly, nonatomic) NSArray *availableVideoCVPixelFormatTypes;

@property(readonly, nonatomic) NSArray *availableVideoCodecTypes;

- (id)connectionMediaTypes;

- (void)dealloc;

- (void)didStartForSession:(id)arg1;

- (void)didStopForSession:(id)arg1 error:(id)arg2;

- (void)handleEnabledChangedForConnection:(id)arg1;

- (id)init;

- (_Bool)isTheOnlyDataOutput;

@property(nonatomic) CDStruct_1b6d18a9 minFrameDuration;

- (struct CGSize)outputSizeForCaptureOptions:(id)arg1;

- (id)recommendedVideoSettingsForAssetWriterWithOutputFileType:(id)arg1;

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *sampleBufferCallbackQueue;

@property(readonly, nonatomic) id <AVCaptureVideoDataOutputSampleBufferDelegate> sampleBufferDelegate;

- (void)setSampleBufferDelegate:(id)arg1 queue:(id)arg2;

- (void)setSession:(id)arg1;

@property(copy, nonatomic) NSDictionary *videoSettings;

- (id)supportedAssetWriterOutputFileTypes;

- (id)vettedVideoSettingsForSettingsDictionary:(id)arg1;



@end

