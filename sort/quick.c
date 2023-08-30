// quick.c
#include "array.h"
#define SIZE 6
#define MOD 100

void quickSort(int arr[], int start, int end){
	if(start >= end) return;
	
	int pivot = start;
	int left = pivot + 1;
	int right = end;
#ifdef CHECK
    printf("<BEFORE> pivot : %2d, arr[pivot] : %2d => ", pivot, arr[pivot]);
    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n");
#endif 
	
	while(left <= right){
		while(left <= end && arr[left] <= arr[pivot])
			left++;

		while(right > start && arr[right] >= arr[pivot])
			right--;
		
		if(left >= right) break;
#ifdef CHECK
    printf("left  : %2d, arr[left]  : %2d, right : %2d, arr[right] : %2d\n", left, arr[left], right, arr[right]);
#endif
        swap(&arr[left], &arr[right]);
	}
	
#ifdef CHECK
    printf("pivot : %2d, arr[pivot] : %2d, right : %2d, arr[right] : %2d\n", pivot, arr[pivot], right, arr[right]);
#endif
    swap(&arr[right], &arr[pivot]);

#ifdef CHECK
    printf("<AFTER>  pivot : %2d, arr[pivot] : %2d => ", pivot, arr[pivot]);
    for (int i = 0; i < SIZE; i++)
        printf("%d ", arr[i]);
    printf("\n\n");
#endif 
	
	quickSort(arr, start, right - 1);
	quickSort(arr, right + 1, end);
}
	
int main() {
    int arr[SIZE] = {3, 5, 4, 1, 2, 6};

    // getRandomArray(arr, SIZE, MOD);
    printArray(arr, SIZE);

    quickSort(arr, 0, SIZE - 1);
    printArray(arr, SIZE);

    return 0;
}
