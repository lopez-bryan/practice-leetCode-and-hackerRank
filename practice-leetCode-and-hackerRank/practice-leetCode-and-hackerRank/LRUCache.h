//
//  LRUCache.h
//  practice-leetCode-and-hackerRank
//
//  Created by Bryan Lopez on 1/16/20.
//  Copyright © 2020 Lopez Bryan. All rights reserved.
//

#ifndef LRUCache_h
#define LRUCache_h

#include <iostream>
#include <stdio.h>
#include <list>
#include <unordered_map>


class LRUCache {
private:
    int cache;
    std::list<int> li;
    std::unordered_map<int, std::list<int>::iterator> ma;
public:
    LRUCache(int);
    void addToCache(int x);
    void displayLRUCache();
};

#endif /* LRUCache_h */
