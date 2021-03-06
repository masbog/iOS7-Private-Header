/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



__attribute__((visibility("hidden")))

@interface SBKAlertDialog : NSObject

{

    NSString *_title;

    NSString *_message;

    NSString *_cancelButtonTitle;

    id _completionHandler;

    NSString *_acceptButtonTitle;

}



- (void).cxx_destruct;

- (void)_runAsCFUserNotificationDisplayAlert;

- (_Bool)_runAsUIAlertView;

@property(copy) NSString *acceptButtonTitle; // @synthesize acceptButtonTitle=_acceptButtonTitle;

- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;

@property(copy) NSString *cancelButtonTitle; // @synthesize cancelButtonTitle=_cancelButtonTitle;

@property(copy) id completionHandler; // @synthesize completionHandler=_completionHandler;

- (id)initWithTitle:(id)arg1 message:(id)arg2 cancelButtonTitle:(id)arg3 acceptButtonTitle:(id)arg4;

@property(copy) NSString *message; // @synthesize message=_message;

@property(copy) NSString *title; // @synthesize title=_title;

- (void)showWithCompletionHandler:(id)arg1;



@end


