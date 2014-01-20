/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSPObject.h"


@class NSArray, NSString;



__attribute__((visibility("hidden")))

@interface KNRecordingEventTrack : TSPObject

{

    NSString *mType;

    NSArray *mEvents;

}



- (void)dealloc;

- (id)eventTrackByReplacingSegmentAfterTime:(double)arg1 withEventTrack:(id)arg2;

@property(readonly, nonatomic) NSArray *events; // @synthesize events=mEvents;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithContext:(id)arg1;

- (id)initWithContext:(id)arg1 type:(id)arg2 events:(id)arg3;

- (void)loadFromArchive:(const struct RecordingEventTrackArchive *)arg1 unarchiver:(id)arg2;

- (void)saveToArchive:(struct RecordingEventTrackArchive *)arg1 archiver:(id)arg2;

- (void)saveToArchiver:(id)arg1;

@property(readonly, nonatomic) NSString *type; // @synthesize type=mType;



@end

