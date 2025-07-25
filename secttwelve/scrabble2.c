/* Has a function that computes the scrabble value of a word passed as a string*/

#include <stdio.h>
#include <ctype.h> //toupper(), isspace()

#define MAX 20

int compute_scrabble_value(const char *word); 
int read_line(char str[], int n);

int main(void) {
	char str[MAX];
	
	printf("Enter a word: ");
	read_line(str, MAX);

	printf("Scrabble Value: %d\n", compute_scrabble_value(str));
		
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


int compute_scrabble_value(const char *word) {
	const char *p = word; 
	int sum = 0;

	while (*p != 0) {
		switch (toupper(*p)) {
			case 'E': case 'A': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
				sum += 1;
				break;
			case 'D': case 'G':
				sum += 2;
				break;
			case 'B': case 'C': case 'M': case 'P':
				sum += 3;
				break;
			case 'F': case 'H': case 'V': case 'W': case 'Y':
				sum += 4;
				break;
			case 'K':
				sum += 5;
				break;
			 case 'J': case 'X':
				sum += 8;
				break;
			case 'Q': case 'Z':
				sum += 10;
				break;
			default:
				break;		
		}
		p++;
	}

	return sum;
} 
