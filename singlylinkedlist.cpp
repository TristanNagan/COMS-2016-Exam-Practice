#include "singlylinkedlist.h"
#include <stdexcept>
#include <iostream>

using namespace std;

SinglyLinkedList::SinglyLinkedList()
{
    // Create the dummy node
    _head = new Link(42);
    _tail = _head;
    _n = 0;
}

SinglyLinkedList::~SinglyLinkedList()
{
    // Delete all nodes
    while(!empty()){
        pop_front();
    }
    // Delete the dummy node
    delete _head;
}

int SinglyLinkedList::front() const
{
    if(empty()){
        throw std::runtime_error("Called front on empty list.");
    }

    return _head->next->value;
}

int SinglyLinkedList::back() const
{
    if(empty()){
        throw std::runtime_error("Called back on empty list.");
    }

    return _tail->value;
}

void SinglyLinkedList::push_front(int val)
{
    // Create link
    Link *tmp = new Link(val);
    // New link points to first item
    tmp->next = _head->next;
    // Dummy node points to new item
    _head->next = tmp;

    // If tmp is at the back, update tail
    if(tmp->next == nullptr){
        _tail = tmp;
    }

    ++_n;
}

void SinglyLinkedList::push_back(int val)
{
    _tail->next = new Link(val);
    _tail = _tail->next;
    ++_n;
}

void SinglyLinkedList::insertItem(int index, int value)
{
    if(index == 0){
        push_front(value);
    }
    else if(index==_n){
        push_back(value);
    }
    else{
        Link *curr = _head;
        // Traverse to index-1
        for(int i = 0; i < index-1; ++i){
            curr = curr->next;
        }

        // Create a new link
        Link *nl = new Link(value);
        // new link's next should point to link at index
        nl->next = curr->next;
        // index-1's next points to new link
        curr->next = nl;
    }
}

int SinglyLinkedList::pop_front()
{
    if(empty()){
        throw std::runtime_error("Called pop_front on empty list.");
    }

    Link *tmp = _head->next;
    int out = tmp->value;

    _head->next = tmp->next;
    delete tmp;

    --_n;

    return out;
}

int SinglyLinkedList::pop_back()
{
    if(empty()){
        throw std::runtime_error("Called back on empty list.");
    }
    // index _n-1 = last item
    // index _n-2 = second last item
    Link *prev = get_link(_n - 2);
    int out = _tail->value;

    delete prev->next;
    prev->next = nullptr;
    _tail = prev;

    --_n;

    return out;
}

void SinglyLinkedList::deleteItem(int index)
{
    if(index == 0){
        pop_front();
    }
    else if(index==_n){
        pop_back();
    }
    else{
        // Traverse to index-1
        Link *curr = _head;
        // Traverse to index-1
        for(int i = 0; i < index-1; ++i){
            curr = curr->next;
        }

        // Remember address of "index"
        Link *del = curr->next;
        // prev.next points to the next one
        curr->next = del->next;
        // Delete link
        delete del;
    }
    --_n;
}

int SinglyLinkedList::size() const
{
    return _n;
}

bool SinglyLinkedList::empty() const
{
    return _n == 0;
}

Link *SinglyLinkedList::get_link(int n)
{
    Link *tmp = _head;
    for(int i = -1; i < n; ++i){
        tmp = tmp->next;
    }
    cout << "GetLink:" << n << ", v = " << tmp->value << endl;
    return tmp;
}

void SinglyLinkedList::print_list() const
{

    if(empty()){
        cout << "[] Size:" << size() << endl;
    }else{
        cout << "[";
        if(!empty()){
            Link *tmp = _head->next;
            cout << tmp->value;
            tmp = tmp->next;
            while(tmp != nullptr){
                cout << "," << tmp->value;
                tmp = tmp->next;
            }
        }
        cout << "] Size:" << size() << ", F:" << front() << ", B:" << back() << endl;
    }

}
