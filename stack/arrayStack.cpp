#include <iostream>
#include <cstdlib>
using namespace std;
#define MAX_STACK_SIZE 20

inline void errorPrint(const char *message) { cout << message << endl; exit(1); }

class ArrayStack {
    int top; // 스택 요소의 개수
    int data[MAX_STACK_SIZE];

public:
    ArrayStack() { top = -1; } // 스택 생성 시 top을 -1로 초기화
    ~ArrayStack() {}

    bool isEmpty() { return top == -1; }
    bool isFull() { return top == (MAX_STACK_SIZE - 1); }

    void push(int x) {
        if (isFull()) errorPrint("Stack overflow");

        data[++top] = x;
    }

    int pop() {
        if (isEmpty()) errorPrint("Stack underflow");

        return data[top--];
    }
    int peek() {
        if (isEmpty()) errorPrint("Stack underflow");

        return data[top];
    }

    void display() {
        cout << "[스택의 항목 수] : " << top + 1 << endl;
        for (int i = 0; i <= top; i++)
            cout << '<' << data[i] << "> ";
        cout << endl << endl;
    }
};

int main() {
    ArrayStack stack;

    for (int i = 1; i < 10; i++) stack.push(i);
    stack.display();
    stack.pop();
    stack.pop();
    stack.pop();
    stack.display();

    return 0;
}
