/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "WebBookmarksXPCConnectionDelegate.h"



@class WebBookmarksXPCConnection;



@interface WebBookmarksSettingsGateway : NSObject <WebBookmarksXPCConnectionDelegate>

{

    WebBookmarksXPCConnection *_connection;

}



- (void)_clearConnection;

- (void)connection:(id)arg1 didCloseWithError:(id)arg2;

- (void)dealloc;

- (void)deleteAllSafariSecurityOrigins;

- (void)deleteSafariPersistentURLCacheStorage;

- (void)deleteSafariSecurityOrigin:(id)arg1;

- (void)getCellularReadingListAllowedWithCompletion:(id)arg1;

- (id)getSafariDataUsageSummary;

- (void)getSafariWebDataUsageWithCompletion:(id)arg1;

- (id)init;

- (void)setCellularReadingListAllowed:(_Bool)arg1;



@end


