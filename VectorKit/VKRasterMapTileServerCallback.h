/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class VKRasterMapTileRequest;



__attribute__((visibility("hidden")))

@interface VKRasterMapTileServerCallback : NSObject

{

    VKRasterMapTileRequest *request;

    id handler;

    double startTimestamp;

}



- (void)dealloc;

- (id)description;

@property(copy, nonatomic) id handler; // @synthesize handler;

@property(retain, nonatomic) VKRasterMapTileRequest *request; // @synthesize request;

@property(nonatomic) double startTimestamp; // @synthesize startTimestamp;



@end


