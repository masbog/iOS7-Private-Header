/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSNetServiceDelegate.h"



@class MCPeerID, NSDictionary, NSMutableDictionary, NSNetService, NSObject<OS_dispatch_queue>, NSString;



@interface MCNearbyServiceAdvertiser : NSObject <NSNetServiceDelegate>

{

    _Bool _isAdvertising;

    _Bool _wasAdvertising;

    id <MCNearbyServiceAdvertiserDelegate> _delegate;

    MCPeerID *_myPeerID;

    NSDictionary *_discoveryInfo;

    NSString *_serviceType;

    NSString *_formattedServiceType;

    NSMutableDictionary *_peers;

    long long _outgoingInviteID;

    NSObject<OS_dispatch_queue> *_syncQueue;

    NSMutableDictionary *_invites;

    NSNetService *_networkServer;

}



- (void)applicationDidEnterBackgroundNotification:(id)arg1;

- (void)applicationWillEnterForegroundNotification:(id)arg1;

- (void)applicationWillTerminateNotification:(id)arg1;

- (void)dealloc;

@property(nonatomic) id <MCNearbyServiceAdvertiserDelegate> delegate; // @synthesize delegate=_delegate;

- (id)description;

@property(copy, nonatomic) NSDictionary *discoveryInfo; // @synthesize discoveryInfo=_discoveryInfo;

@property(copy, nonatomic) NSString *formattedServiceType; // @synthesize formattedServiceType=_formattedServiceType;

- (id)init;

- (id)initWithPeer:(id)arg1 discoveryInfo:(id)arg2 serviceType:(id)arg3;

- (void)insertTXTRecord;

@property(retain, nonatomic) NSMutableDictionary *invites; // @synthesize invites=_invites;

@property(nonatomic) _Bool isAdvertising; // @synthesize isAdvertising=_isAdvertising;

@property(readonly, nonatomic) MCPeerID *myPeerID; // @synthesize myPeerID=_myPeerID;

- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;

- (void)netService:(id)arg1 didNotPublish:(id)arg2;

- (void)netServiceDidPublish:(id)arg1;

- (void)netServiceDidStop:(id)arg1;

@property(retain, nonatomic) NSNetService *networkServer; // @synthesize networkServer=_networkServer;

@property(nonatomic) long long outgoingInviteID; // @synthesize outgoingInviteID=_outgoingInviteID;

- (void)parseIDString:(id *)arg1 displayName:(id *)arg2 fromIdentifier:(id)arg3;

@property(retain, nonatomic) NSMutableDictionary *peers; // @synthesize peers=_peers;

@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;

@property(nonatomic) _Bool wasAdvertising; // @synthesize wasAdvertising=_wasAdvertising;

- (void)startAdvertisingPeer;

- (void)stopAdvertisingPeer;

- (void)syncAttachConnection:(id)arg1 toPeer:(id)arg2;

- (void)syncCloseConnectionForPeer:(id)arg1;

- (void)syncHandleIncomingInputStream:(id)arg1 outputStream:(id)arg2;

- (void)syncHandleInvite:(id)arg1 fromPeer:(id)arg2;

- (void)syncHandleInviteConnect:(id)arg1 fromPeer:(id)arg2;

- (void)syncReceivedData:(id)arg1 fromPeer:(id)arg2;

- (void)syncSendData:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(id)arg3;

- (void)syncSendDictionary:(id)arg1 toPeer:(id)arg2 withCompletionHandler:(id)arg3;

- (void)syncStartAdvertisingPeer;

- (void)syncStopAdvertisingPeer;



@end


