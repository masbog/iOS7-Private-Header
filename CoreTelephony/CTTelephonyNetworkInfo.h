/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class CTCarrier, NSDictionary, NSLock, NSString;



@interface CTTelephonyNetworkInfo : NSObject

{

    struct queue _queue;

    struct __CTServerConnection *server_connection;

    NSLock *server_lock;

    id _subscriberCellularProviderDidUpdateNotifier;

    _Bool _monitoringCellId;

    CTCarrier *_subscriberCellularProvider;

    NSString *_cachedCurrentRadioAccessTechnology;

    NSDictionary *_cachedSignalStrength;

    NSString *_cachedCellId;

}



- (id).cxx_construct;

- (void).cxx_destruct;

@property(retain) NSString *cachedCellId; // @synthesize cachedCellId=_cachedCellId;

@property(retain) NSString *cachedCurrentRadioAccessTechnology; // @synthesize cachedCurrentRadioAccessTechnology=_cachedCurrentRadioAccessTechnology;

@property(retain) NSDictionary *cachedSignalStrength; // @synthesize cachedSignalStrength=_cachedSignalStrength;

@property(retain, nonatomic) NSString *cellId;

- (void)cleanUpServerConnection;

- (id)createSignalStrengthDictWithBars:(id)arg1;

@property(readonly, nonatomic) NSString *currentRadioAccessTechnology;

- (void)dealloc;

- (_Bool)getAllowsVOIP:(_Bool *)arg1 withCTError:(CDStruct_1ef3fb1f *)arg2;

- (_Bool)getCarrierName:(id)arg1 withCTError:(CDStruct_1ef3fb1f *)arg2;

- (_Bool)getMobileCountryCode:(id)arg1 andIsoCountryCode:(id)arg2 withCTError:(CDStruct_1ef3fb1f *)arg3;

- (_Bool)getMobileNetworkCode:(id)arg1 withCTError:(CDStruct_1ef3fb1f *)arg2;

- (void)handleCTRegistrationCellChangedNotification:(id)arg1;

- (void)handleCTSignalStrengthNotification:(id)arg1;

- (void)handleNotificationFromConnection:(void *)arg1 ofType:(id)arg2 withInfo:(id)arg3;

- (id)init;

@property _Bool monitoringCellId; // @synthesize monitoringCellId=_monitoringCellId;

- (void)postCellularProviderUpdatesIfNecessary;

- (void)queryCTSignalStrengthNotification;

- (void)queryCellId;

- (void)queryDataMode;

- (id)radioAccessTechnology;

@property(retain) CTCarrier *subscriberCellularProvider; // @synthesize subscriberCellularProvider=_subscriberCellularProvider;

@property(copy, nonatomic) id subscriberCellularProviderDidUpdateNotifier;

- (_Bool)setUpServerConnection;

- (id)signalStrength;

- (_Bool)updateNetworkInfoAndShouldNotifyClient:(_Bool *)arg1;

- (void)updateRadioAccessTechnology:(id)arg1;

- (void)updateSignalStrength:(id)arg1;



@end


