#include <stdio.h>


/*Program that countinously takes dates from the user and when the user enters the date
0/0/0, the program ends and tells the user which of the dates they entered came first*/


int main(void) {
	int year, month, day, fyear, fmonth, fday; 
	fyear = 10000;
	for(;;) {
		printf("Enter a date (mm/dd/yy) (0/0/0 to stop): ");
		scanf("%2d/%2d/%2d", &month, &day, &year);
		if(year == 0 && month == 0 && day == 0) break;
		else if (year < fyear) {
				fyear = year;
				fmonth = month;
				fday = day;
			} 
		else if (year == fyear && month < fmonth) {
				fyear = year;
				fmonth = month;
				fday = day;
			}
		else if (year == fyear && month == fmonth && day < fday) {
				fyear = year;
				fmonth = month;
				fday = day;
			}
	}
	printf("%.2d/%.2d/%.2d is the earliest date\n", fmonth, fday, fyear);
	
	
	return 0;
}
