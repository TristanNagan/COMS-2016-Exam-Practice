#include "queue.h"
#include <stdexcept>
#include <iostream>

void Queue::enqueue(int val)
{
    data.push_back(val);
}

int Queue::dequeue()
{
    int out = data.front();
    data.pop_front();
    return out;
}

int Queue::peek()
{
    return data.front();
}

int Queue::size() const
{
    return data.size();
}

bool Queue::empty() const
{
    return data.empty();
}
