/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "PSViewController.h"



#import "CNFRegFirstRunExperience.h"



@class CNFRegController, UIBarButtonItem, UIButton;



@interface CNFRegSplashScreenController : PSViewController <CNFRegFirstRunExperience>

{

    UIButton *_learnMoreButton;

    id <CNFRegFirstRunDelegate> _delegate;

    CNFRegController *_regController;

}



- (void)_getStartedPressed:(id)arg1;

- (void)_learnMorePressed:(id)arg1;

@property(readonly, nonatomic) long long currentAppearanceStyle; // @dynamic currentAppearanceStyle;

@property(retain, nonatomic) UIBarButtonItem *customLeftButton; // @dynamic customLeftButton;

@property(retain, nonatomic) UIBarButtonItem *customRightButton; // @dynamic customRightButton;

- (void)dealloc;

@property(nonatomic) id <CNFRegFirstRunDelegate> delegate; // @synthesize delegate=_delegate;

- (id)init;

- (id)initWithRegController:(id)arg1 account:(id)arg2;

- (void)loadView;

@property(retain, nonatomic) CNFRegController *regController; // @synthesize regController=_regController;

- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;

- (id)userInteractionColor;

- (void)viewWillAppear:(_Bool)arg1;

- (void)willBecomeActive;



@end

