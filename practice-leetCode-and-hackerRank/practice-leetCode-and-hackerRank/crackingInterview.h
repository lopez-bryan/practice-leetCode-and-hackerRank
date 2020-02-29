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
    bool isPermutation(std::string a, std::string b);
    void replaceSpaces(char str[], int length);
    //void rotate(int n, int matrix[][n]);
    void setZeros(int matrix[3][3]);
    bool isRotation(std::string s1, std::string s2);
};

#endif /* crackingInterview_h */
