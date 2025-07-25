#include <stdio.h>

/*Program that takes three-digit number from user and reverses it*/
/*This is a modified version of the original program, which only took two-digit inputs */

int main(void) {
	int i; // hundreds digit
	int j; // tens digit
	int k; // ones digit
	printf("Enter a three-digit number: ");	
	scanf("%1d%1d%1d", &i, &j, &k);
	printf("The reversal: %d%d%d\n", k, j, i);	

	return 0;
}
