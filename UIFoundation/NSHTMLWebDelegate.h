/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSURL;



__attribute__((visibility("hidden")))

@interface NSHTMLWebDelegate : NSObject

{

    _Bool _loadDidFinish;

    _Bool _loadDidSucceed;

    NSURL *_baseURL;

}



- (void)dealloc;

- (void)decidePolicyForRequest:(id)arg1 decisionListener:(id)arg2;

- (id)init;

- (id)initWithBaseURL:(id)arg1;

- (_Bool)loadDidFinish;

- (_Bool)loadDidSucceed;

- (void)webView:(id)arg1 decidePolicyForMIMEType:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;

- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 request:(id)arg3 frame:(id)arg4 decisionListener:(id)arg5;

- (void)webView:(id)arg1 decidePolicyForNewWindowAction:(id)arg2 request:(id)arg3 newFrameName:(id)arg4 decisionListener:(id)arg5;

- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;

- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;

- (void)webView:(id)arg1 didFailProvisionalLoadWithError:(id)arg2 forFrame:(id)arg3;

- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;

- (void)webView:(id)arg1 didStartProvisionalLoadForFrame:(id)arg2;

- (id)webView:(id)arg1 identifierForInitialRequest:(id)arg2 fromDataSource:(id)arg3;

- (void)webView:(id)arg1 resource:(id)arg2 didFailLoadingWithError:(id)arg3 fromDataSource:(id)arg4;

- (void)webView:(id)arg1 resource:(id)arg2 didFinishLoadingFromDataSource:(id)arg3;

- (void)webView:(id)arg1 resource:(id)arg2 didReceiveAuthenticationChallenge:(id)arg3 fromDataSource:(id)arg4;

- (id)webView:(id)arg1 resource:(id)arg2 willSendRequest:(id)arg3 redirectResponse:(id)arg4 fromDataSource:(id)arg5;



@end


