#include <stdio.h>

/*Program that gets a first and last name and displays the in the form: 
last_name, First_initial.*/ 

int main(void) {
	char first_initial, last_letters; /*Initial of first name, letters of last name*/ 
	printf("Enter a first and last name: ");
	scanf(" %c", &first_initial);

	while((last_letters = getchar()) != ' '); /*NULL*/	

	while((last_letters = getchar()) == ' '); /*NULL*/	

	do {
		putchar(last_letters);
	} while((last_letters = getchar()) != '\n' && last_letters != ' ');
	
	printf(", %c.\n", first_initial);

	return 0;
}
