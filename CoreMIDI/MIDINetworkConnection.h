/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class MIDINetworkHost;



@interface MIDINetworkConnection : NSObject

{

    struct _MIDINetworkConnectionImpl *_impl;

}



+ (id)connectionWithHost:(id)arg1;

- (void)dealloc;

@property(readonly, nonatomic) MIDINetworkHost *host;

- (id)init;



@end


