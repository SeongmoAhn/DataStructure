// sequential.c
#include "array.h"
#define SIZE 20
#define MOD 100

int sequentialSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[SIZE];
    int key;
    int keyIdx;

    getRandomArray(arr, SIZE, MOD);
    printf("[Sequential Search]\n");
    printArray(arr, SIZE);

    printf("Input KEY value => ");
    scanf("%d", &key); printf("\n");

    keyIdx = sequentialSearch(arr, SIZE, key);
    if (keyIdx >= 0)
        printPointer(arr, SIZE, keyIdx);
    else
        printf("KEY value is not in arr\n");

    return 0;
}
