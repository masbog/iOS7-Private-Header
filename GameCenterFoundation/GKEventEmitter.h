/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSHashTable, NSMutableArray;



@interface GKEventEmitter : NSObject

{

    NSHashTable *_listeners;

    NSMutableArray *_supportedProtocols;

    NSMutableArray *_queuedEvents;

}



+ (id)eventEmitterForProtocols:(id)arg1;

- (void)dealloc;

- (void)dispatchQueuedEventsToListener:(id)arg1;

- (void)forwardInvocation:(id)arg1;

- (id)initWithSupportedProtocols:(id)arg1;

- (id)invocationForProtocol:(id)arg1 selector:(SEL)arg2;

- (_Bool)listenerRegisteredForSelector:(SEL)arg1;

@property(retain, nonatomic) NSHashTable *listeners; // @synthesize listeners=_listeners;

- (id)methodSignatureForProtocol:(id)arg1 selector:(SEL)arg2;

- (id)methodSignatureForSelector:(SEL)arg1;

@property(retain, nonatomic) NSMutableArray *queuedEvents; // @synthesize queuedEvents=_queuedEvents;

- (void)registerListener:(id)arg1;

@property(retain, nonatomic) NSMutableArray *supportedProtocols; // @synthesize supportedProtocols=_supportedProtocols;

- (void)unregisterAllListeners;

- (void)unregisterListener:(id)arg1;



@end

