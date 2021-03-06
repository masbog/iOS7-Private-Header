/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSMutableArray, NSMutableString;



__attribute__((visibility("hidden")))

@interface PptTextBlock : NSObject

{

    struct PptTextHeaderAtom *mTextHeader;

    NSMutableString *mText;

    struct PptTextBlockStylingAtom *mStyleText;

    NSMutableArray *mMetaCharacterFields;

    NSMutableArray *mBookmarks;

    NSMutableArray *mHyperlinks;

    struct PptTextRulerAtom *mTextRuler;

}



- (id)bookmarks;

- (struct PptCharRun *)characterRunAtIndex:(int)arg1;

- (int)characterRunCount;

- (void)dealloc;

- (id)hyperlinks;

- (id)init;

- (id)metaCharacterFields;

- (struct PptParaRun *)paragraphRunAtIndex:(int)arg1;

- (int)paragraphRunCount;

- (void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)arg1;

- (void)readString:(id)arg1;

- (void)readStyles:(id)arg1;

- (void)readTextBlock:(id)arg1;

- (id)text;

- (unsigned int)textIndex;

- (struct PptTextRulerAtom *)textRuler;

- (int)textType;

- (void)writeTextBlock:(id)arg1;



@end


