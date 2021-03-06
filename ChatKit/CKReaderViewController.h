/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "UIViewController.h"



#import "UIWebViewDelegate.h"



@class NSAttributedString, NSString, UITextView;



@interface CKReaderViewController : UIViewController <UIWebViewDelegate>

{

    id <CKReaderViewControllerDelegate> _delegate;

    NSString *_messageGUID;

    UITextView *_textView;

}



- (_Bool)ckCanDismissWhenSuspending;

- (void)contentSizeCategoryDidChange:(id)arg1;

- (void)dealloc;

@property(nonatomic) id <CKReaderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;

- (id)init;

- (void)loadView;

@property(copy, nonatomic) NSString *messageGUID; // @synthesize messageGUID=_messageGUID;

@property(copy, nonatomic) NSAttributedString *text; // @dynamic text;

@property(retain, nonatomic) UITextView *textView; // @synthesize textView=_textView;

@property(nonatomic) struct _NSRange visibleRange; // @dynamic visibleRange;

- (_Bool)shouldAutorotate;

- (unsigned long long)supportedInterfaceOrientations;

- (void)viewWillDisappear:(_Bool)arg1;



@end


