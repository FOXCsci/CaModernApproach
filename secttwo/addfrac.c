#include <stdio.h>
/* Program that adds fractions from user input, and allows for spaces 
between slashes dividing numrator and denominator*/
int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	printf("Enter two fractions seperated by a plus sign: ");
	scanf("%d/%d+%d/%d", &num1, &denom1, &num2, &denom2);
	result_num = num1 * denom2 + num2 * denom1;
	result_denom = denom1 * denom2;
	printf("The sum is %d/%d\n", result_num, result_denom);
	return 0;
}
