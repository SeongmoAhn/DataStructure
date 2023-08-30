// bubble.c
#include "array.h"
#define SIZE 10
#define MOD 99

void bubbleSort(int arr[], int size) {
    for (int i = size - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > arr[j + 1])
                swap(&arr[j], &arr[j + 1]);
        }
#ifdef CHECK
    for (int k = 0; k < SIZE; k++)
        printf("%3d", arr[k]);
    printf("\n");
#endif
    }
}

int main() {
    int arr[SIZE];

    getRandomArray(arr, SIZE, MOD);
    printArray(arr, SIZE);

    bubbleSort(arr, SIZE);
    printArray(arr, SIZE);

    return 0;
}
