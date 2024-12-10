#pragma once

#include <vector>

class Queue {
public:
    Queue();
    void enqueue(int value);
    void dequeue();
    int front() const; 
    bool empty() const;

private:
    std::vector<int> queueBody;
};