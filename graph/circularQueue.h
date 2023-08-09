// circularQueue.h
#include <iostream>
using namespace std;
#define MAX_QUEUE_SIZE 100

class CircularQueue {
protected:
    int front;
    int rear;
    int data[MAX_QUEUE_SIZE];

public:
    CircularQueue() { front = rear = 0; }

    bool isEmpty() { return front == rear; }
    bool isFull() { return ((rear + 1) % MAX_QUEUE_SIZE) == front; }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue overflow" << endl;
            exit(1);
        }

        rear = (rear + 1) % MAX_QUEUE_SIZE;
        data[rear] = x;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue underflow" << endl;
            exit(1);
        }

        front = (front + 1) % MAX_QUEUE_SIZE;
        return data[front];
    }
    int peek() {
        if (isEmpty()) {
            cout << "Queue underflow" << endl;
            exit(1);
        }

        return data[(front + 1) % MAX_QUEUE_SIZE];
    }

    void display() {
        cout << "큐 내용 : ";
        int maxIdx = (front < rear) ? rear : rear + MAX_QUEUE_SIZE;
        for (int i = front + 1; i <= maxIdx; i++) {
            cout << '[' << data[i % MAX_QUEUE_SIZE] << ']' << ' ';
        }
        cout << endl;
    }
};
