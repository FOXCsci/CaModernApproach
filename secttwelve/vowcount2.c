/* Counts the amount of vowels in a string*/

#include <stdio.h>
#include <ctype.h> //toupper

#define MAX 100

int read_line(char str[], int n);
int compute_vowel_count(const char *sentence);

int main(void) {
	char str[MAX];
		
	printf("Enter a sentnence or word: ");
	read_line(str, MAX);
	
	printf("Vowel count: %d\n", compute_vowel_count(str));		

	
	return 0;
}


int read_line(char str[], int n) {	
	char ch;
	int i = 0;

	while ((ch = getchar()) != '\n') {
		if (i < n && isspace(ch) == 0) {
			str[i++] = ch;
		}
	}
	str[i] = '\0';
	return i;
}

int compute_vowel_count(const char *sentence) {
	int sum = 0;
	
	while (*sentence) {
		switch (toupper(*sentence)) {
			case 'E': case 'A': case 'I': case 'O': case 'U':
				sum++;
				break;
			default:
				break;
		}
		sentence++;
	}
	
	return sum;
}
