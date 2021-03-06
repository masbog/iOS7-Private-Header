/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSEnumerator.h"



@class TPPageMaster;



__attribute__((visibility("hidden")))

@interface TPHeaderFooterFragmentEnumerator : NSEnumerator

{

    int _fragmentIndex;

    int _headerFooterType;

    TPPageMaster *_pageMaster;

}



- (void)dealloc;

@property(nonatomic) int fragmentIndex; // @synthesize fragmentIndex=_fragmentIndex;

@property(nonatomic) int headerFooterType; // @synthesize headerFooterType=_headerFooterType;

- (id)initWithPageMaster:(id)arg1;

- (id)nextObject;

@property(retain, nonatomic) TPPageMaster *pageMaster; // @synthesize pageMaster=_pageMaster;



@end


