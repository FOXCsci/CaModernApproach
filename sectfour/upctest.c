#include <stdio.h>

/*Program that tests where a UPC is valid, based on if the check digit is valid*/

int main(void) {
	int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, check, first_sum, second_sum, total;
	printf("Enter UPC: ");
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3,
			&j4, &j5, &check);
	first_sum = d + i2 + i4 + j1 + j3 + j5; // computing appropriate check digit
	second_sum = i1 + i3 + i5 + j2 + j4;
	total = ((3*first_sum) + second_sum)-1;
	total = 9 - (total%10);
	if (check == total) printf("VALID\n");
	else printf("INVALID\n");
	

	return 0;
}
