#include <stdio.h>
#include <ctype.h>

/*Program that takes 12-hour time format from user and convertts it to 24-hour time format*/

int main(void) {
	int hours, mins; /*Hours and minutes input from user*/ 	
	int new_hours; /*Converted time (minutes stays the same so new_minutes is not necessary)*/
	char c; /*Character used to get AM/PM input from user (only stores a or p)*/ 

	printf("Enter a 12-hour time: ");
	scanf("%2d:%2d %c", &hours, &mins, &c);
	c = toupper(c);
	if (c == 'A' && hours == 12) {
		new_hours = 0;
		printf("24-hour time: %2d:%.2d\n", new_hours, mins);
	}
	else if (c == 'P' && hours == 12) {
		new_hours = 12;
		printf("24-hour time: %2d:%.2d\n", new_hours, mins);
	}
	else if (c == 'A') {
		new_hours = hours;
		printf("24-hour time: %2d:%.2d\n", new_hours, mins); 
	}
	else if (c == 'P') {
		new_hours = hours + 12;
		printf("24-hour time: %2d:%.2d\n", new_hours, mins);
	}
	else {
		printf("Error, a.m. or p.m. not specified, or invalid input was specified\n");
		printf("Char that was specified: %c\n", c);
	}
	return 0;
}
