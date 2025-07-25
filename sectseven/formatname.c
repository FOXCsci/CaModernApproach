/*Takes name in format John Doe and puts it n format Doe, J. Last name is stoed in an array*/

#include <stdio.h>
#include <ctype.h>

#define NAME_LEN 20

int main(void) {
	char finitial, check; /*Initital of first name, check char to see where first name ends*/
	char last_name[NAME_LEN] = {0}; /*Letters of last name*/
	int i = 0;	

	printf("Enter a first and last name: ");
		
	while((check = getchar()) == ' ') /*Intentionally left blank*/
			; 
	finitial = toupper(getchar());
		
	while((check = getchar()) != ' ') /*Intentionally left blank*/
		;
		

	while((check = getchar()) != '\n' && i < NAME_LEN) {
		last_name[i++] = check;
	}
 	
	printf("You entered the name: ");
	printf("%c", toupper(last_name[0]));

	for(i = 1; last_name[i] != 0; i++) {
		putchar(last_name[i]);
	}	
	
	printf(", %c.\n", finitial);
	
	return 0;
}
