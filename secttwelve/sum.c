/* Sums command line arguments*/

#include <stdio.h>
#include <stdlib.h> /* atoi */

int main(int argc, char *argv[]) {
	
	int i, sum;

	for (i = 0; i < argc; i++) {
		sum += atoi(argv[i]);
	}

	printf("Sum: %d\n", sum);
	
	
	return 0;
} 
