/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@protocol TSPLazyReferenceDelegate <NSObject>

- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3;

- (id)objectForIdentifier:(long long)arg1;

- (_Bool)readLazyReference:(id)arg1 object:(id *)arg2 error:(id *)arg3;



@optional

- (void)lazyReference:(id)arg1 didCreateCopy:(id)arg2;

@end


