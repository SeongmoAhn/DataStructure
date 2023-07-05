// circularQueue.cpp
#include "circularQueue.h"

int main() {
    CircularQueue queue;
    for (int i = 1; i < 10; i++) {
        queue.enqnene(i);
    }
    queue.display();

    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    
    queue.display();
}
