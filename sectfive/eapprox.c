#include <stdio.h>

/*Program that approximates the constant e using 1/1! + 1/2! + ... 1/n!, until the current
term is less than a value, epsilon, given by the user*/

int main(void) {
	float e, fact, epsilon;
	int i; 
	printf("Enter max value for current term: ");
	scanf("%f", &epsilon);
	fact = 1;
	e = 1;
	for(i = 1; 1/fact >= epsilon; ++i) {
		fact *= i;
		e += 1/fact;
	}
	printf("Approximation: %f\n", e);
	return 0;
}
