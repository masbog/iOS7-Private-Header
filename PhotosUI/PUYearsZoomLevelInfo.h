/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PUGridZoomLevelInfo.h"


#import "PUSectionedGridLayoutDelegate.h"



@class NSArray;



@interface PUYearsZoomLevelInfo : PUGridZoomLevelInfo <PUSectionedGridLayoutDelegate>

{

    NSArray *_allYearLists;

}



- (void).cxx_destruct;

- (id)_yearMomentLists;

- (struct __CFString *)aggregateLevelKey;

- (id)assetsToDisplayInMapForVisualSection:(long long)arg1;

- (void)configureSectionHeaderView:(id)arg1 forVisualSection:(long long)arg2;

- (id)diagnosticsProviderForVisualSection:(long long)arg1;

- (id)displayTitle;

- (_Bool)hasEnoughContentToDisplay;

- (int)imageFormat;

- (long long)maxRowsPerSection;

- (void)modelDidChange;

- (id)newCollectionViewLayout;

- (long long)numberOfVisualSectionsForSectionedGridLayout:(id)arg1;

- (id)renderedStripsElementKind;

- (id)sectionHeaderElementKind;

- (id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(long long)arg2;

- (_Bool)supportsIncrementalChangeNotifications;

- (void)updateLayoutMetricsForWidth:(double)arg1;

- (void)willShowMagnifiedViewController:(id)arg1;



@end

