#include <stdio.h>

/*Program that reduces a fracion ,given as input from the user, to its lowest terms*/

int main(void) {
	int i, j, rem, m, n; /* i and j are user inputs, m and n are copies of i and j 
							made for being modified in order to find the gcd which gets
							stored in m, rem stores m%n*/
	printf("Enter a fraction: ");
	scanf("%d/%d", &i, &j);
	m = i;
	n = j;
	for(;;) {
		if (n == 0) break;
		rem = m%n;
		m = n;
		n = rem;
	}
	i = i/m;
	j = j/m;

	printf("In lowest terms: %d/%d\n", i, j);	
	
	return 0;
}
