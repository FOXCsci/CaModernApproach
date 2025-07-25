/*Shows repeated digits in a number*/

#include <stdio.h>

int main(void) {
	int repeated[10] = {0};
	int digit, i; /*Last digit of n, loop control*/
	long n; /*User input*/
	
		
	for(;;) {
		printf("Enter a number(less than or equal to 0 to stop): ");
		scanf("%ld", &n);

		if (n > 0); /*NULL*/
		else break;	
		while (n > 0) {
			digit = n % 10;
			repeated[digit]++;
			n /= 10;	
		}
			
		printf("Digit:      0  1  2  3  4  5  6  7  8  9\n");	
		
		printf("Occurences: ");
		for(i = 0;i < 10;i++) {
			printf("%d  ", repeated[i]);
		}
		printf("\n");
		for (i = 0;i < 10; i++) repeated[i] = 0;
		digit = 0;
	}
		

	return 0;
}
