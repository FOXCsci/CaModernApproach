/* Function, max_min finds the smallest and largest elements of an array and stores them in pointers*/

#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void) {
	int big, small, i;
	int arr[N];
	printf("Enter %d numbers: ", N);
	
	for (i = 0; i < N; i++) {
		scanf("%d", &arr[i]);
	}

	max_min(arr, N, &big, &small);

	printf("Largest: %d\n", big); 
	printf("Smallest: %d\n", small);
 
	return 0;
}


void max_min(int a[], int n, int *max, int *min) {
	int *p;

	*min = a[0];
	*max = *min;
	for (p = &a[1]; p <= &a[n-1]; p++) {
		if (*p > *max) *max = *p;
		else if (*p < *min) *min = *p;
	}	
}
