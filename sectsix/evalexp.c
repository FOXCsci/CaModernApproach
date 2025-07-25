#include <stdio.h>

/*Program that evaluates an expression from left to right(no order of operation)*/

int main(void) {
	char op; /*Operator*/
	float num1, num2; /*Operands and result*/
	
	printf("Enter an expression: ");
	scanf("%f", &num1);

	while((op = getchar()) != '\n') {			
		scanf("%f", &num2);

		switch(op) {
			case '+':
				num1 += num2;
				break;
			case '-':
				num1 -= num2;
				break;
			case '*':
				num1 *= num2;
				break;
			case '/':
				num1 /= num2;
				break;
			default:
				break;
		}
	}
	printf("Value of expression: %1f\n", num1);	

	return 0;
}
