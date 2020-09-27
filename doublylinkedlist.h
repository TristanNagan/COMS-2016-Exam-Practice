#ifndef DOUBLYLINKEDLIST
#define DOUBLYLINKEDLIST
#include "singlylinkedlist.h"
#include <iostream>

using namespace std;

class DoublyLinkedList
{
public:
    DoublyLinkedList();
    ~DoublyLinkedList();

    bool empty() const;

    void push_back(int val);

    int pop_front();

    void deleteItem(int index);

    void print_list() const;

private:
    Link *head;
    Link *tail;
    int n;
};


#endif // DOUBLYLINKEDLIST

