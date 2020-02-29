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
using namespace std;

int main() {
    
    RandomCode r;
    
    int number = 3456;
    std::cout << number << std::endl;
    
    int num = r.reverseInt(number);
    
    cout << num << endl;
    
//    Cracking cr;
//
//    std::string s1 = "waterbottle", s2 = "erbottlewat", s3 = "erbottlewae";
//    std::cout << s1 << " is" << (cr.isRotation(s1, s2) ? " " : " not ") << "rotation of " << s2 << "\n";
//    cout << s1 << " is" << (cr.isRotation(s1, s3) ? " " : " not ") << "rotation of " << s3;
    return 0;
}

