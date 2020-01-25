//
//  List.cpp
//  practice-leetCode-and-hackerRank
//
//  Created by Bryan Lopez on 1/15/20.
//  Copyright © 2020 Lopez Bryan. All rights reserved.
//

#include <iostream>
#include "List.h"

// constructor to initialize pointers
List::List() {
    head = nullptr;
    prev = nullptr;
    temp = nullptr;
    curr = nullptr;
}

// Add a node to the list
void List::addNode(int addData) {
    // Create a new Node
    nPtr node = new Node;
    node->next = nullptr;
    node->data = addData;
    // check if we already have a list
    if (head != nullptr) {
        curr = head;
        // loop through to the end of the list
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        // once we get to the end, add the new node at the end of the list.
        curr->next = node;
    }
    else {
        // if a list does NOT exist, start one by putting a node at the head.
        head = node;
    }
}

// Print the list
void List::printList() {
    // check if there is a list to print.
    if (head != nullptr) {
        // start at the ehad
        curr = head;
        // move through the list one by one until the end.
        while (curr != nullptr) {
            // print the data
            std::cout << curr->data << std::endl;
            curr = curr->next;
        }
    }
}

// This function will reverse through a linked list
void List::reverse() {
    
        // start at the head;
        curr = head;
        // move through the list until we have reached every element reversing each node.
        while (curr != nullptr) {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        // Final move is just to put the head at the end of the list making it a new head.
        head = prev;
}

void List::deleteNode(int delData) {
    nPtr n = new Node;
    
    curr = head;
    temp = head;
    
    while (curr->data != delData && curr != nullptr) {
        temp = curr;
        curr = curr->next;
    }
    
    if (curr == nullptr) {
        std::cout << "There is not data to delete\n";
        delete n;
    }
    else {
        n = curr;
        curr = curr->next;
        temp->next = curr;
        delete n;
        std::cout << delData << " has been deleted\n";
    }
    
}












