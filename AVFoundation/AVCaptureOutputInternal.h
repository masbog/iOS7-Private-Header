/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class AVCaptureSession, NSMutableArray;



@interface AVCaptureOutputInternal : NSObject

{

    AVCaptureSession *session;

    NSMutableArray *connections;

    int changeSeed;

    struct CGAffineTransform metadataTransform;

    double rollAdjustment;

    _Bool physicallyMirrorsVideo;

}



- (void)dealloc;

- (id)init;



@end


