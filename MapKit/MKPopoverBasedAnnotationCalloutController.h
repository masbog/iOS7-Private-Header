/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MKAnnotationCalloutController.h"


#import "UIPopoverControllerDelegate.h"

#import "UIPopoverControllerDelegatePrivate.h"

#import "_MKPopoverEmbeddingViewWindowDelegate.h"

#import "_UIPopoverControllerMapsTransitionDelegate.h"



@class MKSmallCalloutViewController, UIPopoverController, UIView, _MKPopoverEmbeddingView;



__attribute__((visibility("hidden")))

@interface MKPopoverBasedAnnotationCalloutController : MKAnnotationCalloutController <_MKPopoverEmbeddingViewWindowDelegate, _UIPopoverControllerMapsTransitionDelegate, UIPopoverControllerDelegate, UIPopoverControllerDelegatePrivate>

{

    UIPopoverController *_popoverController;

    MKSmallCalloutViewController *_calloutViewController;

    id _afterMoveToWindowBlock;

    UIView *_layoutConstraintsView;

    _MKPopoverEmbeddingView *_embeddingView;

    _Bool _isHidingForImplementationReasons;

    _Bool _allowsPopoverWhenNotInWindow;

    _Bool _animatingIn;

    _Bool _isShowingPopover;

    _Bool _isCalloutExpanded;

}



- (_Bool)_isShowingCallout;

- (void)_popoverControllerDidFinishMapsTransitionExpanding:(id)arg1;

- (void)_popoverControllerWillBeginMapsTransitionMovingSideways:(id)arg1;

- (void)_setDetailAccessoryView:(id)arg1 animated:(_Bool)arg2;

- (void)_setLeftAccessoryView:(id)arg1 animated:(_Bool)arg2;

- (void)_setRightAccessoryView:(id)arg1 animated:(_Bool)arg2;

- (void)_setSubtitle:(id)arg1 animated:(_Bool)arg2;

- (void)_setTitle:(id)arg1;

- (void)_showCalloutAnimated:(_Bool)arg1 scrollToFit:(_Bool)arg2 avoid:(struct CGRect)arg3;

- (void)_snapLayoutConstraintsViewToContainerBounds;

- (id)_subtitle;

- (void)_updateCalloutAnimated:(_Bool)arg1;

- (void)_updatePopoverContentSize:(_Bool)arg1;

@property(nonatomic) _Bool allowsPopoverWhenNotInWindow; // @synthesize allowsPopoverWhenNotInWindow=_allowsPopoverWhenNotInWindow;

- (_Bool)calloutContainsPoint:(struct CGPoint)arg1;

- (void)dealloc;

- (void)embeddingView:(id)arg1 didMoveToWindow:(id)arg2;

- (void)embeddingView:(id)arg1 willMoveToWindow:(id)arg2;

- (void)hideCalloutAnimated:(_Bool)arg1;

- (_Bool)isCalloutExpanded;

@property(readonly, nonatomic) UIPopoverController *popoverController; // @synthesize popoverController=_popoverController;

- (void)popoverController:(id)arg1 animationCompleted:(long long)arg2;

- (void)setMapDisplayStyle:(long long)arg1;

- (void)showCalloutForAnnotationView:(id)arg1 animated:(_Bool)arg2 scrollToFit:(_Bool)arg3 avoid:(struct CGRect)arg4;



@end

