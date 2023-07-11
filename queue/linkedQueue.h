// linkedQueue.h
#include "Node.h"

class LinkedQueue {
    Node *front;
    Node *rear;

public:
    LinkedQueue() : front(NULL), rear(NULL) {}
    ~LinkedQueue() { while (!isEmpty()) delete dequeue(); }

    bool isEmpty() { return front == NULL; }

    void enqueue(Node *newNode) {
        if (isEmpty()) front = rear = newNode;
        else {
            rear->setLink(newNode);
            rear = newNode;
        }
    }

    Node* dequeue() {
        if (isEmpty()) return NULL;
        else {
            Node *ret = front;
            front = front->getLink();
            if (front == NULL) rear = NULL;
            return ret;
        }
    }
    Node* peek() { return front; }

    void display() {
        cout << "[Linked Queue]" << endl;
        for (Node *cur = front; cur != NULL; cur = cur->getLink()) {
            cur->display();
        }
    }
};
