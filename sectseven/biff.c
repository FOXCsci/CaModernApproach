/*Translates a message into all uppercase letters, replacing some letters as numbers, and appending 
exclamtion marks to the message*/

#include <stdio.h>
#include <ctype.h>

#define SIZE 100

int main(void) {
	int i = 0;
	char c, msg[SIZE] = {0};
	
	printf("Enter Message: ");

	while((c = getchar()) != '\n' && i < SIZE) {
		msg[i++] = c;
	}

	printf("In B1FF-speak: ");
	for(i = 0; i < SIZE; i++) {
	
		switch(c = toupper(msg[i])) {
		case 'A': case 'a':
			putchar('4');
			break;
		case 'B': case 'b':
			putchar('8');
			break;
		case 'E': case 'e':
			putchar('3');
			break;
		case 'I': case 'i':
			putchar('1');
			break;
		case 'O': case 'o':
			putchar('0');
			break;
		case 'S': case 's':
			putchar('5');
			break;
		default:
			putchar(c);	
			break;
		}
	} 
	printf("!!!!!!!!!!\n");

	return 0;
}
