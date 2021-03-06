/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class EKEventStore, EKEventViewController, EKICSPreviewModel, UIViewController;



@interface EKICSPreviewController : NSObject

{

    EKICSPreviewModel *_model;

    EKEventStore *_eventStore;

    EKEventViewController *_currentImport;

    UIViewController *_contentViewController;

    _Bool _importing;

    _Bool _hasCustomCancelButton;

    long long _cancelButtonType;

    _Bool _allowsImport;

    _Bool _allowsEditing;

    _Bool _allowsSubitems;

    _Bool _allowsInvalidProperties;

    _Bool _allowsToDos;

    int _actionsState;

    id <EKICSPreviewControllerDelegate> _previewDelegate;

}



- (void).cxx_destruct;

- (void)_createCancelButtonWithType:(long long)arg1 target:(id)arg2 action:(SEL)arg3;

- (void)_databaseChanged:(id)arg1;

- (void)_updateCancelButton;

@property(nonatomic) int actionsState; // @synthesize actionsState=_actionsState;

@property(nonatomic) _Bool allowsEditing; // @synthesize allowsEditing=_allowsEditing;

@property(nonatomic) _Bool allowsImport; // @synthesize allowsImport=_allowsImport;

@property(nonatomic) _Bool allowsInvalidProperties; // @synthesize allowsInvalidProperties=_allowsInvalidProperties;

@property(nonatomic) _Bool allowsSubitems; // @synthesize allowsSubitems=_allowsSubitems;

@property(nonatomic) _Bool allowsToDos; // @synthesize allowsToDos=_allowsToDos;

- (void)calendarChooserDidCancel:(id)arg1;

- (void)calendarChooserDidFinish:(id)arg1;

- (void)dealloc;

- (id)detailViewForEvent:(id)arg1 eventInRealStore:(_Bool)arg2;

- (void)eventViewControllerDidRequestAddToCalendar:(id)arg1;

- (void)icsPreviewListController:(id)arg1 didSelectEvent:(id)arg2;

- (void)icsPreviewListControllerDidRequestImportAll:(id)arg1;

- (void)importAllIntoCalendar:(id)arg1;

- (void)importAllRequested:(id)arg1;

- (void)importEventFromController:(id)arg1 intoCalendar:(id)arg2;

- (id)initWithData:(id)arg1 eventStore:(id)arg2;

- (id)initWithData:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3;

- (id)initWithURL:(id)arg1 eventStore:(id)arg2;

- (id)initWithURL:(id)arg1 eventStore:(id)arg2 options:(unsigned long long)arg3;

@property(readonly, nonatomic) _Bool isImporting;

- (id)popoverContentController;

- (void)presentCalendarChooserForController:(id)arg1;

@property(nonatomic) __weak id <EKICSPreviewControllerDelegate> previewDelegate; // @synthesize previewDelegate=_previewDelegate;

- (void)removeCancelButton;

- (void)setCancelButtonWithTarget:(id)arg1 action:(SEL)arg2;

@property(readonly, nonatomic) unsigned long long totalEventCount;

@property(readonly, nonatomic) unsigned long long unimportedEventCount;

- (id)viewController;



@end


