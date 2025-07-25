#include <stdio.h>

/*Program that calculates average word length of sentence*/

int main(void) {
	char c; /*Current character in input*/
	float avg, total = 1; /*Average word length, total number of words*/
	
	printf("Enter a sentence: ");

	while((c = getchar()) != '\n') {
		if (c == ' ') ++total;
		else if (c != ' ') ++avg;
	}

	printf("Average word length: %.1f\n", avg/total);
	
	return 0;
}
