/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSLock, NSString, WebScriptObject;



@interface SUScriptEventListener : NSObject

{

    WebScriptObject *_callback;

    NSLock *_lock;

    NSString *_name;

    _Bool _useCapture;

}



@property(retain) WebScriptObject *callback; // @synthesize callback=_callback;

- (void)dealloc;

- (id)init;

@property(copy) NSString *name; // @synthesize name=_name;

@property _Bool shouldUseCapture; // @synthesize shouldUseCapture=_useCapture;



@end


