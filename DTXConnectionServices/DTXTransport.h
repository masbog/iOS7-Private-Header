/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class DTXResourceTracker, NSArray;



@interface DTXTransport : NSObject

{

    struct dispatch_queue_s *_serializer;

    struct dispatch_queue_s *_handlerGuard;

    DTXResourceTracker *_tracker;

    id _dataReceivedHandler;

    int _status;

    struct dispatch_semaphore_s *_waitForResume;

    _Bool _resumed;

}



+ (_Bool)recognizesURL:(id)arg1;

+ (id)schemes;

- (_Bool)canReceive;

- (_Bool)canTransmit;

@property(copy, nonatomic) id dataReceivedHandler;

- (void)dealloc;

- (void)disconnect;

- (id)init;

- (id)initWithLocalAddress:(id)arg1;

- (id)initWithRemoteAddress:(id)arg1;

@property(readonly) NSArray *localAddresses;

- (void)received:(const char *)arg1 ofLength:(unsigned long long)arg2 destructor:(id)arg3;

@property(readonly, nonatomic) DTXResourceTracker *resourceTracker; // @synthesize resourceTracker=_tracker;

@property int status; // @synthesize status=_status;

- (unsigned long long)transmit:(const void *)arg1 ofLength:(unsigned long long)arg2;



@end


