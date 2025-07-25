#include <stdio.h>

/*Program that takes 24-hour time input from user and converts it into 12-hour time */

int main(void) {
	int hours, mins; // hours and minutes input by user
	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hours, &mins);
	if (hours == 0) {
		printf("Equivalent to 12-hour time: 12:%.2d A.M\n", mins);	
		}

	else if (hours >= 0 && hours <= 11) {
		printf("Equivalent to 12-hour time: %.1d:%.2d A.M\n", hours, mins);
			}
	else if (hours == 12) {
			printf("Equivalent to 12-hour time: 12:%.2d P.M\n", mins);
		}
	else if (hours >= 12 && hours <= 23) {
		printf("Equivalent to 12-hour time: %.2d:%.2d P.M\n", hours%12, mins);
	}	
	else {
		printf("Invalid time\n");
	}

	return 0;
}
