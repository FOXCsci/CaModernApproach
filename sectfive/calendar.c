#include <stdio.h>

/*Program that prints a one month calendar based opn information specified by the user*/

int main(void) {
	int i, n, m, row_max; /* n is user input, i is a counter m is the starting day of the 
							week, row_max counts the number of days in row*/
	printf("Enter number of days in month: ");
	scanf("%d", &n);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &m);
	row_max = 0;

	for(i = 1; i <= n;) {
		if (m > 1 && m <= 7) {
			printf("   ");
			++row_max;
			--m;
		}
		else if (row_max >= 7) {
			printf("\n");
			row_max -= row_max;
		}
		else { 
			printf("%2d ", i);
			++row_max;
			++i;
		}
	}	
	printf("\n");	

	return 0;
}
