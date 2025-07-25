/*Uses functions read_word and equal_array to determine if words are anagrams (have the exact same letters in them)*/

#include <stdio.h>
#include <ctype.h> /*toupper*/
#include <stdbool.h> /*bool and true/false*/

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void) {
	int count1[26] = {0}, count2[26] = {0};
	
	printf("Enter first word: ");
	read_word(count1);
	
	printf("Enter second word: ");
	read_word(count2);

	if (equal_array(count1, count2)) printf("The words are anagrams: \n");
	else printf("The words are not anagrams\n");
	
	return 0;
}

void read_word(int counts[26]) {
	char c;

	while ((c = getchar()) != '\n') {
			c = toupper(c); 
/*c is guarenteed to be uppercase because of toupper in previous line, so c - 'A' gives the position of c in the alphabet*/
			counts[(c - 'A')]++; 
	}
}

bool equal_array(int counts1[26], int counts2[26]) {
	int i;
	for (i = 0; i < 26; i++) {
		if (counts1[i] != counts2[i]) return false;
	}
	return true;
}
