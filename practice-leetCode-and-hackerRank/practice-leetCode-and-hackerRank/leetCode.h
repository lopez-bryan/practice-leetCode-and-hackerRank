//
//  leetCode.hpp
//  practice-leetCode-and-hackerRank
//
//  Created by Bryan Lopez on 1/25/20.
//  Copyright © 2020 Lopez Bryan. All rights reserved.
//

#ifndef leetCode_h
#define leetCode_h

#include <iostream>
#include <vector>
#include <unordered_map>

class LeetCode {
public:
    
    std::vector<int> twoSum(std::vector<int>& nums, int target);
    double getMedian(std::vector<int>& nums1, std::vector<int>& nums2);
};

#endif /* leetCode_h */
