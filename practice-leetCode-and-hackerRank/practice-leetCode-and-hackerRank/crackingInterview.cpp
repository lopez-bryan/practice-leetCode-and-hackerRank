//
//  crackingInterview.cpp
//  practice-leetCode-and-hackerRank
//
//  Created by Bryan Lopez on 1/16/20.
//  Copyright © 2020 Lopez Bryan. All rights reserved.
//

#include "crackingInterview.h"

// Problem 1.1
// this funciton tells us whether or not we have multiple characters in a string. If it's unique.
bool isUnique(std::string str) {
    // boolean array to store true or false for each character.
    bool seen[256];
    // loop through each character in the string and store whether it's true or false.
    for (int i = 0; i < str.length(); i++) {
        // grab each letter by converting and storing it into char index.
        char index = char(str[i]);
        // if there is already that character in the index, then our string is not unique. return false.
        if (seen[index]) {
            return false;
        }
        else {
            // otherwise, mark the character as true
            seen[index] = true;
        }
    }
    return true;
}

// 1.2 Reverse a null terminated string
void Cracking::reverse(char * str) {
    // Create a new string.
    std::string myString = "";
    // Start at the end of the string.
    int i = sizeof(str) - 1;
    
    // Append each letter to at the end of the new string.
    while (i >= 0) {
        myString += str[i];
        // Decrement by 1 after each iteration.
        i--;
    }
    
    // Lets output the new string.
    for (int i = 0; i < myString.length(); i++) {
        std::cout << myString[i];
    }
    std::cout << std::endl;
}

// 1.3 Decide if one string is a permutation of another. See if legths match, sort strings, see if they match up with each other one by one.
bool Cracking::isPermutation(std::string a, std::string b) {
    // Get the sizes of the two strings.
    unsigned long n1 = a.length();
    unsigned long n2 = b.length();
    // If the two string are not the same length, they are obviously not permutations of another.
    if (n1 != n2) {
        return false;
    }
    // Sort both strings
    sort(a.begin(), a.begin());
    sort(b.begin(), b.end());
    // If both string do not matchup, they are not permutations of each other.
    for (int i = 0; i < n1; i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    // If we get this far, then the string are a permutation of each other
    return true;
}

// 1.4 Replace all spaces in a string with %20
void Cracking::replaceSpaces(char str[], int length) {
    int count = 0;
    int newLength = 0;
    
    for (int i = 0; i < length; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    newLength = length + (count * 2);
    str[newLength] = '\0';
    
    for (int i = length - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            str[newLength - 1] = '0';
            str[newLength - 2] = '2';
            str[newLength - 3] = '%';
            newLength = newLength - 3;
        }
        else {
            str[newLength - 1] = str[i];
            newLength = newLength - 1;
        }
    }
} 

// 1.5
// This function will compress a string. It will count all the duplicates and put the number after the letter.
std::string Cracking::compression(std::string str) {
    // Make a new string to store the compressed version
    std::string adjustedString = "";
    // Start with the first letter of the string
    char letter = str.front();
    // Start with a count of 0
    int count = 0;
    // Loop through the whole string.
    for (int i = 0; i < str.length(); i++) {
        // If there are two letters that are the same, increase the count by 1.
        if (letter == str[i]) {
            count += 1;
        }
        else {
            // If letters are not the same, then we need to add the current letter to the new string
            adjustedString += letter;
            // Then we need to add the count to the new string while converting it from an int at the same time.
            adjustedString += std::to_string(count);
            // Now we can copy over the new letter
            letter = str[i];
            // Now adjust the count to 1 to equal the new letter found.
            count = 1;
        }
    }
    // Make sure to add the last letter and count to the new string before returning it.
    adjustedString += letter;
    adjustedString += std::to_string(count);

    return adjustedString;
}


// 1.6 Rotate image by 90 degrees
// At the moment, this function does not work.
//void Cracking::rotate(int n, int matrix[][n]) {
//    for (int layer = 0; layer < n/2; ++layer) {
//        int first = layer;
//        int last = n-1 - layer;
//
//        for (int i = first; i < last; ++i) {
//            int offset = i - first;
//            // save top
//            int top = matrix[first][i];
//            // left -> top
//            matrix[first][i]  = matrix[last-offset][first];
//            // bottom ->left
//            matrix[last-offset][first] = matrix[last][last - offset];
//            // right -> bottom
//            matrix[last][last - offset] = matrix[i][last];
//
//            // top ->right
//            matrix[i][last] = top;
//        }
//    }
//}

// 1.7 set zeros for matrix.
//void Cracking::setZeros(int matrix[3][3]) {
//    bool row[] =
//}

//bool is_substr(std::string s1, std::string s2) {
//    return (s1.find(s2) != std::string::npos);
//}
//// 1.8 check if one string is a substring and rotation of another string
//bool Cracking::isRotation(std::string s1, std::string s2) {
//    unsigned long length = s1.length();
//    // check if bother string are the same length
//    if (length == s2.length() && length > 0) {
//        std::string s1s1 = s1+s1;
//        return is_substr(s1s1, s2);
//    }
//    return false;
//}



//C++ using HashTable with 4ms
// Find the sum of two numbers and compare it with a passed in result to see if they match
std::vector<int> twoSum(std::vector<int>& nums, int target) {
    // We will need a new vector
    std::vector<int> answers;
    // We need a map iterator to increase search time efficiency.
    std::unordered_map<int, int>::iterator it;
    // We need an anordered map to store the other vector inside.
    std::unordered_map<int, int> mp;
    
    // Let's loop through the vector that is passed in
    for (int i = 0; i != nums.size(); i++) {
        // We can find one the values by subtracting the target with each of the values in the iteration.
        int sum = target - nums[i];
        // Look for that number in the map.
        it = mp.find(sum);
        // If we do find that number in the map, push the number and the iteration onto the other vector.
        if (it != mp.end()) {
            answers.push_back(it->second);
            answers.push_back(i);
            return answers;
        }
        // Otherwise, use make_pair wo push the number and iteration onto the map. This allows us to try and find it later.
        else
        {
            mp.insert(std::make_pair(nums[i], i));
        }
    }
    
    
    return answers;
}














