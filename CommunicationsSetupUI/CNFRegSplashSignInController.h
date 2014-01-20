/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "CNFRegSignInController.h"


@class CNFRegSigninLearnMoreView;



@interface CNFRegSplashSignInController : CNFRegSignInController

{

    CNFRegSigninLearnMoreView *_signInView;

}



- (id)_existingLearnMoreViewForSection:(long long)arg1;

- (id)_existingLearnMoreViewForSpecifier:(id)arg1;

- (void)_setFieldsEnabled:(_Bool)arg1 animated:(_Bool)arg2;

- (void)_updateDescriptionText;

- (_Bool)passwordIsEmpty;

- (id)passwordTextField;

- (void)setPasswordText:(id)arg1;

- (void)setUsernameText:(id)arg1;

- (id)specifierList;

- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;

- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;

- (_Bool)usernameIsEmpty;

- (id)usernameTextField;

- (void)viewDidLoad;

- (void)viewWillAppear:(_Bool)arg1;



@end

