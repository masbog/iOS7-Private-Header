/*

 *     Generated by class-dump 3.4 (64 bit).

 *

 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.

 */





__attribute__((visibility("hidden")))

@interface __NSSKGraph : NSObject

{

    struct edge *_edges;

    struct vertex *_vertices;

    unsigned long long _numV;

    unsigned long long _numE;

    unsigned long long _currE;

    unsigned long long _dump;

    unsigned long long _l_end;

}



- (_Bool)addEdgeWithH1:(unsigned long long)arg1 withH2:(unsigned long long)arg2;

- (void)dealloc;

- (void)finalize;

- (id)initWithNumberOfVertices:(long long)arg1 numberOfEdges:(long long)arg2;

- (struct edge **)isAcyclic;

- (_Bool)isEmpty;

- (unsigned long long)numOfEdges;



@end


