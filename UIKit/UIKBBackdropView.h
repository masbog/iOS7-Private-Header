/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "_UIBackdropView.h"


@class NSMutableArray, UIKeyboardBackdropCornerView;



__attribute__((visibility("hidden")))

@interface UIKBBackdropView : _UIBackdropView

{

    _Bool _primaryBackdrop;

    NSMutableArray *_secondaryBackdrops;

    UIKeyboardBackdropCornerView *_backdropCornerView;

    _Bool _hasUpdatedFrame;

}



@property(readonly, nonatomic) _Bool _hasUpdatedFrame; // @synthesize _hasUpdatedFrame;

- (void)addSecondaryBackdropView:(id)arg1;

- (void)applySettings:(id)arg1;

- (void)dealloc;

- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 primaryBackdrop:(_Bool)arg3;

- (int)textEffectsVisibilityLevel;

- (void)transitionToStyle:(long long)arg1;

- (void)triggerUpdate:(id)arg1;

- (void)updateFrame:(struct CGRect)arg1 withCorners:(int)arg2;



@end

