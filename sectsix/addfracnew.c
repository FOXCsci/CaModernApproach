#include <stdio.h>

/*Program that alows user to add, subtract, multiply or divide two fractions*/ 

int main(void) {
	int num1, num2, denom1, denom2, result_num, result_denom; /*Numerators and denominators*/
	char op; /*Operator*/		

	printf("Enter two fractions seperated by an operations sign: ");
	scanf("%d/%d%c%d/%d", &num1, &denom1, &op, &num2, &denom2);
	switch(op) {
		case '+':
			result_num = num1 * denom2 + num2 * denom1;
			result_denom = denom1 * denom2;
			break;
		case '-':	
			result_num = num1 * denom2 - num2 * denom1;
			result_denom = denom1 * denom2;
			break;
		case '*':	
			result_num = num1 * num2;
			result_denom = denom1 * denom2;
			break;
		case '/':	
			result_num = num1 * denom2;
			result_denom = denom1 * num2;
			break;
		default:
			printf("Error: Invalid Operator\n");
			break;
	}
		printf("Result: %d/%d\n", result_num, result_denom);

	return 0;
}
