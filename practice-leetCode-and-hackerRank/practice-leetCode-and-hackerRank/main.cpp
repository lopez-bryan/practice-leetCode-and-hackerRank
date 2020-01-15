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


int main() {
    List l;
    l.addNode(1);
    l.addNode(2);
    l.addNode(3);
    
    l.printList();
    
    std::cout << std::endl;
    
    l.reverse();
    l.printList();
    std::cout << std::endl;
    
    return 0;
}
