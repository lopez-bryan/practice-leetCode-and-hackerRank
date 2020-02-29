//
//  LRUCache.cpp
//  practice-leetCode-and-hackerRank
//
//  Created by Bryan Lopez on 1/16/20.
//  Copyright © 2020 Lopez Bryan. All rights reserved.
//

#include "LRUCache.h"

//LRUCache::LRUCache(int x) {
//    cache = x;
//}

LRUCache::LRUCache(int x) {
    cache = x;
}

void LRUCache::addToCache(int x) {
    
    if (ma.find(x) == ma.end()) {
        int num = li.back();
        li.pop_back();
        ma.erase(num);
    }
    else {
        li.erase(ma[x]);
        li.push_front(x);
        ma[x] = li.begin();
    }
}

void LRUCache::displayLRUCache() {
    
    for (std::list<int>::iterator it = li.begin(); it != li.end(); it++) {
        std::cout << *it << std::endl;
    }
    std::cout << std::endl;
}


