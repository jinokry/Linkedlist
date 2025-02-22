#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include "Node.h"
#include <iostream>

class LinkedList
{
public:
    Node *head;
    LinkedList();
    ~LinkedList();
    void insert(int value);
    bool search(int value);
    void print();
};

#endif