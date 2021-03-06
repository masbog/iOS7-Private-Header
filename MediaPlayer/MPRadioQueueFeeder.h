/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "MPQueueFeeder.h"


@class ADBannerView, MPRadioAdObserver, NSArray, NSData, NSMapTable, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, RadioStation;



@interface MPRadioQueueFeeder : MPQueueFeeder

{

    NSObject<OS_dispatch_queue> *_accessQueue;

    MPRadioAdObserver *_adObserver;

    _Bool _didFailToFetchTracks;

    NSMutableDictionary *_fetchingTracksCompletionHandlersByStation;

    ADBannerView *_skipAdView;

    NSData *_skipAdTrackData;

    NSMapTable *_startTimesByRadioTrack;

    RadioStation *_station;

    NSObject<OS_dispatch_queue> *_trackHistoryQueue;

    NSObject<OS_dispatch_queue> *_trackRemovalQueue;

    NSMutableArray *_tracks;

    _Bool _wasUsingBackgroundNetwork;

}



+ (void)_isProfileExplicitContentRestrictedDidChangeNotification:(id)arg1;

+ (id)_profileConnectionObserver;

+ (void)_updateIsExplicitContentRestrictedAndPostNotification:(_Bool)arg1 removeTracks:(_Bool)arg2;

+ (id)imageCache;

+ (_Bool)isExplicitTracksEnabled;

+ (_Bool)isUserDefaultExplicitTracksEnabled;

+ (void)setMinimumDurationToPlayToCountForHistory:(double)arg1;

+ (void)setUserDefaultExplicitTracksEnabled:(_Bool)arg1;

+ (_Bool)shouldRestorePlaybackQueue;

- (void).cxx_destruct;

- (void)_applicationWillTerminateNotification:(id)arg1;

- (void)_bufferingStateDidChangeNotification:(id)arg1;

- (void)_cancelScheduledAds;

- (void)_cellularNetworkingAllowedDidChangeNotification:(id)arg1;

- (void)_didFailToLoadAdNotification:(id)arg1;

- (_Bool)_endPlaybackIfNecessaryForNetworkType;

- (void)_fetchAdditionalTracksWithCompletionHandler:(id)arg1;

- (unsigned long long)_indexOfCurrentItem;

- (void)_insertAdTrack:(id)arg1 afterCurrentItemIndex:(unsigned long long)arg2;

- (void)_isExplicitTracksEnabledDidChangeNotification:(id)arg1;

- (void)_itemDidFinishLoadingNotification:(id)arg1;

- (void)_itemIsBannedDidChangedNotification:(id)arg1;

- (void)_itemWillChangeNotification:(id)arg1;

- (void)_networkTypeDidChangeNotification:(id)arg1;

- (void)_playbackStateDidChangeNotification:(id)arg1;

- (void)_prefetchArtworkForNextTrack;

- (void)_radioModelDidChangeNotification:(id)arg1;

- (void)_recordTrackTimeForItem:(id)arg1;

- (void)_songBeganResponseNotification:(id)arg1;

- (id)_trackAtIndex:(unsigned long long)arg1;

- (id)_tracksWithPromotionalContentFromTracks:(id)arg1;

- (void)_updateTracksKeepingExistingTracks:(_Bool)arg1 keepingCurrentTrack:(_Bool)arg2 invalidatingContent:(_Bool)arg3;

- (_Bool)canSeek;

- (_Bool)canSkipItem:(id)arg1;

- (_Bool)canSkipToPreviousItem;

- (void)controller:(id)arg1 willChangePlaybackIndexBy:(long long)arg2 deltaType:(int)arg3 ignoreElapsedTime:(_Bool)arg4 allowSkippingAds:(_Bool)arg5;

- (id)copyRawItemAtIndex:(unsigned long long)arg1;

- (void)dealloc;

- (_Bool)hasValidItemAtIndex:(unsigned long long)arg1;

- (id)init;

- (unsigned long long)initialPlaybackQueueDepth;

- (Class)itemClass;

- (unsigned long long)itemCount;

- (unsigned long long)itemTypeForIndex:(unsigned long long)arg1;

- (void)loadArtworkImageForItem:(id)arg1 completionHandler:(id)arg2;

- (id)localizedAttributedPositionInPlaylistStringForItem:(id)arg1 withRegularTextAttributes:(id)arg2 emphasizedTextAttributes:(id)arg3;

- (id)localizedPositionInPlaylistString:(id)arg1;

- (id)playbackInfoAtIndex:(unsigned long long)arg1;

- (int)playbackMode;

- (_Bool)playerPreparesItemsForPlaybackAsynchronously;

- (unsigned long long)realRepeatType;

- (void)reloadTracksForPlayingStation;

- (void)reloadTracksForPlayingStationAndKeepExistingTracks:(_Bool)arg1;

- (_Bool)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(_Bool)arg2;

- (_Bool)reloadWithDataSource:(id)arg1 keepPlayingCurrentItemIfPossible:(_Bool)arg2 startPlayback:(_Bool)arg3;

- (void)removeAllStartTimes;

- (void)removeStartTimeForRadioTrack:(id)arg1;

- (void)setAVController:(id)arg1;

- (void)setStartTime:(double)arg1 forRadioTrack:(id)arg2;

@property(retain, nonatomic) RadioStation *station;

@property(copy, nonatomic) NSArray *tracks;

- (_Bool)shouldBeginPlaybackOfItem:(id)arg1 error:(id *)arg2;



@end


