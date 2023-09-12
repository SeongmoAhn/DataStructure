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
        int temp;
        temp = rand() % mod + 1;
        while (temp < 10 || temp >= 100)
            temp = rand() % mod + 1;
        arr[i] = temp;
    }
}

void printPointer(int arr[], int size, int keyIdx) {
    char str[512] = {0};
    int pos;
    int len;
    int cnt = 0;

    for (pos = 0; pos < size; pos++)
        sprintf(str + (3 * pos), "%d ", arr[pos]);

    len = strlen(str);
    printf("%s\n", str);

    // for (pos = 0; pos < len; pos++) {
    //     if (str[pos] == ' ') cnt++;
    //     if (cnt == keyIdx) break;
    // }

    pos = 3 * (keyIdx) + 1;
    for (int i = 0; i < pos; i++)
        printf(" ");
    printf("ㄴSearch succeed\n");
}

int compare(const void *p, const void *q) {
    if (*(int *)p > *(int *)q) return 1;
    else if (*(int *)p < *(int *)q) return -1;
    return 0;
}
