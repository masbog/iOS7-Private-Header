/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface UIActivityItemImageRep : NSObject

{

    id _asset;

    id _thumbnailProvider;

    id _dataProvider;

}



+ (id)activityItemImageRepWithAsset:(id)arg1 thumbnailProvider:(id)arg2 dataProvider:(void)arg3;

@property(retain, nonatomic) id asset; // @synthesize asset=_asset;

- (id)data;

@property(copy, nonatomic) id dataProvider; // @synthesize dataProvider=_dataProvider;

- (void)dealloc;

@property(copy, nonatomic) id thumbnailProvider; // @synthesize thumbnailProvider=_thumbnailProvider;

- (id)thumbnail;



@end


