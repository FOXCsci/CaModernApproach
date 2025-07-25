#include <stdio.h>

int main(void) 
{
	int x; // amount
	printf("How to Pay using least amount of bills\nEnter Dollar Amount: ");
	scanf("%d", &x);

	int twenty = x/20; // amount of twenty bills
	x = x - (twenty*20); // subtract twenties from x 

	int ten = x/10;	 // repeat until line 15 for bills 10-1
	x = x - (ten*10);

	int five = x/5;
	x = x - (five*5); 

	int one = x/1;
	x = x - (one*1);

	printf("$20 bills: %d\n$10 bills: %d\n$5 bills: %d\n$1 bills: %d \n", twenty, ten, five, one);  
	return 0;
}
