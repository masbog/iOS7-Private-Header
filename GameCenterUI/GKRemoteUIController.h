/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "GKRemoteUIAuxiliaryViewDelegate.h"

#import "RUILoaderDelegate.h"

#import "RUIObjectModelDelegate.h"



@class NSArray, NSData, NSError, NSMutableArray, NSString, NSURL, RUILoader, UINavigationController;



@interface GKRemoteUIController : NSObject <RUILoaderDelegate, RUIObjectModelDelegate, GKRemoteUIAuxiliaryViewDelegate>

{

    _Bool _loading;

    _Bool _shouldApplyGameCenterTheme;

    _Bool _accountChanged;

    _Bool _previousUseCustomBackButtonActionValue;

    _Bool _loadingInitialUI;

    _Bool _complete;

    int _layoutStyle;

    id _completionHandler;

    NSError *_error;

    NSString *_authToken;

    NSData *_pushToken;

    NSString *_appleID;

    NSString *_playerID;

    NSString *_firstName;

    NSString *_lastName;

    NSString *_alias;

    NSMutableArray *_objectModels;

    UINavigationController *_navigationController;

    NSArray *_staticViewControllers;

    RUILoader *_loader;

    GKRemoteUIController *_presentedRemoteUIController;

    NSURL *_url;

    id _loadHandler;

}



+ (id)remoteUIController;

@property(nonatomic) _Bool accountChanged; // @synthesize accountChanged=_accountChanged;

- (id)addThemeInfoToAttributes:(id)arg1;

@property(retain, nonatomic) NSString *alias; // @synthesize alias=_alias;

@property(retain, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;

@property(retain, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;

- (void)auxiliaryView:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;

- (void)auxiliaryView:(id)arg1 pressedLink:(id)arg2 attributes:(id)arg3;

@property(readonly, nonatomic) NSString *bagKey;

@property(nonatomic) _Bool complete; // @synthesize complete=_complete;

@property(copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;

- (void)configureFromBagKey:(id)arg1 withCompletionHandler:(id)arg2;

- (void)dealloc;

- (void)didLoadURL:(id)arg1 data:(id)arg2 error:(id)arg3;

@property(retain, nonatomic) NSError *error; // @synthesize error=_error;

@property(readonly, nonatomic) NSURL *fallbackURL;

- (void)finishLoadingWithError:(id)arg1;

- (void)fireCompletionHandler;

@property(retain, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;

- (long long)indexOfVisiblePage;

- (id)init;

- (id)initWithObjectModel:(id)arg1;

@property(nonatomic, getter=isUserInteractionEnabled) _Bool userInteractionEnabled;

@property(retain, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;

@property(nonatomic) int layoutStyle; // @synthesize layoutStyle=_layoutStyle;

@property(copy, nonatomic) id loadHandler; // @synthesize loadHandler=_loadHandler;

- (void)loadInitialRemoteUIWithHandler:(id)arg1;

- (void)loadURL:(id)arg1 postBody:(id)arg2;

- (void)loadURL:(id)arg1 postData:(id)arg2;

@property(retain, nonatomic) RUILoader *loader; // @synthesize loader=_loader;

- (void)loader:(id)arg1 didFailWithError:(id)arg2;

- (void)loader:(id)arg1 receivedObjectModel:(id)arg2 actionSignal:(int)arg3;

@property(nonatomic) _Bool loading; // @synthesize loading=_loading;

@property(nonatomic) _Bool loadingInitialUI; // @synthesize loadingInitialUI=_loadingInitialUI;

@property(nonatomic) UINavigationController *navigationController; // @synthesize navigationController=_navigationController;

- (void)objectModel:(id)arg1 configureTableRow:(id)arg2 page:(id)arg3;

- (void)objectModel:(id)arg1 configureTableSection:(id)arg2 page:(id)arg3;

- (void)objectModel:(id)arg1 configureTableView:(id)arg2 page:(id)arg3;

- (Class)objectModel:(id)arg1 customFooterClassForSection:(id)arg2;

- (Class)objectModel:(id)arg1 customHeaderClassForSection:(id)arg2;

- (void)objectModel:(id)arg1 page:(id)arg2 toggledEditing:(_Bool)arg3;

- (void)objectModel:(id)arg1 pressedButton:(id)arg2 attributes:(id)arg3;

- (void)objectModel:(id)arg1 pressedLink:(id)arg2 httpMethod:(id)arg3;

- (_Bool)objectModel:(id)arg1 shouldShowModalHTMLViewWithURL:(id)arg2;

- (id)objectModel:(id)arg1 tableFooterViewForAttributes:(id)arg2 page:(id)arg3;

- (id)objectModel:(id)arg1 tableHeaderViewForAttributes:(id)arg2 page:(id)arg3;

- (void)objectModelDidChange:(id)arg1;

- (void)objectModelPressedBack:(id)arg1;

@property(retain, nonatomic) NSMutableArray *objectModels; // @synthesize objectModels=_objectModels;

- (id)parentViewControllerForObjectModel:(id)arg1;

- (void)performAction:(int)arg1 withObjectModel:(id)arg2;

@property(retain, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;

- (void)popObjectModelAnimated:(_Bool)arg1;

- (id)postBodyForInitialLoad;

- (id)postbackDataForDictionary:(id)arg1;

- (int)preferredLayoutStyle;

- (void)presentInParentNavigationController:(id)arg1 animated:(_Bool)arg2;

- (void)presentObjectModel:(id)arg1 animated:(_Bool)arg2;

@property(retain, nonatomic) GKRemoteUIController *presentedRemoteUIController; // @synthesize presentedRemoteUIController=_presentedRemoteUIController;

@property(nonatomic) _Bool previousUseCustomBackButtonActionValue; // @synthesize previousUseCustomBackButtonActionValue=_previousUseCustomBackButtonActionValue;

- (void)pushObjectModel:(id)arg1 animated:(_Bool)arg2;

@property(retain, nonatomic) NSData *pushToken; // @synthesize pushToken=_pushToken;

- (void)replaceObjectModelAtIndex:(unsigned long long)arg1 withObjectObjectModel:(id)arg2;

@property(nonatomic) _Bool shouldApplyGameCenterTheme; // @synthesize shouldApplyGameCenterTheme=_shouldApplyGameCenterTheme;

@property(retain, nonatomic) NSArray *staticViewControllers; // @synthesize staticViewControllers=_staticViewControllers;

@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;

- (void)takeValuesFromClientInfo:(id)arg1 withCompletionHandler:(id)arg2;

- (void)updateAccountAndMarkComplete:(_Bool)arg1 completionHandler:(id)arg2;

- (void)updatePostbackDictionary:(id)arg1 withHandler:(id)arg2;

- (id)viewControllers;



@end


