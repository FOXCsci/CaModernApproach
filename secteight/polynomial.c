/*Uses a function to compute value of polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 for a value x given by user.*/

#include <stdio.h>

double compute_polynomial(double x);

int main(void) {
	double x;
		
	printf("Computes the polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6 for a value x\n");
	printf("Enter a value for x: ");
	scanf("%lf", &x);
	printf("Result: %f\n", compute_polynomial(x));
		

	return 0;
}

double compute_polynomial(double x) {
	return ((3*(x*x*x*x*x)) + (2*(x*x*x*x)) - (5*(x*x*x)) - (x*x) + (7*x) - 6);
}
