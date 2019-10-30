//
// Created by Henry Evans on 10/24/19.
//

#include "LinkedList.h"
#include <iostream>
using namespace std;

LinkList::LinkList() {      // default constructor
    head = nullptr;
}

LinkList::LinkList(const LinkList &list) {      // copy constructor
    head = new Node;
    *head = *(list.head);
}

LinkList::~LinkList() {     // Destructor
    delete head;
}

const LinkList& LinkList::operator=(const LinkList &rhs) {      //operator overload

    if (this != &rhs) {
        delete head;
        head = new Node;
        *head = *(rhs.head);
    }

    return *this;

}

void LinkList::append(int item) {       //add items to linked list

    // if list is empty
    if (head == nullptr) {
        head = new Node(item);
    }
    // when list is not empty
    else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = new Node(item);
    }

}

void LinkList::print() const {      // prints linked list

    Node* current = head;
    // if list is empty
    if (current == nullptr) {
        cout << "empty list" << endl;
    }
    // when list is not empty
    else {
        while (current != nullptr) {
            cout << current->value << endl;
            current = current->next;
        }
    }

}

void LinkList::InsertionSort() {        // sorting the linked list

    Node* current = head->next;
    while (current != nullptr) {
        int temp = current->value;
        int i = 0;
        Node* previous = head;
        while (previous != current) {
            if (previous->value > current->value && i == 0) {
                temp = previous->value;
                previous->value = current->value;
                i = 1;
                previous = previous->next;
            }
            else {
                if (i == 1) {
                    int x = temp;
                    temp = previous->value;
                    previous->value = x;
                }
                previous = previous->next;
            }
        }
        previous->value = temp;
        current = current->next;
    }
}

