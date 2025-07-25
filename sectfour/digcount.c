#include <stdio.h>
/*Program that counts digtis in number, given number has no more than four digits */



int main(void) {
	int i; // user input
	printf("Enter a number: ");
	scanf("%d", &i);	
	if (i >= 0 && i <= 9) printf("The number has 1 digit\n");
	else if (i >= 10 && i <= 99) printf("The number has 2 digits\n"); 
	else if (i >= 100 &&  i <= 999) printf("The number has 3 digits\n");
	else if (i >= 1000 && i <= 9999) printf("The numer has 4 digits\n");

	return 0;
}
