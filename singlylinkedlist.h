#ifndef SINGLYLINKEDLIST
#define SINGLYLINKEDLIST
#include <iostream>

class Link{
public:
    Link(int val) : value(val), next(nullptr), prev(nullptr){}
    ~Link() {
        std::cout << "Deleting " << value << std::endl;
    }
    int value;
    Link *next;
    Link *prev;
};

class SinglyLinkedList
{
public:
    SinglyLinkedList();
    ~SinglyLinkedList();

    int front() const;
    int back() const;

    void push_front(int val);
    void push_back(int val);
    void insertItem(int index, int value);

    int pop_front();
    int pop_back();
    void deleteItem(int index);

    int size() const;
    bool empty() const;

    Link *get_link(int n);
    void print_list() const;

private:
    Link *_head;
    Link *_tail;
    int _n;
};

#endif // SINGLYLINKEDLIST

