/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





#import "NSCoding.h"



@class UITableViewCell;



@interface UITableViewRow : NSObject <NSCoding>

{

    long long _indentationLevel;

    UITableViewCell *_cell;

    double _height;

}



+ (id)row;

@property(retain, nonatomic) UITableViewCell *cell; // @synthesize cell=_cell;

- (void)dealloc;

- (void)encodeWithCoder:(id)arg1;

@property(nonatomic) double height; // @synthesize height=_height;

- (long long)indentationLevel;

- (id)initWithCoder:(id)arg1;

- (void)setIndentationLevel:(long long)arg1;



@end

