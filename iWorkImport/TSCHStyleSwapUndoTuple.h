/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class TSPObject<TSCHStyleSwapSupporting>, TSSPropertySet, TSSStyle;



__attribute__((visibility("hidden")))

@interface TSCHStyleSwapUndoTuple : NSObject

{

    TSPObject<TSCHStyleSwapSupporting> *mStyleSwapSupporting;

    int mSwapType;

    unsigned long long mIndex;

    TSSStyle *mOldValue;

    TSSStyle *mNewValue;

    TSSPropertySet *mMutatedProperties;

}



@property(readonly) TSSStyle *afterValue; // @synthesize afterValue=mNewValue;

@property(readonly) TSSStyle *beforeValue; // @synthesize beforeValue=mOldValue;

- (_Bool)canApplyTupleToStyleSwapSupporting:(id)arg1;

- (void)dealloc;

- (id)description;

- (unsigned long long)hash;

@property(readonly) unsigned long long index; // @synthesize index=mIndex;

- (id)initWithArchive:(const struct StyleSwapUndoTupleArchive *)arg1 unarchiver:(id)arg2;

- (id)initWithChartInfo:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5;

- (id)initWithChartStylePreset:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5;

- (id)inverse;

- (_Bool)isEqual:(id)arg1;

@property(readonly) TSSPropertySet *mutatedProperties;

- (id)p_initWithPersistentStyleSwapSupporting:(id)arg1 swapType:(int)arg2 index:(unsigned long long)arg3 oldValue:(id)arg4 newValue:(id)arg5;

- (id)p_nonequalPropertiesFromMap:(id)arg1 toMap:(id)arg2;

- (void)saveToArchive:(struct StyleSwapUndoTupleArchive *)arg1 archiver:(id)arg2;

@property(readonly, nonatomic) TSPObject<TSCHStyleSwapSupporting> *styleSwapSupporting; // @synthesize styleSwapSupporting=mStyleSwapSupporting;

@property(readonly) int swapType; // @synthesize swapType=mSwapType;



@end


