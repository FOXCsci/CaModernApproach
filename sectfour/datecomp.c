#include <stdio.h>

/*Program that gets two dates as input from the user and compares them to indicate which
date comes first*/


int main(void) {
	int year1, month1, day1, year2, month2, day2; // inputs from user
	printf("Enter first date (mm/dd/yy): ");
	scanf("%2d/%2d/%2d", &month1, &day1, &year1);
	printf("Enter second date (mm/dd/yy): ");
	scanf("%2d/%2d/%2d", &month2, &day2, &year2);
	if (year1 < year2) 
	printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month1, day1, year1,
	month2, day2, year2);	
	else if (year1 > year2)
	printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month2, day2, year2, 
	month1, day1, year1);
	else if (month1 < month2)
	printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month1, day1, year1,
	month2, day2, year2);
	else if (month1 > month2)
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month2, day2, year2,
		month1, day1, year1);
	else if (day1 < day2)
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month1, day1, year1,
		month2, day2, year2);
	else if (day1 > day2)
		printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", month2, day2, year2,
		month1, day1, year1);
	else
		printf("Dates are the same\n");
	
	return 0;
}
