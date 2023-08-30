// insertion.c
#include "array.h"
#define SIZE 10
#define MOD 100

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int idx;
        for (idx = i - 1; idx >= 0 && arr[idx] > key; idx--) {
            arr[idx + 1] = arr[idx];
        }
        arr[idx + 1] = key;
#ifdef CHECK
    for (int i = 0; i < SIZE; i++) {
        printf("%3d", arr[i]);
    }
    printf("\n");
#endif
    }
}

int main() {
    int arr[SIZE];

    getRandomArray(arr, SIZE, MOD);
    printArray(arr, SIZE);

    insertionSort(arr, SIZE);
    printArray(arr, SIZE);

    return 0;
}
