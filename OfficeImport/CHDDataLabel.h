/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class EDResources, OADGraphicProperties;



__attribute__((visibility("hidden")))

@interface CHDDataLabel : NSObject

{

    EDResources *mResources;

    unsigned long long mStringIndex;

    unsigned long long mContentFormatId;

    int mPosition;

    _Bool mShowLeaderLines;

    _Bool mShowCategoryName;

    _Bool mShowSeriesName;

    _Bool mShowPercent;

    _Bool mShowValue;

    _Bool mShowLegendKey;

    _Bool mIsPositionAffineTransform;

    double mRotation;

    OADGraphicProperties *mGraphicProperties;

}



+ (id)dataLabelWithResources:(id)arg1;

- (id)contentFormat;

- (unsigned long long)contentFormatId;

- (void)dealloc;

- (id)graphicProperties;

- (id)initWithResources:(id)arg1;

- (_Bool)isPositionAffineTransform;

- (_Bool)isShowCategoryName;

- (_Bool)isShowLeaderLines;

- (_Bool)isShowLegendKey;

- (_Bool)isShowPercent;

- (_Bool)isShowSeriesName;

- (_Bool)isShowValue;

- (int)position;

- (double)rotationAngle;

- (void)setContentFormat:(id)arg1;

- (void)setContentFormatId:(unsigned long long)arg1;

- (void)setGraphicProperties:(id)arg1;

- (void)setIsPositionAffineTransform:(_Bool)arg1;

- (void)setPosition:(int)arg1;

- (void)setRotationAngle:(double)arg1;

- (void)setShowCategoryName:(_Bool)arg1;

- (void)setShowLeaderLines:(_Bool)arg1;

- (void)setShowLegendKey:(_Bool)arg1;

- (void)setShowPercent:(_Bool)arg1;

- (void)setShowSeriesName:(_Bool)arg1;

- (void)setShowValue:(_Bool)arg1;

- (void)setString:(id)arg1;

- (void)setStringIndex:(unsigned long long)arg1;

- (id)string;

- (unsigned long long)stringIndex;



@end


