/*Sorts an array by using a function selection sort, which finds the largest element in an array, and puts it atthe end of the array, 
and then calls itself recursively for the rest of the elements in the array*/

#include <stdio.h>

#define N 10

void selection_sort(int a[], int n);

int main(void) {
	int i, arr[N] = {0};
	printf("Enter a series of 10 integers to be sorted: ");
	/*store inputs in array*/
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}
	selection_sort(arr, N - 1);
	printf("Sorted numbers: ");
	for (i = 0; i < N; i++) {
		printf("%d ", arr[i]);
	} 	
	printf("\n");
	
	return 0;
}

void selection_sort(int a[], int n) {
	if (n <= 1) return;
	int i, index_largest = 0, temp;
	/*Find largest element*/
	for (i = 0; i <= n; i++) {
		if (a[i] > a[index_largest]) index_largest = i;
	}
	/*Swap largest element with last element*/
	temp = a[n];
	a[n] = a[index_largest];
	a[index_largest] = temp;
	selection_sort(a, n-1);
}
