/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCopying.h"

#import "TSCHUnretainedParent.h"



@class TSCHChartInfo, TSUIntToIntDictionary;



__attribute__((visibility("hidden")))

@interface TSCHChartMediator : NSObject <TSCHUnretainedParent, NSCopying>

{

    id <TSCHNotifyOnModify> mObjectToNotify;

    TSCHChartInfo *mChartInfo;

    TSUIntToIntDictionary *mRemoteSeriesIndexForGridSeriesIndex;

    TSUIntToIntDictionary *mGridSeriesIndexForRemoteSeriesIndex;

}



+ (id)propertiesThatInvalidateMediator;

- (id)categoryLabelFormulas;

@property(nonatomic) TSCHChartInfo *chartInfo; // @synthesize chartInfo=mChartInfo;

- (void)clearParent;

- (id)commandSetCategoryName:(id)arg1 forCategoryIndex:(unsigned long long)arg2;

- (id)commandSetSeriesName:(id)arg1 forSeriesIndex:(unsigned long long)arg2;

- (id)commandToChangeCategoryLabelFormulas:(id)arg1;

- (id)commandToSetChartGridDirection:(int)arg1 documentRoot:(id)arg2;

- (id)commandToSetErrorBarCustomFormula:(id)arg1 seriesIndex:(unsigned long long)arg2 dataType:(int)arg3;

- (id)commandToSetSeriesDataFormula:(id)arg1 seriesDimension:(id)arg2;

- (id)commandToSetSeriesNameFormula:(id)arg1 seriesIndex:(unsigned long long)arg2;

- (id)copyWithContext:(id)arg1;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (void)dealloc;

@property(readonly, nonatomic) int direction;

- (id)errorBarCustomFormulaForSeriesIndex:(unsigned long long)arg1 dataType:(int)arg2;

- (id)init;

- (id)initWithChartInfo:(id)arg1;

- (void)invalidateAndSynchronizeMediator;

- (_Bool)isEditing;

@property(readonly, nonatomic) _Bool isPhantom;

- (void)loadFromArchive:(const struct ChartMediatorArchive *)arg1;

- (id)numberFormatForAxis:(id)arg1;

- (id)numberFormatForSeries:(id)arg1 index:(unsigned long long)arg2 axisType:(int)arg3;

@property(nonatomic) id <TSCHNotifyOnModify> objectToNotify; // @synthesize objectToNotify=mObjectToNotify;

- (id)p_errorBarDataForSeries:(unsigned long long)arg1 withSpec:(CDStruct_188655c5)arg2 updateType:(int)arg3;

- (unsigned long long)p_gridSeriesIndexForRemoteSeriesIndex:(unsigned long long)arg1;

- (unsigned long long)p_remoteSeriesIndexForGridSeriesIndex:(unsigned long long)arg1;

- (_Bool)preferSeriesToValues;

- (void)saveToArchive:(struct ChartMediatorArchive *)arg1;

- (id)seriesDataFormulaForSeriesDimension:(id)arg1;

- (id)seriesNameFormulaForSeriesIndex:(unsigned long long)arg1;

- (void)updateGridWithSpec:(CDStruct_188655c5)arg1;

- (void)willModify;



@end

