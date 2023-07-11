// linkedStack.h
#include "Node.h"

class LinkedStack {
    Node *top;

public:
    LinkedStack() { top = NULL; }
    ~LinkedStack() { while (!isEmpty()) delete pop(); }

    bool isEmpty() { return top == NULL; }
    
    void push(Node *newNode) {
        if (isEmpty()) top = newNode;
        else {
            newNode->setLink(top);
            top = newNode;
        }
    }

    Node* pop() {
        if (isEmpty()) return NULL;
        else {
            Node *ret = top;
            top = top->getLink();
            return ret;
        }
    }
    Node* peek() { return top; }

    void display() {
        cout << "[Linked Stack]" << endl;
        for (Node *cur = top; cur != NULL; cur = cur->getLink()) {
            cur->display();
        }
    }
};
