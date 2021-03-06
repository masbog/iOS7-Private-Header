/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSWPStyleBaseCommand.h"


__attribute__((visibility("hidden")))

@interface TSWPStyleDeleteCommand : TSWPStyleBaseCommand

{

    unsigned long long _oldPresetIndex;

}



- (id)actionString;

- (void)commit;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithTheme:(id)arg1 style:(id)arg2;

- (void)loadFromMessage:(const struct StyleDeleteCommandArchive *)arg1 unarchiver:(id)arg2;

@property(readonly, nonatomic) unsigned long long oldPresetIndex; // @synthesize oldPresetIndex=_oldPresetIndex;

- (void)p_CommitAndRedo;

- (void)redo;

- (void)saveToArchiver:(id)arg1;

- (void)saveToMessage:(struct StyleDeleteCommandArchive *)arg1 archiver:(id)arg2;

- (void)undo;



@end


