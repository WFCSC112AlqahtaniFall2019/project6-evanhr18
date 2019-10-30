//
// Created by Henry Evans on 10/24/19.
//

#ifndef BINARYINSERTIONSORT_LINKEDLIST_H
#define BINARYINSERTIONSORT_LINKEDLIST_H
#include "Node.h"
#include <iostream>
using namespace std;

class LinkList {
public:
    LinkList();
    LinkList(const LinkList &list);
    ~LinkList();
    void append(int item);
    const LinkList &operator=(const LinkList &rhs);
    void print() const;
    void InsertionSort();

private:
    Node *head;
};


#endif //BINARYINSERTIONSORT_LINKEDLIST_H


