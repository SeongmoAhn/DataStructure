// circularQueue.h
#include <iostream>
#include "BinaryNode.h"
using namespace std;
#define MAX_QUEUE_SIZE 100

inline void errorPrint(const char *message) { cout << message << endl; exit(1); }

class CircularQueue {
protected:
    int front;
    int rear;
    BinaryNode *data[MAX_QUEUE_SIZE];

public:
    CircularQueue() { front = rear = 0; }

    bool isEmpty() { return front == rear; }
    bool isFull() { return ((rear + 1) % MAX_QUEUE_SIZE) == front; }

    void enqueue(BinaryNode *node) {
        if (isFull()) errorPrint("Queue overflow");

        rear = (rear + 1) % MAX_QUEUE_SIZE;
        data[rear] = node;
    }

    BinaryNode *dequeue() {
        if (isEmpty()) errorPrint("Queue underflow");

        front = (front + 1) % MAX_QUEUE_SIZE;
        return data[front];
    }
    BinaryNode *peek() {
        if (isEmpty()) errorPrint("Queue underflow");

        return data[(front + 1) % MAX_QUEUE_SIZE];
    }
};
