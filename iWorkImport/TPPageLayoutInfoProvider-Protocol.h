/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol TPPageLayoutInfoProvider <NSObject>

- (_Bool)canProvideInfoForPageIndex:(unsigned long long)arg1;

- (_Bool)canProvideNumberingInfoForPageIndex:(unsigned long long)arg1;

- (int)contentFlagsForPageIndex:(unsigned long long)arg1;

- (id)headerFooterProviderForPageIndex:(unsigned long long)arg1;

- (id)masterDrawableProviderForPageIndex:(unsigned long long)arg1;

- (unsigned long long)pageCountForPageIndex:(unsigned long long)arg1;

- (unsigned long long)pageNumberForPageIndex:(unsigned long long)arg1;

- (_Bool)shouldHeaderFooterBeVisibleForPageIndex:(unsigned long long)arg1;

@end


