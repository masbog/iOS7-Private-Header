/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "UIPopoverControllerDelegate.h"



@class UIPopoverController;



@interface SKUIPopoverObserver : NSObject <UIPopoverControllerDelegate>

{

    UIPopoverController *_popoverController;

    SEL _selector;

    id _target;

}



- (void).cxx_destruct;

- (void)dealloc;

- (void)dismissPopoverAnimated:(_Bool)arg1;

- (id)initWithPopoverController:(id)arg1;

- (void)popoverControllerDidDismissPopover:(id)arg1;

- (void)setTarget:(id)arg1 selector:(SEL)arg2;



@end

