// MaxHeap.h
#include "HeapNode.h"
#define MAX_ELEMENT 200

inline void errorPrint(const char *message) { cout << message << endl; exit(1); }

class MaxHeap {
    HeapNode node[MAX_ELEMENT];
    int size;

public:
    MaxHeap() : size(0) {}

    bool isEmpty() { return size == 0; }
    bool isFull() { return size == (MAX_ELEMENT - 1); }

    HeapNode getParent(int idx) { return node[idx / 2]; }
    HeapNode getLeftChild(int idx) { return node[idx * 2]; }
    HeapNode getRightChild(int idx) { return node[idx * 2 + 1]; }

    void insert(int key) {
        if (isFull()) errorPrint("Heap Overflow");

        int i = ++size;
        while (i != 1 && key > getParent(i).getKey()) {
            node[i] = getParent(i);
            i /= 2;
        }
        node[i].setKey(key);
    }

    HeapNode remove() {
        if (isEmpty()) errorPrint("Heap Underflow");

        HeapNode ret = node[1];
        HeapNode last = node[size--];
        int parent = 1;
        int child = 2;
        
        while (child <= size) {
            if (child < size && getLeftChild(parent).getKey() < getRightChild(parent).getKey())
                child++;
            if (last.getKey() >= node[child].getKey())
                break;

            node[parent] = node[child];
            parent = child;
            child *= 2;
        }
        node[parent] = last;
        return ret;
    }

    HeapNode find() { return node[1]; }

    void heapSort(int arr[], int size) {
        MaxHeap heap;

        for (int i = 0; i < size; i++) {
            heap.insert(arr[i]);
        }

        for (int i = size - 1; i >= 0; i--) {
            arr[i] = heap.remove().getKey();
        }
    }

    void display() {
        cout << "Heap 내용";
        for (int i = 1, level = 1; i <= size; i++) {
            if (i == level) {
                cout << endl;
                level *= 2;
            }
            node[i].display();
        }
        cout << endl << endl;
    }
};
