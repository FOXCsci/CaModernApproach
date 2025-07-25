#include <stdio.h>

/*Imrpoved version of a previous program that reversed the digits of a number,
can now reverse a number of any size*/

int main(void) {
	int i, last; // i is user input, last is the current last digit of i
	 
	printf("Enter integer to be reversed: ");
	scanf("%d", &i);
	printf("Reversed Number: ");
	do {
		last = i%10;
		i /= 10;
		printf("%d", last);
	} while(i > 0); 
	printf("\n");
	
	return 0;
}
