/*Determines if two words are anagrams (permutations of the same letters)*/

#include <stdio.h>
#include <ctype.h> /*isalpha and toupper*/
#include <stdbool.h> /*bool and true/fakse*/

int main(void) {
	char c;
	int letter_count[26] = {0};
	int i = 0; 
	bool letters = true;  /*letters is used to store true false value of all values in letter_count are 0 */
	
	printf("Enter first word: ");
	for(i = 0; i < 26 && (c = getchar()) != '\n'; i++) {
			c = toupper(c);
			if ((c - 'A') % 26 < 26 && isalpha(c)) letter_count[(c - 'A') % 26]++;	
	}	
	
	printf("Enter second word: ");	
	for(i = 0; i < 26 && (c = getchar()) != '\n'; i++) {
			c = toupper(c);
			if ((c - 'A') % 26 < 26 && isalpha(c)) letter_count[(c - 'A') % 26]--;	
	}

	for(i = 0; i < 26; i++) {
		if (letter_count[i] != 0) {
			letters = false;		
			break;
		}
	} 
	
	if (letters) printf("The words are anagrams\n");
	else printf("The words are not anagrams\n");
			
	return 0;
}
