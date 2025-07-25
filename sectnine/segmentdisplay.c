/* Takes a number input and outputs the number using characters to simulate a seven segment display*/	 

#include <stdio.h>

#define MAX_DIGITS 10

/* External Variables */
	/*A 0 represents empty space, a 1 represents a segment, this array represents numbers 0-9*/
const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
                           {0, 1, 1, 0, 0, 0, 0},
                           {1, 1, 0, 1, 1, 0, 1},
                           {1, 1, 1, 1, 0, 0, 1}, 
                           {0, 1, 1, 0, 0, 1, 1},
                           {1, 0, 1, 1, 0, 1, 1},
                           {1, 0, 1, 1, 1, 1, 1},
                           {1, 1, 1, 0, 0, 0, 0},
                           {1, 1, 1, 1, 1, 1, 1},
                           {1, 1, 1, 1, 0, 1, 1}};

char digits[4][MAX_DIGITS * 4]; /* Character height, character width for max characters, is 3 but 1 char is needed to hold
								   space between characters.*/


/* Prototypes */
void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(void) {
	int i = 0, j = 0;
	char c;
	clear_digits_array();

	printf("Enter a number: ");
	
	while (i < MAX_DIGITS && (c = getchar()) != '\n') {
		switch (c) {
			case '0':
				process_digit(0, j);
				j += 4;
				i++;
				break;				
			case '1':
				process_digit(1, j);
				j += 4;
				i++;
				break;				
			case '2':
				process_digit(2, j);
				j += 4;
				i++;
				break;				
			case '3':
				process_digit(3, j);
				j += 4;
				i++;
				break;				
			case '4':
				process_digit(4, j);
				j += 4;
				i++;
				break;				
			case '5':
				process_digit(5, j);
				j += 4;
				i++;
				break;				
			case '6':
				process_digit(6, j);
				j += 4;
				i++;
				break;				
			case '7':
				process_digit(7, j);
				j += 4;
				i++;
				break;				
			case '8':
				process_digit(8, j);
				j += 4;
				i++;
				break;				
			case '9':
				process_digit(9, j);
				j += 4;
				i++;
				break;
			default:
				break;				
		}
	}
	print_digits_array();


	return 0;
}

void clear_digits_array(void) {
	int i, j;
	
	for (i = 0; i < 4; i++) {
		for (j = 0; j < (4 * MAX_DIGITS); j++) {
			digits[i][j] = ' ';
		}
	}
} 

void process_digit(int digit, int position) {
	int i, row, column;

/*
 3x3 representation of display
  
	   012
	 0  _
	 1 |_|
	 2 |_|

	*/
						/*row, column*/
	int segment_grid[7][2] = {{0, 1},
						{1, 2},
						{2, 2},
						{2, 1},
						{2, 0},
						{1, 0},
						{1, 1}};

	for (i = 0; i < 7; i++) {
		if (segments[digit][i]) {
			row = segment_grid[i][0];
			column = segment_grid[i][1] + position;
			digits[row][column] = i % 3 == 0 ? '_': '|'; 
		}	
	}
	
}

void print_digits_array(void) {
	int i, j;
	for (i = 0; i < 3; i++) {
		for(j = 0; j < (MAX_DIGITS * 4); j++) {
			putchar(digits[i][j]);
		} 	
		printf("\n");
	}
}

 
