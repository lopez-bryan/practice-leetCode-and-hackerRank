//
//  List.hpp
//  practice-leetCode-and-hackerRank
//
//  Created by Bryan Lopez on 1/15/20.
//  Copyright © 2020 Lopez Bryan. All rights reserved.
//

#ifndef List_h
#define List_h

#include <stdio.h>
#include <iostream>
class List {
private:
    typedef struct Node {
        int data;
        Node * next;
    } * nPtr;
    nPtr temp;
    nPtr prev;
    nPtr curr;
    nPtr head;
public:
    List();
    void addNode(int addData);
    void reverse();
    void deleteNode(int delData);
    void printList();
};



#endif /* List_h */
