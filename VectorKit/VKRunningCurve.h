/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface VKRunningCurve : NSObject

{

    CDStruct_972c8cd6 _p0;

    double _t0;

    CDStruct_972c8cd6 _p1;

    double _t1;

    CDStruct_972c8cd6 _pu;

    double _tu;

    struct {

        double mb[4][3];

    } _mb;

    _Bool _mbValid;

}



- (id).cxx_construct;

- (void)appendPosition:(struct VKPoint)arg1 atTime:(double)arg2;

- (void)dealloc;

- (_Bool)hasStateAtTime:(double)arg1;

- (id)init;

- (void)reset;

- (CDStruct_972c8cd6)stateAtTime:(double)arg1;



@end


