//
//  leetCode.cpp
//  practice-leetCode-and-hackerRank
//
//  Created by Bryan Lopez on 1/25/20.
//  Copyright © 2020 Lopez Bryan. All rights reserved.
//

#include "leetCode.h"

// Two sums
    
std::vector<int> LeetCode::twoSum(std::vector<int>& nums, int target) {
        std::vector<int> answers;
        std::unordered_map<int, int> mp;
        std::unordered_map<int, int>::iterator it;
        
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];
            it = mp.find(diff);
            
            if (it != mp.end()) {
                answers.push_back(it->second);
                answers.push_back(i);
                return answers;
            }
            else {
                mp.insert(std::make_pair(nums[i], i));
            }
        }
        return answers;
    }


// Leetcode problem to find median of two arrays.
double LeetCode::getMedian(std::vector<int>& nums1, std::vector<int>& nums2) {
    // sizes of both arrays and their size added together
    unsigned long size1 = nums1.size();
    unsigned long size2 = nums2.size();
    unsigned long size3 = size1 + size2;
    int i = 0;
    int j = 0;
    // keep track of where we are. Whether we are half way through the two vectors or not.
    int count = 0;
    // To store the values of the arrays one by one.
    int m1 = 0;
    // I use this for the one value right before the halfway point of the two vectors combined.
    int m2 = 0;
    
    // CASE ONE
    // If the sizes of both arrays are equal to an even number
    if (size3 % 2 == 0) {
        // Lets go through elements from both arrays. We only need to go through their combined
        // size divided by two
        while (count != (size3 / 2) + 1) {
            // If the value from array1 is smaller than array2, store that value, increment array one, increase the count so we can get out of the while loop.
            if (nums1[i] < nums2[j]) {
                // Store the value
                m1 = nums1[i];
                i++;
                count++;
                // If we are one less than the size, lets store that value in a different int.
                // We will use that and the next value to find the median.
                if (count == (size3 / 2)) {
                    m2 = nums1[i];
                }
            }
            else {
                // Otherwise, let's do it with array2.
                m1 = nums2[j];
                j++;
                count++;
                // This is the same as a few lines back. Store the prev value in a different int.
                if (count == (size3 / 2)) {
                    m2 = nums2[j];
                }
            }
        }
        // Return the average of the two numbers.
        return (m1 + m2) / 2;
    }
    // CASE 2
    // If the two arrays have an odd number of elements.
    else {
        while (count != ((size3 / 2) + 1)) {
            
            if (nums1[i] < nums2[j]) {
                m1 = nums1[i];
                i++;
                count++;
            }
            else {
                m1 = nums2[j];
                j++;
                count++;
            }
        }
        return m1;
    }
}

// Longest substring of palindrone
// A O(n^2) time and O(1) space program to
// find the longest palindromic substring

// A utility function to print a substring str[low..high]
void LeetCode::printSubStr(char* str, int low, int high)
{
    for( int i = low; i <= high; ++i )
        std::cout << str[i];
}

// This function prints the longest palindrome substring (LPS)
// of str[]. It also returns the length of the longest palindrome
int LeetCode::longestPalSubstr(char *str)
{
    int maxLength = 1; // The result (length of LPS)
    
    int start = 0;
    size_t len = std::strlen(str);
    
    int low, high;
    
    // One by one consider every character as center point of
    // even and length palindromes
    for (int i = 1; i < len; ++i)
    {
        // Find the longest even length palindrome
        // with center points as i-1 and i.
        low = i - 1;
        high = i;
        while (low >= 0 && high < len && str[low] == str[high])
        {
            if (high - low + 1 > maxLength)
            {
                start = low;
                maxLength = high - low + 1;
            }
            --low;
            ++high;
        }
        
        // Find the longest odd length palindrome with center
        // point as i
        low = i - 1;
        high = i + 1;
        while (low >= 0 && high < len && str[low] == str[high])
        {
            if (high - low + 1 > maxLength)
            {
                start = low;
                maxLength = high - low + 1;
            }
            --low;
            ++high;
        }
    }
    
    std::cout<<"Longest palindrome substring is: ";
    printSubStr(str, start, start + maxLength - 1);
    
    return maxLength;
}











