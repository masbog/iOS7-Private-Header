/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray;



@interface ICDeviceBrowserPrivateData : NSObject

{

    id _delegate;

    _Bool _browsing;

    NSMutableArray *_internalDevices;

}



- (void)dealloc;

@property id delegate; // @synthesize delegate=_delegate;

- (void)finalize;

@property(retain) NSMutableArray *internalDevices; // @synthesize internalDevices=_internalDevices;

@property(getter=isBrowsing) _Bool browsing; // @synthesize browsing=_browsing;



@end

