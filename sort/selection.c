// selection.c
#include "array.h"
#define SIZE 10
#define MOD 100

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        int least = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[least])
                least = j;
        }
        swap(&arr[i], &arr[least]);
    }
}

int main() {
    int arr[SIZE];

    getRandomArray(arr, SIZE, MOD);
    printArray(arr, SIZE);

    selectionSort(arr, SIZE);
    printArray(arr, SIZE);

    return 0;
}
