#include <stdio.h>

/*Program that prints sizeof values for multiple types*/

int main(void) {
	printf("Size of int: %d bytes\n", sizeof(int));
	printf("Size of short: %d bytes\n", sizeof(short));
	printf("Size of long: %d bytes\n", sizeof(long)); 
	printf("Size of float: %d bytes\n", sizeof(float));
	printf("Size of double: %d bytes\n", sizeof(double));
	printf("Size of long double: %d bytes\n", sizeof(long double));	
	return 0;
}	
