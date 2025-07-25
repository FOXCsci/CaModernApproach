/* Reverses a message entered by user*/

#include <stdio.h>

#define MSG_LEN 100

int main(void) {
	char msg[MSG_LEN];
	char *p = msg; 

	printf("Enter a message: ");
	 
	for (p = msg; p < msg + MSG_LEN; p++) {
		*p = getchar();
		if (*p == '\n' ) break;
	}
	p--;

	printf("Reversal is: ");
	for (p--; p >= msg; p--) {
		putchar(*p);
	}

	printf("\n");

	return 0;
}
