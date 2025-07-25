#include <stdio.h>
#include <ctype.h>


/*Program that takes in a user input time in 12-hour time format and finds the closest flight to that time*/

int main(void) {
	int f1 = 8 * 60, f2 = 9 * 60 + 43, f3 = 11 * 60 + 19, f4 = 12 * 60 + 47, f5 = 14 * 60, f6 = 15 * 60+ 45, 
		f7 = 19 * 60, f8 = 21 * 60 + 45; /*Flight departure times, in minutes since midnight*/
	int hours, mins, since_mid; //from user input	
	char c; // am/pm from input
	printf("Enter a 12-hourt time: ");
	scanf("%2d:%2d %c", &hours, &mins, &c);
	c = toupper(c);

	if (c == 'A'); /* NULL */
	else if (c == 'P') 
		hours += 12;
	since_mid = hours * 60 + mins;
	
 	
	if (since_mid <= (f1 + f2)/2)	 
		printf("Closest departure time is at 8:00 a.m., arriving at 10:16 a.m.\n");
	else if (since_mid <= (f2 + f3)/2)	 
		printf("Closest departure time is at 9:43 a.m., arriving at 11:52 a.m.\n");	
	else if (since_mid <= (f3 + f4)/2)	 
		printf("Closest departure time is at 11:19 a.m., arriving at 1:31 p.m.\n");	
	else if (since_mid <= (f4 + f5)/2)	 
		printf("Closest departure time is at 12:47 p.m., arriving at 3:00 p.m.\n");	
	else if (since_mid <= (f5 + f6)/2)	 
		printf("Closest departure time is at 2:00 p.m., arriving at 4:08 p.m.\n");	
	else if (since_mid <= (f6 + f7)/2)	 
		printf("Closest departure time is at 3:45 p.m., arriving at 5:55 p.m.\n");	
	else if (since_mid <= (f7 + f8)/2)	 
		printf("Closest departure time is at 7:00 p.m., arriving at 9:20 p.m.\n");	
	else	 
		printf("Closest departure time is at 9:45 p.m., arriving at 11:58 p.m.\n");	
	return 0;
}
