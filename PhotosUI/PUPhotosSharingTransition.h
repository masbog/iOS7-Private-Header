/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PUModalTransition.h"


@class PUPhotosSharingTransitionContext, UICollectionViewLayout, UIViewController<PUPhotosSharingTransitionViewController>;



@interface PUPhotosSharingTransition : PUModalTransition

{

    UIViewController<PUPhotosSharingTransitionViewController> *_sharingTransitionViewController;

    PUPhotosSharingTransitionContext *_photosSharingTransitionContext;

    id <PUPhotosSharingTransitionDelegate> _delegate;

    UICollectionViewLayout *__transitionLayout;

}



- (void).cxx_destruct;

@property(retain, nonatomic, setter=_setTransitionLayout:) UICollectionViewLayout *_transitionLayout; // @synthesize _transitionLayout=__transitionLayout;

- (void)animateDismissTransition;

- (void)animatePresentTransition;

@property(nonatomic) __weak id <PUPhotosSharingTransitionDelegate> delegate; // @synthesize delegate=_delegate;

@property(retain, nonatomic) PUPhotosSharingTransitionContext *photosSharingTransitionContext; // @synthesize photosSharingTransitionContext=_photosSharingTransitionContext;

@property(retain, nonatomic) UIViewController<PUPhotosSharingTransitionViewController> *sharingTransitionViewController; // @synthesize sharingTransitionViewController=_sharingTransitionViewController;



@end


