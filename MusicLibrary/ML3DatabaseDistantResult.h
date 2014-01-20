/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */



#import "ML3DatabaseResult.h"


@class ML3DatabaseDistantConnection, NSArray, NSString;



@interface ML3DatabaseDistantResult : ML3DatabaseResult

{

    NSArray *_cachedRows;

    ML3DatabaseDistantConnection *_distantConnection;

    NSString *_sql;

    NSArray *_parameters;

}



- (void).cxx_destruct;

- (_Bool)_fetchRowsIfEmpty;

- (void)_localEnumerateRowsWithBlock:(id)arg1;

- (void)_remoteEnumerateRowsWithBlock:(id)arg1;

- (id)columnNameIndexMap;

- (id)description;

@property(readonly, nonatomic) ML3DatabaseDistantConnection *distantConnection; // @synthesize distantConnection=_distantConnection;

- (void)enumerateRowsWithBlock:(id)arg1;

- (unsigned long long)indexForColumnName:(id)arg1;

- (id)init;

- (id)initWithDistantConnection:(id)arg1 sql:(id)arg2 parameters:(id)arg3;

- (id)initWithStatement:(id)arg1;

@property(readonly, nonatomic) NSArray *parameters; // @synthesize parameters=_parameters;

@property(readonly, nonatomic) NSString *sql; // @synthesize sql=_sql;



@end

