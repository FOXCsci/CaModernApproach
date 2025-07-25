/*Uses a function to generate a magic square and another to print the magic square*/

#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(void) {
	int i; /*input*/

	printf("This program creates a magic square of a specified size\n The size must be an odd number between 1 and 99\n");
	printf("Enter size of magic square: ");
	scanf("%d", &i);
	char magic_square[i][i];
	create_magic_square(i, magic_square);
	print_magic_square(i, magic_square);
}

void create_magic_square(int n, char magic_square[n][n]) {
	int i, j, row, column, last_row, last_column;
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			magic_square[i][j] = 0;
		}
	}

	magic_square[0][n/2] = 1;
	column = n/2;
	row = 0;
	last_column = column;
	last_row = row;
	
	for (i = 2; i <= n*n; i++) {
		row -= 1;
		column += 1;	
		if (row < 0) row = n - 1;
		if (column > n -1) column = 0;

		while(magic_square[row][column] != 0) {
			column = last_column;
			if (row + 1 > n - 1) row = 0;
			else row = last_row + 1;
		}
		magic_square[row][column] = i;
		last_row = row;
		last_column = column;	
	}
}

void print_magic_square(int n, char magic_square[n][n]) {
	int i, j;

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%4d", magic_square[i][j]);
		}
		printf("\n");
	}

}

