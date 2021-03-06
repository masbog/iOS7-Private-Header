/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "SLComposeServiceViewController.h"



#import "PUCloudSharedCreateAlbumViewControllerDelegate.h"

#import "PUPhotoStreamCreateTitleDelegate.h"

#import "PUPhotoStreamsAlbumsTableViewControllerDelegate.h"

#import "SLSheetViewHostProtocol.h"



@class NSArray, NSOrderedSet, NSString;



@interface PUPhotoStreamComposeServiceViewController : SLComposeServiceViewController <PUPhotoStreamsAlbumsTableViewControllerDelegate, PUPhotoStreamCreateTitleDelegate, PUCloudSharedCreateAlbumViewControllerDelegate, SLSheetViewHostProtocol>

{

    struct {

        unsigned int hasDidPost:1;

        unsigned int hasDidCancel:1;

    } _delegateFlags;

    struct NSObject *_selectedAlbum;

    NSArray *_actions;

    struct NSObject *_albumList;

    _Bool _inCreateNewAlbum;

    NSArray *_recipients;

    _Bool _shouldShowPost;

    NSString *_itemCountString;

    _Bool _shouldAllowAlbumPicking;

    _Bool _addToExistingWorkflow;

    id <PUPhotoStreamComposeServiceDelegate> _delegate;

    NSOrderedSet *_assetsToShare;

    id _completion;

    NSString *_albumTitle;

}



- (void).cxx_destruct;

- (void)_pushTitleController;

@property(nonatomic) _Bool addToExistingWorkflow; // @synthesize addToExistingWorkflow=_addToExistingWorkflow;

- (id)albumListAction;

- (void)albumStreamingCreateViewController:(id)arg1 didSucceed:(_Bool)arg2;

@property(retain, nonatomic) NSString *albumTitle; // @synthesize albumTitle=_albumTitle;

@property(retain, nonatomic) NSOrderedSet *assetsToShare; // @synthesize assetsToShare=_assetsToShare;

- (void)cancel;

@property(copy, nonatomic) id completion; // @synthesize completion=_completion;

- (void)controller:(id)arg1 didSelectAlbum:(struct NSObject *)arg2;

- (void)controllerWillCreateNewAlbum:(id)arg1;

- (void)createPreviewIfNeeded;

@property(nonatomic) __weak id <PUPhotoStreamComposeServiceDelegate> delegate; // @synthesize delegate=_delegate;

- (void)failWithError:(id)arg1;

- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

- (void)send;

- (id)serviceIconImage;

@property(nonatomic) _Bool shouldAllowAlbumPicking; // @synthesize shouldAllowAlbumPicking=_shouldAllowAlbumPicking;

- (id)sheetActions;

- (void)sheetDidSendWithSucess:(id)arg1 error:(id)arg2;

- (void)sheetFailedWithError:(id)arg1;

- (void)shouldShowNetworkActivityIndicator:(id)arg1;

- (id)title;

- (void)titleController:(id)arg1 didSetTitle:(id)arg2;

- (void)titleControllerDidCancel:(id)arg1;

- (void)userDidCancel;

- (void)userDidCancelWithoutAnimation;

- (void)userDidPost;

- (void)viewDidLoad;



@end


