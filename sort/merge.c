// merge.c
#include "array.h"
#define SIZE 20
#define MOD 100

void merge(int arr[], int left, int mid, int right) {
    int i, j, k = left, l;
    int sorted[SIZE];

    for (i = left, j = mid + 1; i <= mid && j <= right; ) {
        sorted[k++] = (arr[i] <= arr[j]) ? arr[i++] : arr[j++];
    }

    if (i > mid)
        for (l = j; l <= right; l++, k++)
            sorted[k] = arr[l];
    else
        for (l = i; l <= mid; l++, k++)
            sorted[k] = arr[l];

    for (l = left; l <= right; l++) 
        arr[l] = sorted[l];
#ifdef CHECK
    printf("left: %2d, right: %2d => ", left, right);
    for (i = left; i <= right; i++)
        printf("%d ", arr[i]);
    printf("\n");
#endif 
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int arr[SIZE];

    getRandomArray(arr, SIZE, MOD);
    printArray(arr, SIZE);

    mergeSort(arr, 0, SIZE - 1);
    printArray(arr, SIZE);

    return 0;
}
