//
//  main.cpp
//  practice-leetCode-and-hackerRank
//
//  Created by Bryan Lopez on 1/14/20.
//  Copyright © 2020 Lopez Bryan. All rights reserved.
//

#include <iostream>
#include "randomCode.h"
#include "List.h"
#include "LRUCache.h"
#include "crackingInterview.h"
#include "leetCode.h"


int main() {
    LeetCode le;
    
    std::vector<int> v1 = {1, 3, 10};
    std::vector<int> v2 = {2, 4, 16, 33, 55};
    
    std::cout << le.getMedian(v1, v2) << std::endl;
 
    return 0;
}

