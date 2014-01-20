/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "VGLTexture.h"


__attribute__((visibility("hidden")))

@interface VGLUncompressedTexture : VGLTexture

{

    struct CGImage *_image;

    char *_imageData;

    unsigned int _pixelFormat;

    unsigned int _colorFormat;

    struct CGImageBlockSet *_blockSetRef;

    _Bool _fastPath;

}



- (void)dealloc;

- (_Bool)decodeTexture;

- (id)initWithCGImage:(struct CGImage *)arg1;

- (id)initWithData:(id)arg1;

- (_Bool)isFlipped;

- (_Bool)loadTexture;

- (BRectImp_7721609a)textureCoordinateRect:(struct CGRect)arg1;



@end

