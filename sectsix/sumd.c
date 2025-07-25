#include <stdio.h>

/*Program that sums a series of type double numbers*/


int main(void) {
	double n, sum;
	
	printf("This program sums a series of integers.\n");
	printf("Enter integers (0 to terminate): ");
	scanf("%lf", &n);

	while(n != 0) {
		sum += n;
		scanf("%lf", &n);
	}
	printf("The sum is: %f\n", sum);

	return 0;
}
