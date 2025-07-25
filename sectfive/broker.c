#include <stdio.h>

/* Calculates a brokers commision*/

int main(void) {
	float commision, value; 
	
	for(;;) {
	printf("Enter value of trade: ");
	scanf("%f", &value);
	if (value == 0) return 0; 
	else if (value < 2500.00f) commision = 30.00f + 0.017f * value;
	else if (value < 6250.00f) commision = 56.00f + 0.0066f * value;
	else if (value < 20000.00f) commision = 76.00f + 0.0034f * value;
  	else if (value < 50000.00f) commision = 100.00f + 0.0022 * value;
	else if (value < 500000.00f) commision = 155.00f + 0.0011f * value;	
	else commision = 255.00f + 0.0009f * value;
	printf("Commision:  $%.2f\n\n", commision);
	}
}
