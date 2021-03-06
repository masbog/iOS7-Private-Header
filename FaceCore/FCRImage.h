/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@interface FCRImage : NSObject

{

    unsigned long long width;

    unsigned long long height;

    unsigned long long bytesPerRow;

    char *rawDataBuffer;

    char *alignedDataBuffer;

    _Bool freeBufferWhenDone;

}



@property unsigned long long bytesPerRow; // @synthesize bytesPerRow;

- (void)dealloc;

- (char *)getAlignedImageData;

@property unsigned long long height; // @synthesize height;

- (id)initWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 bytesPerRow:(unsigned long long)arg3 buffer:(char *)arg4 freeBufferWhenDone:(_Bool)arg5;

@property unsigned long long width; // @synthesize width;



@end


