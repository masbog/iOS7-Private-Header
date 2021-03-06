/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "TSKCommand.h"


@class TSDConnectionLineInfo, TSDDrawableInfo;



__attribute__((visibility("hidden")))

@interface TSDConnectionLineConnectCommand : TSKCommand

{

    TSDConnectionLineInfo *mConnectionLine;

    TSDDrawableInfo *mOldConnectedFrom;

    TSDDrawableInfo *mOldConnectedTo;

    TSDDrawableInfo *mConnectFrom;

    TSDDrawableInfo *mConnectTo;

}



- (id)actionString;

- (void)commit;

@property(readonly, nonatomic) TSDDrawableInfo *connectFrom; // @synthesize connectFrom=mConnectFrom;

@property(readonly, nonatomic) TSDDrawableInfo *connectTo; // @synthesize connectTo=mConnectTo;

@property(readonly, nonatomic) TSDConnectionLineInfo *connectionLine; // @synthesize connectionLine=mConnectionLine;

- (void)dealloc;

- (id)initFromUnarchiver:(id)arg1;

- (id)initWithConnectionLine:(id)arg1 connectingFrom:(id)arg2 to:(id)arg3 context:(id)arg4;

- (void)p_do;

- (_Bool)process;

- (void)redo;

- (void)saveToArchiver:(id)arg1;

- (void)undo;



@end


