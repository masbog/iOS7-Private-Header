/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "EKEditItemViewController.h"


#import "EKCalendarChooserDelegate.h"



@class EKCalendar, EKCalendarChooser, EKEventStore;



__attribute__((visibility("hidden")))

@interface EKCalendarEditItemViewController : EKEditItemViewController <EKCalendarChooserDelegate>

{

    EKEventStore *_store;

    EKCalendarChooser *_chooser;

    EKCalendar *_selectedCalendar;

    unsigned long long _entityType;

    _Bool _limitToSource;

}



- (void).cxx_destruct;

- (void)calendarChooserSelectionDidChange:(id)arg1;

- (id)initWithFrame:(struct CGRect)arg1 store:(id)arg2;

- (id)initWithFrame:(struct CGRect)arg1 store:(id)arg2 styleProvider:(id)arg3;

- (id)initWithFrame:(struct CGRect)arg1 store:(id)arg2 styleProvider:(id)arg3 entityType:(unsigned long long)arg4;

@property(nonatomic) _Bool limitToSource; // @synthesize limitToSource=_limitToSource;

- (void)loadView;

- (struct CGSize)preferredContentSize;

@property(retain, nonatomic) EKCalendar *selectedCalendar;



@end


