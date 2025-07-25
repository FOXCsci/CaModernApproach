#include <stdio.h>


int main(void)
{
	int x; // Value for x
	printf("Plug in a value for polynomial 3x^5 + 2x^4 - 5x^3 - x^2 + 7x - 6\nEnter Value for x: ");
	scanf("%d", &x);
	printf("Polynomial Evaluates to %d when x is %d\n",  x*x*x*x*(3*x*x + 2) -5 -1 + 7 - 6, x ); 
}
