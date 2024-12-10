#include "Queue.hpp"

#include <iostream>

Queue::Queue() {}

void Queue::enqueue(int value) {
    queueBody.push_back(value);
}

void Queue::dequeue() {
    if (empty()) {
        std::cout << "Queue underflow: cannot dequeue from an empty queue" << std::endl;
    }
    queueBody.erase(queueBody.begin());
}

int Queue::front() const {
    if (empty()) {
        std::cout << "Empty list, no front element" << std::endl;
    }
    return queueBody.front();
}

bool Queue::empty() const {
    return queueBody.empty();
}
