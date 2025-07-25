#include <stdio.h>

int main(void) {
	int hours, mins, since_mid, i;
	int dep_times[8] = {(8 * 60), (9 * 60) + 43, (11 * 60) + 19,  (12 * 60) + 47, (14 * 60), 
						(15 * 60) + 45, (19 * 60), (21 * 60) + 45};
	int arr_times[8] = {(10*60) + 16, (11*60) + 52, (13 * 60) + 31, (15*60), (16*60) + 8, 
						(17 * 60) + 55, (21 * 60) + 20, (23*60) + 58};	

	printf("Enter a 24-hour time: ");
	scanf("%2d:%2d", &hours, &mins);
	
	since_mid = (hours*60) + mins;

	for (i = 0; i < 8; i++) {
		if(i + 1 >= sizeof(dep_times)/sizeof(int))  {		
			printf("Closest departure time is %.2d:%.2d, arriving at %.2d:%.2d\n", 
					dep_times[i]/60, dep_times[i]%60, arr_times[i]/60, arr_times[i]%60);
			
		}
		else if (since_mid <= (dep_times[i] + dep_times[i+1])/2) {
			printf("Closest departure time is %.2d:%.2d, arriving at %.2d:%.2d\n", 
					dep_times[i]/60, dep_times[i]%60, arr_times[i]/60, arr_times[i]%60);
			break;
		}
	}
	
	return 0;
}
