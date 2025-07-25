/* Checks if a message is a palindrome, ignores all characters that aren't letters */

#include <stdio.h>
#include <ctype.h> /* isalpha functiuon */
#include <stdbool.h> /* true/false, bool type*/


#define MAX 100 /* max size of message */

int main(void) {
	char c, msg[MAX]; 
	char *p = msg, *q;
	bool palindrome = true;
	
	printf("Enter message: ");
	while ((c = getchar()) != '\n' && p < msg + MAX) {
		if (isalpha(c)) {
			*p = toupper(c);
			p++;
		}
	}

	p--;	
	q = msg;
	
	while (q < p) {
		if (*q != *p) {
			palindrome = false;
			printf("Not a palindrome\n");
			break;
		}
		q++;
		p--;
	}

	if (palindrome) printf("Palindrome\n");
	
	return 0;
}
