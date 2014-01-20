/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSXMLParserDelegate.h"



@interface UIPDFParserDelegate : NSObject <NSXMLParserDelegate>

{

    struct CGPoint _p[4];

    struct CGPath *_path;

    _Bool _parserError;

}



- (void)dealloc;

- (id)init;

- (void)parser:(id)arg1 didEndElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4;

- (void)parser:(id)arg1 didStartElement:(id)arg2 namespaceURI:(id)arg3 qualifiedName:(id)arg4 attributes:(id)arg5;

- (void)parser:(id)arg1 parseErrorOccurred:(id)arg2;

- (void)parserDidStartDocument:(id)arg1;

@property(readonly) _Bool parserError; // @synthesize parserError=_parserError;

@property(readonly) struct CGPath *path; // @dynamic path;



@end

