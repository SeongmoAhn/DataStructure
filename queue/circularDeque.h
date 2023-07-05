// circularDeque.h
#include "circularQueue.h"

class CircularDeque : public CircularQueue {
public:
    CircularDeque() { }

    // 아래 세 연산은 queue에서의 연산을 그대로 사용
    void addRear(int x) { enqueue(x); }
    int deleteFront() { return dequeue(); }
    int getFront() { return peek(); }

    // 아래 세 연산은 deque을 위해 새롭게 정의
    void addFront(int x) {
        if (isFull()) { errorPrint("Deque overflow"); }

        data[front] = x;
        front = (front - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
    }

    int deleteRear() {
        if (isEmpty()) { errorPrint("Deque underflow"); }

        int ret = data[rear];
        rear = (rear - 1 + MAX_QUEUE_SIZE) % MAX_QUEUE_SIZE;
        return ret;
    }

    int getRear() {
        if (isEmpty()) { errorPrint("Deque underflow"); }

        return data[rear];
    }

    void display() {
        cout << "덱 내용 : ";
        int maxIdx = (front < rear) ? rear : rear + MAX_QUEUE_SIZE;
        for (int i = front + 1; i <= maxIdx; i++) {
            cout << '[' << data[i % MAX_QUEUE_SIZE] << ']' << ' ';
        }
        cout << endl;
    }
};
