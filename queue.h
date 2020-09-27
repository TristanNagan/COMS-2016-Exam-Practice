#ifndef QUEUE
#define QUEUE
#include <iostream>

#include <deque>

class Queue
{
public:
    void enqueue(int val);
    int  dequeue();
    int  peek();
    int  size() const;
    bool empty() const;
private:
    // http://en.cppreference.com/w/cpp/container/deque
    // http://stackoverflow.com/questions/6292332/what-really-is-a-deque-in-stl
    std::deque<int> data;
};

#endif // QUEUE

