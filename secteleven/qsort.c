/* Quick sort algorithm, used as a refernece to make ptrqsort.c program*/

#include <stdio.h>

#define N 10


void quicksort(int a[], int low, int high);
int split(int a[], int low, int high);

int main(void) {
	int a[N], i;
	
	printf("Enter %d numbers to be sorted: ", N);
	for (i = 0; i < N; i++) {
		scanf("%d", &a[i]);
	}
		
	quicksort(a, 0, N-1);	

	printf("In sorted order: ");

	for (i = 0; i < N; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;	
}

void quicksort(int a[], int low, int high) {
	int middle;
	if (low >= high) return;
	middle = split(a, low, high);
	quicksort(a, low, middle - 1);
	quicksort(a, middle + 1, high);
}

int split(int a[], int low, int high) {
	int part_element = a[low];

	for (;;) {
		while (low < high && part_element <= a[high]) {
			high--;
		}
		if (low >= high) break;
		a[low] = a[high];
		low++;
	
		while (low < high && a[low] <= part_element) {
			low++;
		}
		if (low >= high) break;
		a[high] = a[low];
		high--;
	}
	
	a[high] = part_element;
	return high;
}
