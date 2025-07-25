#include <stdio.h>

int main(void)
{
	float loan; // starting amount of loan
	float interest; // annual interest rate
	float payment ; // monthly payments
	float m1; // balance after first month
	float m2; // after second month
	float m3; // after third month
	printf("Enter amount of loan: ");
	scanf("%f", &loan);
	printf("Enter interest rate: ");
	scanf("%f", &interest);
	printf("Enter montly payment: ");
	scanf("%f", &payment);

	interest = (interest/100)/12;
	m1 = (loan + loan*interest) - payment;
	m2 = (m1 + m1*interest) - payment;
	m3 = (m2 + m2*interest) - payment;

	printf("Balance remaining after first payment: %.2f\nBalance remaining after second payment: %.2f\nBalance remaining after third payment: %.2f\n", m1, m2, m3);
			
	return 0;
}
