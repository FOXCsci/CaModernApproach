/*Reverses words in a sentence*/

#include <stdio.h>

/*Max characters in sentence*/
#define SENTENCE_LEN 100 

int main(void) {
	char sentence[SENTENCE_LEN] = {0};
	char c, terminating_char; /*puncuation*/
	int i, n; /*n stores the number of iterations of the while loop*/ 
	
	printf("Enter a sentence: ");
	for(i = 0; i < SENTENCE_LEN;i++) {
		c = getchar();	
		if (c  == '?' || c == '!' || c == '.') {
			terminating_char = c;
			break;			
		}
		if (c == '\n') continue; 
		sentence[i] = c;
	} 	
	printf("Reversal of sentence:");

	for(i = SENTENCE_LEN - 1; i >= 0; i--) {
			if(sentence[i] == ' ') {
				printf("%c", sentence[i]);
				i++;
				n++;
				while(sentence[i] != ' ' && sentence[i] != terminating_char) {
					printf("%c", sentence[i]);
					i++;
					n++; /*Iterations*/
				}
				i -= n;
				n = 0;
			}
			else if (i == 0) {
				printf(" ");
				while(sentence[i] != ' ') {
					printf("%c", sentence[i]);
					i++;
				}
				i = 0;
			}
			else /*NULL*/;
		}	
		printf("%c\n", terminating_char);
	
	return 0;
}
