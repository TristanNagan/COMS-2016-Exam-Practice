#ifndef STACK
#define STACK
#include <iostream>
#include <vector>

using std::vector;

class Stack
{
public:
public:
    void push(int val);
    int  pop();
    int  peek();
    int  size() const;
    bool empty() const;
private:
    vector<int> data;
};

#endif // STACK

