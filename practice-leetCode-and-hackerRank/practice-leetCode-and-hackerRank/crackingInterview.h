//
//  crackingInterview.hpp
//  practice-leetCode-and-hackerRank
//
//  Created by Bryan Lopez on 1/16/20.
//  Copyright © 2020 Lopez Bryan. All rights reserved.
//

#ifndef crackingInterview_h
#define crackingInterview_h

#include <iostream>
#include <stdio.h>
#include <string>
#include <vector>
#include <unordered_map>
class Cracking {
public:
    bool isUnique(std::string str);
    std::string compression(std::string str);
    std::vector<int> twoSum(std::vector<int>& nums, int target);
    void reverse(char * str);
};

#endif /* crackingInterview_h */
