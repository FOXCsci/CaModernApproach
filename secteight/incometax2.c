/*Uses a function to return income tax due, based on taxable income*/

#include <stdio.h>

double income_tax(double income);

int main(void) {
	double income; 
	printf("Enter taxable income: ");
	scanf("%lf", &income);
	printf("Tax due: %.2f\n", income_tax(income));


	return 0;
}

double income_tax(double income) {
	double due;
	if (income < 750) due = 0.01 * income;
	else if (income >= 750 && income < 2250) due = (income * 0.02) + 7.50;
	else if (income >= 2250 && income < 3750) due = (income * 0.03) + 37.50;
	else if (income >= 3750 && income < 5250) due = (income * 0.04) + 82.50;
	else if (income >= 5250 && income < 7000) due = (income * 0.05) + 142.50;
	else due = (0.06 * income) + 230.0;
	
	return due;
}
