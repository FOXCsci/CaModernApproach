/* Has a function, pay_amount, that shows the least amount of bills needed to make a payment*/

#include <stdio.h>

/* Prototypes */
void pay_amount(int dollars, int *twenties, int *tens, int *fives,  int *ones);

int main(void) {
	int dollars, twenties, tens, fives, ones;
	
	printf("Enter dollar amount: ");
	scanf("%d", &dollars);
	
	pay_amount(dollars, &twenties, &tens, &fives, &ones);

	printf("Twenties: %d\nTens: %d\nFives: %d\nOnes: %d\n", twenties, tens, fives, ones);

	return 0;
}

/*
* pay_amound: determines the bills needed to make a payment, and the values in the address the pointers
* 			  are pointing to.
*/

void pay_amount(int dollars, int *twenties, int *tens, int *fives,  int *ones) {
	*twenties = dollars / 20;
	dollars -= *twenties * 20;
	*tens = dollars / 10;
	dollars -= *tens * 10;
	*fives = dollars / 5;
	dollars -= *fives * 5;
	*ones = dollars;	
}
