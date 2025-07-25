#include <stdio.h>

/*Program that determines balance remaining on a loan after n months, where n is an input
from the user*/


int main(void) {
	float loan, interest, payment;
	int n, m; // number of months, m is a copy of n
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");	
	scanf("%f", &interest);
	printf("Enter monthly payment: ");
	scanf("%f", &payment);
	printf("Enter amount of months: ");
	scanf("%d", &n);
	m = n;
	interest /= 100;
	while (n > 0) {
		loan = loan + (interest/12 * loan);
		loan -= payment;
		printf("Balance remaining after month %d: %.2f\n", (m-n) + 1, loan);
		--n;
	}

	return 0;
}
