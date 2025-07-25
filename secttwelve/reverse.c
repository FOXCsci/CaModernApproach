/* Program that reverses the command line arguments given, if given a and b, will print b and a*/

#include <stdio.h>

int main(int argc, char *argv[]) {
	int i;

	for (i = argc - 1; i >= 1; i--) {
		printf("%s ", argv[i]);
	}
	
	printf("\n");
			
	return 0;
}
