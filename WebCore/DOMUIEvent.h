/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "DOMEvent.h"


@class DOMAbstractView;



@interface DOMUIEvent : DOMEvent

{

}



@property(readonly) int charCode;

@property(readonly) int detail;

- (void)initUIEvent:(id)arg1:(_Bool)arg2:(_Bool)arg3:(id)arg4:(int)arg5;

- (void)initUIEvent:(id)arg1 canBubble:(_Bool)arg2 cancelable:(_Bool)arg3 view:(id)arg4 detail:(int)arg5;

@property(readonly) int keyCode;

@property(readonly) int layerX;

@property(readonly) int layerY;

@property(readonly) int pageX;

@property(readonly) int pageY;

@property(readonly) DOMAbstractView *view;

@property(readonly) int which;



@end


