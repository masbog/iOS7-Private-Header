/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "NSEnumerator.h"



__attribute__((visibility("hidden")))

@interface _NSKnownKeysEnumerator : NSEnumerator

{

    id _target;

    const id *_list;

    const id *_referenceItems;

    struct _NSRange _range;

    unsigned long long _index;

    unsigned long long _flags;

}



- (void)_invalidate;

- (void)dealloc;

- (id)initWithArray:(const id *)arg1 forTarget:(id)arg2 withReferenceValues:(const id *)arg3 andRange:(struct _NSRange)arg4 andCopyItems:(_Bool)arg5;

- (id)nextObject;



@end


