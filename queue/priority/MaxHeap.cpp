// MaxHeap.cpp
#include <cstdlib>
#include <ctime>
#include "MaxHeap.h"

int main() {
    MaxHeap heap;
    int arr[10];

    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100;
    }

    cout << "정렬 전" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[" << arr[i] << "] ";
    } cout << endl;

    heap.heapSort(arr, 10);

    cout << "정렬 후" << endl;
    for (int i = 0; i < 10; i++) {
        cout << "[" << arr[i] << "] ";
    } cout << endl;

    return 0;
}

/*
실행 결과:
정렬 전
[0] [87] [29] [94] [20] [47] [20] [50] [11] [2]
정렬 후
[0] [2] [11] [20] [20] [29] [47] [50] [87] [94]
*/
