#include <stdio.h>

/*Program that gets the greatest common divosor of two integers*/


int main(void) {
	int m, n, r; // m and n are user inputs, stores the m%n
	printf("Enter two integers: ");
	scanf("%d %d" , &m, &n);
	for(;;) {
		if(n == 0) break;
		r = m%n;
		m = n;
		n = r;
	}
	printf("Greatest Common Divosor: %d\n", m);

	return 0;
}
