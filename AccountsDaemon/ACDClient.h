/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class ACDDatabase, ACDTelemetryWatchdog, NSMutableDictionary, NSNumber, NSString, NSXPCConnection;



@interface ACDClient : NSObject

{

    NSXPCConnection *_connection;

    ACDDatabase *_database;

    struct __CFBundle *_bundle;

    NSString *_bundleID;

    _Bool _didManuallySetBundleID;

    NSNumber *_pid;

    NSString *_localizedAppName;

    NSString *_name;

    NSMutableDictionary *_entitlementChecks;

    ACDTelemetryWatchdog *_telemetry;

}



+ (id)bundleForPID:(int)arg1;

+ (id)clientWithBundleID:(id)arg1;

- (void).cxx_destruct;

- (id)_displayNameFromBundleInfoDictionaryForPID:(int)arg1;

- (id)_displayNameFromSpringBoardForPID:(int)arg1;

@property(readonly, nonatomic) NSString *adamOrDisplayID;

@property(readonly, nonatomic) struct __CFBundle *bundle;

@property(retain, nonatomic) NSString *bundleID;

@property(readonly, nonatomic) NSXPCConnection *connection; // @synthesize connection=_connection;

@property(readonly, nonatomic) ACDDatabase *database; // @synthesize database=_database;

- (void)dealloc;

- (id)debugDescription;

- (id)description;

- (_Bool)hasEntitlement:(id)arg1;

- (id)initWithConnection:(id)arg1;

- (id)initWithConnection:(id)arg1 database:(id)arg2;

@property(readonly, nonatomic) NSString *localizedAppName;

@property(readonly, nonatomic) NSString *name;

@property(readonly, nonatomic) NSNumber *pid;

@property(retain, nonatomic) ACDTelemetryWatchdog *telemetry; // @synthesize telemetry=_telemetry;



@end

