/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PDAnimationShapeTarget.h"


__attribute__((visibility("hidden")))

@interface PDAnimationChartTarget : PDAnimationShapeTarget

{

    int mCatagoryIndex;

    int mSeriesIndex;

    int mBuildStep;

}



- (int)buildStep;

- (int)catagoryIndex;

- (unsigned long long)hash;

- (id)init;

- (_Bool)isEqual:(id)arg1;

- (int)seriesIndex;

- (void)setBuildStep:(int)arg1;

- (void)setCatagoryIndex:(int)arg1;

- (void)setSeriesIndex:(int)arg1;



@end


