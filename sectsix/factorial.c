#include <stdio.h>

/*Program that compututes the factorial of an integer */

/**** MAX n VALUE FOR val FOR EACH TYPE: ****/
/*
short: n = 7, val = 5040 
int: n = 16, val = 2004189184	
long: n = 20, val = 2432902008176640000
long long: n =20, val = 2432902008176640000 
float: n = 34 (val will be omitted for float, double, and long double as values are very large).
double: n = 170 
long double: n = 1754 
*/


int main(void) {
	int n, j; /*User input, copy of n*/
    long double val = 1.0; /*Value of factorial*/
	

	printf("Ener a positive integer: ");
	scanf("%d", &n);
	j = n;
	while(j > 0) {
		val *= j;
		--j;
	}
	printf("Factorial of %d: %Lf\n", n, val);

	return 0;
}
