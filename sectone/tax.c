#include <stdio.h>

int main(void) 
{
	float amount; // Starting amound
	printf("Calculate 5%% tax\nEnter an Amount: ");
	scanf("%f", &amount);
	printf("Taxed Amount: %.2f\n", amount + (amount * 0.05f));
	return 0;  
}
