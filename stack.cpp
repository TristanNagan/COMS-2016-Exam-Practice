#include "stack.h"

void Stack::push(int val)
{
    data.push_back(val);
}

int Stack::pop()
{
    int out = data.back();
    // vector<T>::pop_front() just removes the front item, doesn't return it
    data.pop_back();
    return out;
}

int Stack::peek()
{
    return data.back();
}

int Stack::size() const
{
    return data.size();
}

bool Stack::empty() const
{
    return data.empty();
}
