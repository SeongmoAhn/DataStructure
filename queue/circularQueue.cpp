#include <iostream>
using namespace std;
#define MAX_QUEUE_SIZE 100

inline void errorPrint(const char *message) { cout << message << endl; exit(1); }

class CircularQueue {
protected:
    int front;
    int rear;
    int data[MAX_QUEUE_SIZE];

public:
    CircularQueue() { front = rear = 0; }

    bool isEmpty() { return front == rear; }
    bool isFull() { return ((rear + 1) % MAX_QUEUE_SIZE) == front; }

    void enqnene(int x) {
        if (isFull()) errorPrint("Queue overflow");

        rear = (rear + 1) % MAX_QUEUE_SIZE;
        data[rear] = x;
    }

    int dequeue() {
        if (isEmpty()) errorPrint("Queue underflow");

        front = (front + 1) % MAX_QUEUE_SIZE;
        return data[front];
    }
    int peek() {
        if (isEmpty()) errorPrint("Queue underflow");

        return data[(front + 1) % MAX_QUEUE_SIZE];
    }

    void display() {
        cout << "큐 내용 : ";
        int maxIdx = (front < rear) ? rear : rear + MAX_QUEUE_SIZE;
        for (int i = front + 1; i <= maxIdx; i++) {
            cout << '[' << data[i] << ']' << ' ';
        }
        cout << endl;
    }
};

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
