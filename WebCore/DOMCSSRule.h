/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DOMObject.h"


@class DOMCSSStyleSheet, NSString;



__attribute__((visibility("hidden")))

@interface DOMCSSRule : DOMObject

{

}



@property(copy) NSString *cssText;

- (void)dealloc;

- (void)finalize;

@property(readonly) DOMCSSRule *parentRule;

@property(readonly) DOMCSSStyleSheet *parentStyleSheet;

@property(readonly) unsigned short type;



@end


