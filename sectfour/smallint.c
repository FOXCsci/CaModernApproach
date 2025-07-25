#include <stdio.h>

/*Program that takes 4 integers from user and finds the largest and smallest of the 
integers*/


int main(void) {
	int i, j, k, l, min1, max1, min2, max2;
	printf("Enter four integers(each followed by a space: ");
	scanf("%d %d %d %d", &i, &j, &k, &l);
	if(i > j) {
		max1 = i;
		min1 = j;
	}
	else {
		max1 = j;
		min1 = i;
	}

	if(k > l) {
		max2 = k;
		min2 = l;
	}	
	else {
		max2 = l;
		min2 = k;
	}

	if(max1 > max2) printf("Largest: %d\n", max1);
	else printf("Largest: %d\n", max2);

	if(min1 < min2) printf("Smallest: %d\n", min1);
	else printf("Smallest: %d\n", min2);


	return 0;
}
