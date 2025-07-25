/*Program that gets phone number in letter form and puts it in numeric form, storing chars in an array*/

#include <stdio.h>
#include <ctype.h>

#define PHONE_NUM_LEN 15

int main(void) {
	char phone_num[PHONE_NUM_LEN] = {0};
	int i = 0;
	printf("Enter phone numer: ");

	while ((phone_num[i] = getchar()) != '\n' && i < PHONE_NUM_LEN) {
		i++;
	}

	
	for(i = 0; i < PHONE_NUM_LEN; i++) {
		if(phone_num[i] == 0) break;
		switch(toupper(phone_num[i])) {
			case 'A': case 'B': case 'C':
				phone_num[i] = '2';
				break;
			case 'D': case 'E': case 'F':
				phone_num[i] = '3';
				break;
			case 'G': case 'H': case 'I':
				phone_num[i] = '4';
				break;
			case 'J': case 'K': case 'L':
				phone_num[i] = '5';
				break;
			case 'M': case 'N': case 'O':
				phone_num[i] = '6';
				break;
			case 'P': case 'R': case 'S': case 'Q':
				phone_num[i] = '7';
				break;
			case 'T': case 'U': case 'V':
				phone_num[i] = '8';
				break;
			case 'W': case 'X': case 'Y': case 'Z':
				phone_num[i] = '9';
			default:
				break;
		}
	}
	printf("In numeric form: ");
	for (i = 0; i < PHONE_NUM_LEN; i++) {
		if(phone_num[i] == 0) break; 
		else printf("%c", phone_num[i]);
	}
	
	return 0;
}

