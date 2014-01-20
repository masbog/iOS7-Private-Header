/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSCH3DAnimationTimeSlice.h"


@class NSIndexSet;



__attribute__((visibility("hidden")))

@interface TSCH3DCascadeAnimationTimeSlice : TSCH3DAnimationTimeSlice

{

    NSIndexSet *mElements;

    tvec2_3b141483 mSize;

    _Bool mReverse;

    unsigned long long mCascadeSlices;

}



+ (id)timeSliceWithIndexSet:(id)arg1 size:(tvec2_3b141483 *)arg2 reverse:(_Bool)arg3;

+ (id)timeSliceWithIndexSet:(id)arg1 size:(tvec2_3b141483 *)arg2 reverse:(_Bool)arg3 cascadeSlices:(unsigned long long)arg4;

- (id).cxx_construct;

@property(nonatomic) unsigned long long cascadeSlices; // @synthesize cascadeSlices=mCascadeSlices;

- (void)dealloc;

- (id)initWithIndexSet:(id)arg1 size:(tvec2_3b141483 *)arg2 reverse:(_Bool)arg3 cascadeSlices:(unsigned long long)arg4;

- (box_e9f23397)rangeForIndex:(const tvec2_3b141483 *)arg1;

- (unsigned long long)totalSlices;



@end

