/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPTextCommand.h"


@class TSWPTOCSettings;



__attribute__((visibility("hidden")))

@interface TSWPInsertTOCCommand : TSWPTextCommand

{

    TSWPTOCSettings *_tocSettings;

}



+ (struct _NSRange)insertTOCAttachmentInStorage:(id)arg1 documentRoot:(id)arg2 content:(id)arg3 selection:(id)arg4 tocSettings:(id)arg5 withScope:(int)arg6 undoRedoTransaction:(struct TSWPStorageTransaction *)arg7;

+ (struct _NSRange)insertTOCAttachmentInStorage:(id)arg1 documentRoot:(id)arg2 tocStorage:(id)arg3 selection:(id)arg4 tocSettings:(id)arg5 withScope:(int)arg6 undoRedoTransaction:(struct TSWPStorageTransaction *)arg7;

- (void)doCommit;

- (id)initWithStorage:(id)arg1 selection:(id)arg2 tocSettings:(id)arg3 withScope:(int)arg4;

- (int)persistenceKind;



@end

