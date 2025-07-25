/* Program that determines the largest word and smallest word the user has interesd. Smallest means the word would be encountered
in the dictionary earliest compared to the other strings the user entered, largest means it would be encountered lasti, the program
ends when the user entere a four letter word*/

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 20

int read_line(char str[], int n);

int main(void) {
	char largest_word[MAX_SIZE];
	char smallest_word[MAX_SIZE];
	char input[MAX_SIZE];

	printf("Enter word: ");
	read_line(input, MAX_SIZE - 1);	
	
	strcpy(largest_word, input);	
	strcpy(smallest_word, input);	
	
	for (;;) {
		printf("Enter word: ");
		read_line(input, MAX_SIZE - 1);
		if (strlen(input) == 4) {
			break;
		}
	
		if (strcmp(input, smallest_word) < 0) {
			strcpy(smallest_word, input);
		}

		else if (strcmp(input, largest_word) > 0) {
			strcpy(largest_word, input);
		}
	}

	printf("\nSmallest word: %s\n", smallest_word);
	printf("Largest word: %s\n", largest_word); 
		
	return 0;
}

int read_line(char str[], int n) {
	int ch, i = 0;
	
	while((ch = getchar()) != '\n') {
		if (i < n) { 
			str[i++] = ch;
		}
	}		
	
	str[i] = '\0'; /* Terminate string */
	return i; /* Number of characters stored*/
}
