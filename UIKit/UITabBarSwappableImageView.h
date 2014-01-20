/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIImageView.h"


@class UITabBar;



__attribute__((visibility("hidden")))

@interface UITabBarSwappableImageView : UIImageView

{

    id _value;

    id _alternate;

    double _scale;

    _Bool _showAlternate;

    _Bool _flipped;

    int _currentAnimation;

    UITabBar *_tabBar;

    int _buttonTag;

}



- (void)animateImage:(float)arg1 withTabBar:(id)arg2 withTag:(int)arg3;

- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;

- (void)dealloc;

- (id)initWithImage:(id)arg1 alternateImage:(id)arg2;

- (void)setAlternateImage:(id)arg1;

- (void)setCurrentImage;

- (void)setImage:(id)arg1;

- (void)showAlternateImage:(_Bool)arg1;



@end

