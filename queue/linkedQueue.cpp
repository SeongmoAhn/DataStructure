// linkedQueue.cpp
#include "linkedQueue.h"

int main() {
    LinkedQueue queue;
    queue.enqueue(new Node(20230001, "안성모", "컴퓨터학부"));
    queue.enqueue(new Node(20230002, "이세상", "경제학과"));
    queue.enqueue(new Node(20230003, "이윤성", "소프트웨어학과"));
    queue.display();
    cout << endl;

    Node *dequeueNode = queue.dequeue();
    cout << "[dequeue()된 노드]" << endl;
    dequeueNode->display();
    delete dequeueNode;
    cout << endl;

    queue.display();
}
