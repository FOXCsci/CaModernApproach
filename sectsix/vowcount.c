#include <stdio.h>

/*Program that counts the number of voewls in a sentence*/

int main(void) {
	int vowels; /*Vowel count*/
	char c; /*Input character*/
	printf("Enter a sentence: ");
	do {
		c = getchar();
		switch(c) {
			case 'a': case 'A': case 'e': case 'E': case 'i': case 'I': case 'o': case 'O': 
			case 'u': case 'U': 
				vowels += 1;
				break; 
			default:
				break; 
		}
	} while(c != '\n'); 
	
	printf("Your sentence contains %d vowels\n", vowels);	

	return 0;
} 
