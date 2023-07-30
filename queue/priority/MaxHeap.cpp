// MaxHeap.cpp
#include "MaxHeap.h"

int main() {
    MaxHeap heap;

    heap.insert(10); heap.insert(5);
    heap.insert(30); heap.insert(8);
    heap.insert(9); heap.insert(3);
    heap.insert(7);

    heap.display();

    heap.remove(); heap.display();
    heap.remove(); heap.display();

    return 0;
}

/*
실행 결과:
Heap 내용
[30]
[9][10]
[5][8][3][7]

Heap 내용
[10]
[9][7]
[5][8][3]

Heap 내용
[9]
[8][7]
[5][3]
*/
