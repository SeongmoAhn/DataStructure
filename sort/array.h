// array.h
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void getRandomArray(int arr[], int size, int mod) {
    srand(time(NULL));
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % mod + 1;
    }
}
