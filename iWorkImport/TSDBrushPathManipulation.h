/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSDPathManipulation.h"


@class NSMutableArray, NSMutableDictionary;



__attribute__((visibility("hidden")))

@interface TSDBrushPathManipulation : TSDPathManipulation

{

    struct CGPath *mBrushStroke;

    double mRepeatLength;

    NSMutableDictionary *mSections;

    NSMutableArray *mMiddleSections;

    NSMutableArray *mSmallSections;

    double mSmallLimitWidth;

    _Bool mSplitAtSharpAngles;

}



@end

