/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class EADiscoveredWirelessAccessoryInternal, NSString;



@interface EADiscoveredWirelessAccessory : NSObject

{

    EADiscoveredWirelessAccessoryInternal *_internal;

}



- (id)_initWithWirelessAccessory:(id)arg1;

- (id)_shortDescription;

- (void)dealloc;

@property(nonatomic) id <EADiscoveredWirelessAccessoryDelegate> delegate;

- (id)description;

- (id)init;

@property(readonly, nonatomic, getter=isConnected) _Bool connected;

@property(readonly, nonatomic) NSString *name;



@end


