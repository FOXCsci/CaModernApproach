#include <stdio.h>


/*Program that takes user input of taxable income, and displays tax due  */ 

int main(void) {
	float income; // taxable income input from user
	float tax; // income tax due
	printf("Taxable income (in form x.yy): $");
	scanf("%f", &income);	
	if (750 >= income) tax = income*0.01;
	else if (750 < income && 2250 >= income) tax = income*0.02;	
	else if (2250 < income && 3750  >= income) tax = income*0.03;
	else if (3750 < income && 5250 >= income) tax = income*0.4;
	else if (5250 > income && 7000 >= income) tax = income*0.5;
	else tax = income*0.7;
	printf("Tax Due: %.2f\n", tax);

	return 0;	
}
