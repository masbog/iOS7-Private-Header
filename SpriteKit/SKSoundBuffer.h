/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



__attribute__((visibility("hidden")))

@interface SKSoundBuffer : NSObject

{

    unsigned int _bufferId;

    NSString *_path;

    double _duration;

}



+ (id)bufferWithFileNamed:(id)arg1;

- (void).cxx_destruct;

@property(readonly, nonatomic) unsigned int bufferId;

- (void)dealloc;

- (id)description;

@property(readonly, nonatomic) double duration;

- (id)init;



@end

