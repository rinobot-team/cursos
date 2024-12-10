#include "Stack.hpp"

#include <iostream>

Stack::Stack() {}

void Stack::push(const int element) {
    stackBody.push_back(element);
}

void Stack::pop() {
    if (isEmpty()) {
        std::cout << "Stack underflow: stack is empty" << std::endl;
        return;
    }

    stackBody.pop_back();
}

int Stack::top() {
    if (isEmpty()) {
        std::cout << "Stack is empty" << std::endl;
        return;
    }

    return stackBody.back();
}

bool Stack::isEmpty() {
    return stackBody.empty();
}