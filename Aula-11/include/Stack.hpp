#pragma once

#include <vector>

class Stack {
public:
    Stack();
    void push(const int element);
    void pop();
    int top();
    bool isEmpty();

private:
    std::vector<int> stackBody;
};