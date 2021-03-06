/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIKeyboardCandidateToggleButton.h"


@class UIImage, UIView;



__attribute__((visibility("hidden")))

@interface UIKeyboardCandidateUnsplitKeyboardToggleButton : UIKeyboardCandidateToggleButton

{

    UIView *_pocketShadow;

    UIImage *_backgroundNormal;

    UIImage *_backgroundHighlighted;

    _Bool _drawsBackground;

    _Bool _drawsPocketShadow;

}



- (void)dealloc;

@property(nonatomic) _Bool drawsBackground; // @synthesize drawsBackground=_drawsBackground;

@property(nonatomic) _Bool drawsPocketShadow; // @synthesize drawsPocketShadow=_drawsPocketShadow;

- (id)initWithFrame:(struct CGRect)arg1;

- (void)setFrame:(struct CGRect)arg1;

- (void)setHighlighted:(_Bool)arg1;

- (void)setSelected:(_Bool)arg1;

- (id)toggleButtonBackgroundImageWithHighlight:(_Bool)arg1;

- (void)updateBackgroundImages;



@end


