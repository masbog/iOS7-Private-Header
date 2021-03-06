/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "AVLegibleOutputDataSource.h"



@class AVWeakReference, NSString;



@interface AVFigPlaybackItemNotificationLegibleOutputDataSource : NSObject <AVLegibleOutputDataSource>

{

    AVWeakReference *_weakReferenceToSelf;

    struct OpaqueFigPlaybackItem *_figPlaybackItem;

    NSString *_figLegibleOutputsDictionaryKey;

    id _dataProviderBlock;

    id _flushBlock;

}



- (void)_collectUncollectables_onlyToBeCalledFromDeallocOrFinalize;

- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didFlushLegibleOutputWithDictionaryKey:(id)arg2;

- (void)_figPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 atItemTime:(CDStruct_1b6d18a9)arg4 withLegibleOutputsDictionaryKey:(id)arg5;

- (void)_registerForNotifications;

- (void)_unregisterFromNotifications;

- (void)dealloc;

- (void)finalize;

- (id)init;

- (id)initWithFigPlaybackItem:(struct OpaqueFigPlaybackItem *)arg1 figLegibleOutputsDictionaryKey:(id)arg2;

- (void)setDataProviderBlock:(id)arg1;

- (void)setFlushBlock:(id)arg1;



@end


