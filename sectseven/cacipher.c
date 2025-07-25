/*Encrypts a message using a caeser cipher, where the user inputs a sentence and a shift, each letter
in the message is shifted n letters forward in the alphabet, if the letter is Z and is shifted, it
wraps back around to A*/

#include <stdio.h>
#include <ctype.h>

#define SIZE 80

int main(void) {
	char sentence[SIZE] = {0};
	char c;
	int i, n; /*n is shift*/

		
	printf("Enter a message to be encrypted: ");
	for(i = 0; i < SIZE && (c = getchar()) != '\n'; i++) {
		sentence[i] = c;	
	} 

	printf("Enter shift amount(1-25): ");
	scanf("%d", &n);


	for (i = 0; sentence[i] != 0 && i < SIZE; i++) {
		if (toupper(sentence[i]) == sentence[i] && sentence[i] >= 'A' && sentence[i] <= 'Z') {
			sentence[i] = ((sentence[i] - 'A') + n) % 26 + 'A';
		}
		else if (sentence[i] >= 'a' && sentence[i] <= 'z') {
			sentence[i] = ((sentence[i] - 'a') + n) % 26 + 'a';
		}
		putchar(sentence[i]);
	}
 

	putchar('\n');

	return 0;
}
