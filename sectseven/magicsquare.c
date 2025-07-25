/*Program that prints a n by n magic square (a square arrangment of the numbers 1, 2 ... n^2 in which the sums of the rows, columns 
and diagonals are all the same), the user will specify the value of n*/

#include <stdio.h>

int main(void) {
	int n, i, j, row, column, last_row, last_column;
	printf("This program creates a magic square of a specfied size\nThe size must be an odd number beween 1 and 99\n");
	printf("Enter size of magic square: ");
	scanf("%d", &n);
	int arr[n][n];
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			arr[i][j] = 0;
		}
	}

	arr[0][n/2] = 1;
	column = n/2, row = 0;
	last_column = n/2, last_row = 0;

	for(i = 2; i <= n*n; i++) {	
		row -= 1;
		column += 1;
		if (row < 0) row = n - 1;
		if (column > n - 1) column = 0;
		
		while (arr[row][column] != 0) {
			column = last_column;
			if (row + 1 > n - 1) row = 0;
			else row = last_row + 1;	
			printf("%d changed, row: %d, column: %d\n", i, row, column);
		}

		arr[row][column] = i;
		last_row = row;
		last_column = column;
	} 
	
	for(i = 0; i < n; i++) {
		for(j = 0; j < n; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
}
