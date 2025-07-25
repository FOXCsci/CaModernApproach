#include <stdio.h>

/*Prints all even squares from 1 to n*/


int main(void) {
	int n, i; // n is user input, i is a counter
	printf("Enter a value: ");
	scanf("%d", &n);
	for(i = 1; n >= i; i++) {
		if ((i*i)%2 == 0) {
			printf("%d\n", i*i);
		}
	}

	return 0; 

}
