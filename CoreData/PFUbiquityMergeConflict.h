/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSMergeConflict.h"


@class NSDictionary;



__attribute__((visibility("hidden")))

@interface PFUbiquityMergeConflict : NSMergeConflict

{

    NSDictionary *_ancestorSnapshot;

}



@property(retain) NSDictionary *ancestorSnapshot; // @synthesize ancestorSnapshot=_ancestorSnapshot;

- (void)dealloc;

- (id)initWithSource:(id)arg1 newVersion:(unsigned long long)arg2 oldVersion:(unsigned long long)arg3 cachedSnapshot:(id)arg4 persistedSnapshot:(id)arg5;



@end

