#include <stdio.h>

/* Program that prints a table of squares, but stops every 24 squares asking the user
to press enter to countinue*/


int main(void) {
	int n, i;
	char cont; // used to store user input when asked to press enter to countinue 

	printf("This program prints a table of squares.\n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	for (i = 1; i <= n; i++) { 
		if(i%24 == 0) {
			printf("Press enter to countinue: ");
			cont = getchar();
			goto retry;
			
		}
		else goto normal;
		retry: {
			cont = getchar(); 
			if (cont == '\n') 
				goto normal;
			else goto retry;
		}
		normal: 
			printf("%10d%10d\n", i, i*i);
	}
	return 0;
}
