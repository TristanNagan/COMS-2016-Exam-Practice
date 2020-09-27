#include "doublylinkedlist.h"
#include <stdexcept>
#include <iostream>

using namespace std;

DoublyLinkedList::DoublyLinkedList()
    : head(nullptr), tail(nullptr){
n=0;
}

DoublyLinkedList::~DoublyLinkedList()
{
    // Delete all nodes
    while(!empty()){
        pop_front();
    }
    // Delete the dummy node
    delete head;
}

bool DoublyLinkedList::empty() const
{
    return n == 0;
}

void DoublyLinkedList::push_back(int val)
{
    Link* tmp = new Link(val);
            if(head == nullptr){
                head = tmp;
                tail = tmp;
            }else{
                tmp->prev = tail;
                tail->next = tmp;
                tail = tmp;
            }
            ++n;
}

int DoublyLinkedList::pop_front()
{
    if(empty()){
        throw std::runtime_error("Called pop_front on empty list.");
    }

    Link *tmp = head->next;
    int out = tmp->value;

    head->next = tmp->next;
    delete tmp;

    --n;

    return out;
}

void DoublyLinkedList::deleteItem(int index)
{
        Link* curr = head;
                for(int i = 0; i < index; i++){
                    curr = curr->next;
                }

                if(curr->next != nullptr){
                    curr->next->prev = curr->prev;
                }else{
                    // Curr is the tail.
                    tail = curr->prev;
                }

                if(curr->prev != nullptr){
                    curr->prev->next = curr->next;
                }else{
                    head = curr->next;
                }

                delete curr;

                --n;
}

void DoublyLinkedList::print_list() const
{
        cout << "[";
        if(!empty()){
            Link *tmp = head->next;
            cout << tmp->value;
            tmp = tmp->next;
            while(tmp != nullptr){
                cout << "," << tmp->value;
                tmp = tmp->next;
            }
        }
        cout << "]"<<endl;
    }

