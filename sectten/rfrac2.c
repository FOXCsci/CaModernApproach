/* Reduces a fraction in a function and stores it in a pointer argument*/
#include <stdio.h>

/* prototypes */
void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator);

int main(void) {
	int i1, j1, i2, j2;
	
	printf("Enter fraction: ");
	scanf("%d/%d", &i1, &j1);
	
	reduce(i1, j1, &i2, &j2);
	
	printf("Reduced: %d/%d\n", i2, j2);

	return 0;
}

void reduce(int numerator, int denominator, int *reduced_numerator, int *reduced_denominator) {
	int i, gcd = 0;
	for (i = 2; i <= denominator; i++) {
		if (numerator % i == 0 && denominator % i == 0) gcd = i;
	}
 
	if (gcd != 0) {
		*reduced_numerator = numerator / gcd;
		*reduced_denominator = denominator / gcd;
	}

	else {
		*reduced_numerator = numerator;
		*reduced_denominator = denominator;
	}
	
}
