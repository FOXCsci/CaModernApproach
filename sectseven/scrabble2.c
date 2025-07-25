/*Program that gets the scrabble value of a word, using an array of values*/

#include <stdio.h>
#include <ctype.h>

int main(void) {
	/*Each value corresponds with a letter of the alphabet, 0 = A, 1 = B, and so forth0*/
	char scrabble_vals[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 
								1, 1, 1, 4, 4, 8, 4, 10}; /*S-Z*/
	int value, c_pos; /*c_pos is char c as int to get position of char in scrabble_vals*/
	char c; /*User input*/
	
	printf("Enter a word: ");	
	
	while((c = getchar()) != '\n') {
		c = toupper(c);
		if(c < 'A' || c > 'Z') break;
		c_pos = (int) (c - 'A');
		value += scrabble_vals[c_pos];
	}
	
	printf("Scrabble value: %d\n", value);

	return 0;
}
