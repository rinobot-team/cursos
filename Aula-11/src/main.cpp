#include <iostream>
#include "Stack.hpp"
#include "Queue.hpp"

int main() {
    Stack* stack = new Stack();
    stack->push(10);
    stack->push(3);
    stack->push(9);
    stack->pop();
    std::cout << "Topo da stack: " << stack->top() << std::endl;

    Queue* queue = new Queue();
    queue->enqueue(34);
    queue->enqueue(-13);
    queue->enqueue(49);
    queue->dequeue();
    std::cout << "Frente da fila: " << queue->front() << std::endl;

    return 0;
}
