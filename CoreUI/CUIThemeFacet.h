/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "CUIThemeImageSource.h"

#import "NSCoding.h"

#import "NSCopying.h"



@interface CUIThemeFacet : NSObject <CUIThemeImageSource, NSCopying, NSCoding>

{

    struct _renditionkeytoken *_renditionKeyList;

    unsigned long long _themeIndex;

    long long _renditionType;

    struct CGSize _thumbnailSize;

    struct CGPoint _hotSpot;

    struct {

        unsigned int hasCheckedButtonGlyph:1;

        unsigned int isButtonGlyph:1;

        unsigned int reserved:14;

    } _fFlags;

}



+ (id)_facetWithKeyList:(const struct _renditionkeytoken *)arg1 andRenditionKeyClass:(Class)arg2 orRenditionKey:(id)arg3 fromTheme:(unsigned long long)arg4;

+ (void)_invalidateArtworkCaches;

+ (id)_themeStoreForThemeIndex:(unsigned long long)arg1;

+ (_Bool)assetExistsForRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2;

+ (id)cursorFacetWithName:(id)arg1 fromTheme:(unsigned long long)arg2;

+ (id)debug_bundleIdentifierForThemeRef:(unsigned long long)arg1;

+ (id)facetWithElement:(long long)arg1 part:(long long)arg2 dimension1:(long long)arg3 dimension2:(long long)arg4 fromTheme:(unsigned long long)arg5;

+ (id)facetWithElement:(long long)arg1 part:(long long)arg2 fromTheme:(unsigned long long)arg3;

+ (id)facetWithRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2;

+ (void)initialize;

+ (unsigned long long)themeForBundleIdentifier:(id)arg1 error:(id *)arg2;

+ (unsigned long long)themeNamed:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;

+ (unsigned long long)themeWithContentsOfURL:(id)arg1 error:(id *)arg2;

- (void)_applyFixedAttributesToKey:(id)arg1;

- (id)_approximateRenditionForRenditionKey:(id)arg1;

- (_Bool)_canGetRenditionForKey:(id)arg1 withDrawingLayer:(long long)arg2;

- (void)_drawAsMaskSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect)arg2 context:(struct CGContext *)arg3 alpha:(double)arg4 operation:(int)arg5 isFocused:(_Bool)arg6;

- (void)_drawMaskFromSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect)arg2 alpha:(double)arg3 operation:(int)arg4 isFocused:(_Bool)arg5;

- (void)_drawSlice:(long long)arg1 inFrame:(struct CGRect)arg2 withKeyAdjustment:(id)arg3;

- (void)_drawSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect)arg2 context:(struct CGContext *)arg3 alpha:(double)arg4 operation:(int)arg5 isFocused:(_Bool)arg6 isFlipped:(_Bool)arg7;

- (void)_drawSpecificRenditionKey:(id)arg1 inFrame:(struct CGRect)arg2 context:(struct CGContext *)arg3 isFocused:(_Bool)arg4 isFlipped:(_Bool)arg5;

- (void)_drawSpecificRenditionKey:(id)arg1 rendition:(id)arg2 inFrame:(struct CGRect)arg3 context:(struct CGContext *)arg4 alpha:(double)arg5 operation:(int)arg6 isFocused:(_Bool)arg7 isFlipped:(_Bool)arg8;

- (struct CGPoint)_hotSpot;

- (id)_imageForRenditionFromKey:(id)arg1 withSize:(struct CGSize)arg2 isMask:(_Bool)arg3;

- (void)_initWithRenditionKey:(id)arg1;

- (_Bool)_isButtonGlyph;

- (id)_rendition;

- (id)_renditionForSpecificKey:(id)arg1;

- (void)_setHasCheckedButtonGlyph:(_Bool)arg1;

- (void)_setIsButtonGlyph:(_Bool)arg1;

- (void)_setThemeIndex:(unsigned long long)arg1;

- (long long)_sliceIndexForSlice:(long long)arg1 ofRendition:(id)arg2;

- (id)_themeStore;

- (struct CGSize)_thumbnailSizeForRendition:(id)arg1;

- (void)_updateSpecificRenditionKey:(id)arg1 isFocused:(_Bool *)arg2 owner:(id)arg3 userInfo:(id)arg4;

- (double)alpha;

- (int)blendMode;

- (id)blendModeAsCAFilterString;

- (long long)controlSize;

- (struct CGImage *)copyLayerImageContentsAndCenter:(struct CGRect *)arg1;

- (struct CGImage *)copyLayerImageContentsAndCenter:(struct CGRect *)arg1 renditionKey:(id)arg2;

- (id)copyWithZone:(struct _NSZone *)arg1;

- (struct CGContext *)currentCGContext;

- (void)dealloc;

- (id)description;

- (id)displayName;

- (void)drawAbsoluteAnimationFrame:(double)arg1 destinationFrame:(struct CGRect)arg2 isFocused:(_Bool)arg3 context:(struct CGContext *)arg4;

- (void)drawAnimationFrameMappedFrom0_1RangedValue:(double)arg1 destinationFrame:(struct CGRect)arg2 isFocused:(_Bool)arg3 context:(struct CGContext *)arg4;

- (void)drawAsOnePartWithSlice:(int)arg1 inFrame:(struct CGRect)arg2 isFocused:(_Bool)arg3;

- (void)drawGradientInFrame:(struct CGRect)arg1 angle:(double)arg2 alpha:(double)arg3 operation:(int)arg4 isFocused:(_Bool)arg5 keyAdjustment:(id)arg6;

- (void)drawGradientInFrame:(struct CGRect)arg1 angle:(double)arg2 alpha:(double)arg3 operation:(int)arg4 isFocused:(_Bool)arg5 keyAdjustment:(id)arg6 context:(struct CGContext *)arg7;

- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 keyAdjustment:(id)arg3;

- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 keyAdjustment:(id)arg4;

- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5;

- (void)drawHighlightInFrame:(struct CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4;

- (void)drawHighlightInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3;

- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(_Bool)arg3;

- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(_Bool)arg3 keyAdjustment:(id)arg4;

- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(_Bool)arg4;

- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(_Bool)arg4 context:(struct CGContext *)arg5;

- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(_Bool)arg4 keyAdjustment:(id)arg5;

- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 owner:(id)arg4 userInfo:(id)arg5;

- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4;

- (void)drawInFrame:(struct CGRect)arg1 isFocused:(_Bool)arg2 context:(struct CGContext *)arg3;

- (void)drawInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3;

- (void)drawMaskInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(_Bool)arg3 keyAdjustment:(id)arg4;

- (void)drawMaskInFrame:(struct CGRect)arg1 alpha:(double)arg2 operation:(int)arg3 isFocused:(_Bool)arg4 keyAdjustment:(id)arg5;

- (void)drawMaskInFrame:(struct CGRect)arg1 alpha:(double)arg2 owner:(id)arg3 userInfo:(id)arg4;

- (void)drawMaskInFrame:(struct CGRect)arg1 owner:(id)arg2 userInfo:(id)arg3;

- (void)drawPulseInFrame:(struct CGRect)arg1 pulseValue:(double)arg2 isFocused:(_Bool)arg3 keyAdjustment:(id)arg4;

- (void)drawPulseInFrame:(struct CGRect)arg1 pulseValue:(double)arg2 owner:(id)arg3 userInfo:(id)arg4;

- (void)drawSegmentInFrame:(struct CGRect)arg1 isFocused:(_Bool)arg2 segmentType:(int)arg3;

- (void)encodeWithCoder:(id)arg1;

- (id)gradientWithKeyAdjustment:(id)arg1 angle:(double *)arg2 style:(unsigned long long *)arg3;

- (_Bool)hasValueSlices;

- (id)highlightWithSize:(struct CGSize)arg1 keyAdjustment:(id)arg2;

- (_Bool)hitTestAtPoint:(struct CGPoint)arg1 inFrame:(struct CGRect)arg2 owner:(id)arg3 userInfo:(id)arg4;

- (id)image;

- (id)imageForSlice:(long long)arg1 withKeyAdjustment:(id)arg2;

- (id)imageForSliceIndex:(long long)arg1;

- (id)imageForState:(long long)arg1;

- (id)imageForState:(long long)arg1 value:(long long)arg2;

- (id)imageForState:(long long)arg1 value:(long long)arg2 size:(unsigned long long)arg3;

- (id)imageForState:(long long)arg1 withValue:(long long)arg2;

- (struct CGSize)imageSize;

- (id)imageWithKeyAdjustment:(id)arg1;

- (id)imageWithSize:(struct CGSize)arg1 keyAdjustment:(id)arg2;

- (id)init;

- (id)initWithCoder:(id)arg1;

- (id)initWithRenditionKey:(id)arg1 fromTheme:(unsigned long long)arg2;

- (_Bool)isValidButtonImageSource;

- (_Bool)isValidButtonImageSourceForSize:(unsigned long long)arg1;

- (id)makeLayer;

- (id)maskForSlice:(long long)arg1 withKeyAdjustment:(id)arg2;

- (id)maskWithSize:(struct CGSize)arg1 keyAdjustment:(id)arg2;

- (id)renditionForSpecificKeyWrapper:(id)arg1;

- (id)renditionKey;

- (id)renditionMetricsWithKeyAdjustment:(id)arg1;

- (id)renditionSliceInformationForRect:(struct CGRect)arg1 keyAdjustment:(id)arg2;

- (long long)renditionType;

- (void)setControlSize:(long long)arg1;

- (unsigned long long)themeIndex;

- (id)themeRendition;

- (id)thumbnail;

- (struct CGSize)thumbnailSize;

- (struct CGSize)topLeftCapSize;

- (void)updateLayer:(id)arg1;



@end

