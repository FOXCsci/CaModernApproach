#include <stdio.h>
#include <math.h>

#define DIFF_CONSTANT 0.00001
/*Program that uses newton's method to compute a square root*/

int main(void) {
	double x, y1, y2 =1 , result; /*x is user input, y1 is a "guess" number used for the 
method y2 stores the new number, result is the approximate result*/
	printf("Enter a positive number: ");
	scanf("%lf", &x);
	while(fabs(y2 - y1) > (DIFF_CONSTANT * y2)) {
		y1 = y2;
		y2 = ((x/y2) + y1)/2;
	}	
	result = y2;
	printf("Square root: %f\n", result);
	
	return 0;
}
