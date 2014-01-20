/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSDictionary, TSUColor;



__attribute__((visibility("hidden")))

@interface MFPColorAdjust : NSObject

{

    struct MFPColorMatrix *mColorMatrix;

    struct MFPColorMatrix *mGrayMatrix;

    int mColorMatrixFlags;

    struct {

        TSUColor *mLow;

        TSUColor *mHigh;

    } mTransparentRange;

    float mGamma;

    NSDictionary *mRecolorMap;

    float mThreshold;

    _Bool mEnabled;

}



- (id).cxx_construct;

- (struct MFPColorMatrix *)colorMatrix;

- (int)colorMatrixFlags;

- (void)dealloc;

- (float)gamma;

- (struct MFPColorMatrix *)grayMatrix;

- (id)init;

- (_Bool)isEnabled;

- (id)recolorMap;

- (void)setColorMatrix:(struct MFPColorMatrix *)arg1;

- (void)setColorMatrixFlags:(int)arg1;

- (void)setEnabled:(_Bool)arg1;

- (void)setGamma:(float)arg1;

- (void)setGrayMatrix:(struct MFPColorMatrix *)arg1;

- (void)setRecolorMap:(id)arg1;

- (void)setThreshold:(float)arg1;

- (void)setTransparentLow:(id)arg1 high:(id)arg2;

- (float)threshold;

- (id)transparentHigh;

- (id)transparentLow;



@end

