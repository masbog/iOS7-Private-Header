/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CALayer.h"


@class NSString;



@interface CAScrollLayer : CALayer

{

}



+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;

+ (id)defaultValueForKey:(id)arg1;

- (void)_scrollPoint:(struct CGPoint)arg1 fromLayer:(id)arg2;

- (void)_scrollRect:(struct CGRect)arg1 fromLayer:(id)arg2;

- (struct CGRect)_visibleRectOfLayer:(id)arg1;

@property(copy) NSString *scrollMode;

- (void)scrollToPoint:(struct CGPoint)arg1;

- (void)scrollToRect:(struct CGRect)arg1;



@end


