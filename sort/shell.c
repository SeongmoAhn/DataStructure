// shell.c
#include "array.h"
#define SIZE 20
#define MOD 100

void sortGapInsertion(int arr[], int first, int last, int gap) {
    int i, j, key;
    for (i = first + gap; i <= last; i += gap) {
        key = arr[i];
        for (j = i - gap; j >= first && key < arr[j]; j -= gap) {
            arr[j + gap] = arr[j];
        }
        arr[j + gap] = key;
    }
}

void shellSort(int arr[], int size) {
    for (int gap = size / 2; gap > 0; gap /= 2) {
#ifdef CHECK
    printf("Shell => ");
    printArray(arr, size);
#endif
        if ((gap % 2) == 0) gap++;
        for (int i = 0; i < gap; i++) {
            sortGapInsertion(arr, i, size - 1, gap);
        }
    }
}

int main() {
    int arr[SIZE];

    getRandomArray(arr, SIZE, MOD);
    printArray(arr, SIZE);

    shellSort(arr, SIZE);
    printArray(arr, SIZE);

    return 0;
}
