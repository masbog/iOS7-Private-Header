/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface TSKFidgetResolver : NSObject

{

    double _fidgetThreshold;

    id *_values;

    double *_times;

    unsigned long long _head;

}



- (void)dealloc;

@property(nonatomic) double fidgetThreshold; // @synthesize fidgetThreshold=_fidgetThreshold;

- (id)init;

@property(readonly, nonatomic) id nonFidgetValue;

- (void)p_advanceHead;

- (unsigned long long)p_previousValidIndexFromIndex:(unsigned long long)arg1;

- (void)pushValue:(id)arg1;

- (void)pushValue:(id)arg1 withTime:(double)arg2;



@end


