// binary/c
#include "array.h"
#define SIZE 20
#define MOD 100

int binarySearch(int arr[], int key, int low, int high) {
    int mid;
    if (low <= high) {
        mid = (low + high) / 2;

        if (key == arr[mid])
            return mid;
        else if (key < arr[mid])
            return binarySearch(arr, key, low, mid - 1);
        else
            return binarySearch(arr, key, mid + 1, high);
    }
    return -1;
}

int main() {
    int arr[SIZE];
    int key;
    int keyIdx;

    getRandomArray(arr, SIZE, MOD);
    qsort(arr, SIZE, sizeof(int), compare);
    printf("[Binary Search]\n");
    printArray(arr, SIZE);

    printf("Input KEY value => ");
    scanf("%d", &key); printf("\n");

    keyIdx = binarySearch(arr, key, 0, SIZE - 1);
    if (keyIdx >= 0)
        printPointer(arr, SIZE, keyIdx);
    else
        printf("KEY value is not in arr\n");

    return 0;
}
