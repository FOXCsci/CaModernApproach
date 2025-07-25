#include <stdio.h>

/*Program that determines the largest integer from a series of integeres entered by the 
user*/

int main(void) {
	float i, largest; // i is the user input, largest is the current largest number
	largest = 0.0f;
	for(;;) {
		printf("Enter a number: ");
		scanf("%f", &i);
		if (0 >= i) break;
		else if (i > largest) largest = i;
	}
	printf("Largest Number was %f\n", largest);
	return 0;
}
