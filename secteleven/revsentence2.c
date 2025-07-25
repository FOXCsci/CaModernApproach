/* Reverses words in sentence*/

#include <stdio.h>

#define SENTENCE_LEN 100

int main(void) {

	char sentence[SENTENCE_LEN] = {0};
	char c, terminating_char; /*terminating_char is puncuation*/
	char *p;
	int n; /*n stores the number of iterations of the while loop*/ 
	
	printf("Enter a sentence: ");
	for (p = sentence; p < sentence + SENTENCE_LEN; p++) {
		c = getchar();	
		if (c  == '?' || c == '!' || c == '.') {
			terminating_char = c;
			break;			
		}
		if (c == '\n') continue; 
		*p = c;
	} 	
	printf("Reversal of sentence:");

	for(p = sentence + (SENTENCE_LEN - 1); p >= sentence; p--) {
			if(*p == ' ') {
				printf("%c", *p);
				p++;
				n++;
				while(*p != ' ' && *p != terminating_char) {
					printf("%c", *p);
					p++;
					n++; /*Iterations*/
				}
				p -= n;
				n = 0;
			}
			else if (p == sentence) {
				printf(" ");
				while(*p != ' ') {
					printf("%c", *p);
					p++;
				}
				p = sentence;
			}
			else /*NULL*/;
		}
	
		printf("%c\n", terminating_char);

	return 0;
}
