/*Program that asks the user for a 24-hour time and displays the departure and arrival 
time of the flight whose depature time is closest to that entered by the user*/

#include <stdio.h>

/* Prototypes */
void find_closest_flight(int desired_time, int *departure_time, int *arrival_time); 

int main(void) {
	int hours, mins, desired_time, departure_time = 0, arrival_time = 0;

	printf("Enter the time in 24-hour time format (hh:mm): ");
	scanf("%2d:%2d", &hours, &mins);
	
	desired_time = (60 * hours ) + mins;

	find_closest_flight(desired_time, &departure_time, &arrival_time);
	

	printf("Cloest flight (hours since midnight):\nDeparture: %d\nArrival: %d\n", 
			departure_time, arrival_time);
		
	return 0;
}

/*
* find_closes_flight: Finds the arrival time and departure time of the closest flight, and 
*					  stores them in the adresses of the variables that the pointers 
*					  departure_time and arrival_time point to. desired_time is the dersired
*					  time in minutes since midnight.
*/

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time) {
	/* Arrival times = 0, departure times = 1. Both are minutes since midnight*/
	int times[8][2] = {{480, 616}, 
				   {583, 712},
				   {679, 811},
				   {767, 900},
				   {840, 968},
				   {945, 1075},
				   {1140, 1280},
				   {1305, 1438}}; 
	
	if (desired_time <= (times[1][0] + times[0][0])/2) {
		*departure_time = times[0][0];
		*arrival_time = times[0][1]; 
	}

	else if (desired_time <= (times[2][0] + times[1][0])/2) {
		*departure_time = times[1][0];
		*arrival_time = times[1][1]; 
	}

	else if (desired_time <= (times[3][0] + times[2][0])/2) {
		*departure_time = times[2][0];
		*arrival_time = times[2][1]; 
	}

	else if (desired_time <= (times[4][0] + times[3][0])/2) {
		*departure_time = times[3][0];
		*arrival_time = times[3][1]; 
	}
 
	else if (desired_time <= (times[5][0] + times[4][0])/2) {
		*departure_time = times[4][0];
		*arrival_time = times[4][1]; 
	}
 
	else if (desired_time <= (times[6][0] + times[5][0])/2) {
		*departure_time = times[5][0];
		*arrival_time = times[5][1]; 
	}
 
	else if (desired_time <= (times[7][0] + times[6][0])/2) {
		*departure_time = times[6][0];
		*arrival_time = times[6][1]; 
	}

	else {	
		*departure_time = times[7][0];
		*arrival_time = times[7][1]; 
	}
}	


