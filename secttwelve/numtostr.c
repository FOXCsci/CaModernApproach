/* Takes a two digit number as input and prints the english word for that number*/

#include <stdio.h>


int main(void) {
	char *tens[10] = {"Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
	char *teens[10]= {"Ten", "Eleven", "Tweleve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
	char *ones[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
	int i; 
	
	printf("Enter a two-digit number: ");
	scanf("%2d", &i);
	
	if ( i / 10 == 1) {
		printf("%s\n", teens[i%10]);
	}

	else if ((i / 10) > 1) {
		if (i%10 == 0) {
			printf("%s\n", tens[(i/10) - 2]); 	
		}
		
		else {
			printf("%s-%s\n", tens[(i/10) - 2], ones[i%10]);
		}	
	}

	else {
		printf("%s\n", ones[i%10]);
	}

	
	return 0;	
}
