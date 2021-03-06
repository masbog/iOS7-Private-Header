/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





@class NSString;



@interface DASearchQuery : NSObject

{

    int _state;

    NSString *_searchString;

    struct _NSRange _range;

    int _timeLimit;

    NSString *_searchID;

    id <DASearchQueryConsumer> _consumer;

}



+ (id)searchQueryWithSearchString:(id)arg1 consumer:(id)arg2;

@property id <DASearchQueryConsumer> consumer; // @synthesize consumer=_consumer;

- (void)dealloc;

- (id)description;

- (id)dictionaryRepresentation;

- (id)initWithDictionaryRepresentation:(id)arg1 consumer:(id)arg2;

- (id)initWithSearchString:(id)arg1 consumer:(id)arg2;

- (_Bool)isQueryRunning;

@property unsigned int maxResults;

@property struct _NSRange range; // @synthesize range=_range;

@property(copy) NSString *searchID; // @synthesize searchID=_searchID;

@property(readonly) NSString *searchString; // @synthesize searchString=_searchString;

- (void)sendFinishedToConsumerWithError:(id)arg1;

- (void)sendResultsToConsumer:(id)arg1;

@property int state; // @synthesize state=_state;

@property int timeLimit; // @synthesize timeLimit=_timeLimit;



@end


