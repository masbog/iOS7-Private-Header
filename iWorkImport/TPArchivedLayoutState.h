/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


#import "TPArchivedLayoutStateProtocol.h"



@class NSArray;



__attribute__((visibility("hidden")))

@interface TPArchivedLayoutState : TSPObject <TPArchivedLayoutStateProtocol>

{

    unsigned long long _sectionIndex;

    unsigned long long _sectionPageIndex;

    unsigned long long _documentPageIndex;

    unsigned long long _lastPageCount;

    NSArray *_sectionHints;

}



- (void)captureLayoutStateWithProvider:(id)arg1;

- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (void)p_reset;

- (void)readLayoutStateWithConsumer:(id)arg1;

- (void)saveToArchiver:(id)arg1;



@end

