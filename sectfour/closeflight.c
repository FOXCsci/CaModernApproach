#include <stdio.h>
 
/*Program that asks the user for a 24-hour time and displays the departure and arrival 
time of the flight whose depature time is closest to that entered by the user*/

int main(void) {
	int i1 = 480, i2 = 583, i3 = 679, i4 = 767, i5 = 840, i6 = 945, i7 = 1140, i8 = 1305; 
	int hours, mins; // hours and minutes from user input
	int sincemid; // minutes since midnight
	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hours, &mins);
	sincemid = (hours*60) + mins; 
	
	if (sincemid <= (i2 + i1)/2) 
		printf("Closest departure time is at 8:00 a.m., arriving at 10:16 a.m.\n");
	else if (sincemid <= (i3 + i2)/2)
			printf("Closest departure time is at 9:43 a.m., arriving at 11:52 a.m.\n");
	else if (sincemid <= (i4 + i3)/2)
			printf("Closest departure time is at 11:19 a.m., arriving at 1:31 p.m.\n");
	else if (sincemid <= (i5 + i4)/2)
			printf("Closest departure time is at 12:47 p.m., arriving at 3:00 p.m.\n");
	else if (sincemid <= (i6 + i5)/2)
			printf("Closest departure time is at 2:00 p.m., arriving at 4:08 p.m.\n");
	else if (sincemid <= (i7 + i6)/2)
			printf("Closest departure time is at 3:45 p.m., arriving at 5:55 p.m.\n");
	else if (sincemid <= (i8 + i7)/2)
			printf("Closest departure time is at 7:00 p.m., arriving at 9:20 p.m.\n");
	else 
			printf("Closest departure time is at 9:45 p.m., arriving at 11:58 p.m.\n");
	
	return 0;
}
