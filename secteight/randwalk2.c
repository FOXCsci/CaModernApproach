/*Uses functions to generate an array that leavers a random path of letters A-Z and another funciton that prints th array*/

#include <stdio.h>
#include <time.h> /*time*/
#include <stdlib.h>  /*rand and srand*/
#include <stdbool.h> /*true/false, bool*/

void generate_random_walk(char walk[10][10]);
void print_walk(char walk[10][10]);

int main(void) {
	char walk[10][10];
	printf("Random Walk: \n");
	generate_random_walk(walk);
	print_walk(walk);
	return 0;
}

void generate_random_walk(char walk[10][10]) {
	int m, n; /*Loop control*/
	bool up, down, left, right; /*Show whether a direction is avaliable or not*/
	char path = 'A'; /*The path the walk leaves starts at A, goes to Z*/
	int direction, i = 0, j = 0; /*Direction is randomly generated direction, i and j store position of array*/
	/*Initializing array*/
	for (m = 0; m < 10; m++) {
		for(n = 0; n < 10; n++) {
			walk[m][n] = '.';
		}
	}
	/*Starting at column 0 and row 0 of array, leaving an A there*/
	walk[i][j] = path++;
	/*generate random seed*/
	srand((unsigned) time(NULL));
		
	/*While the path is B, Z or anything in between, set all directions to false, set direciton to 0. Check whether each direction is
	avaliable, is all are blocked, break out of the loop. After generate a random number and store it in direction, test whether, the
	direction is avaliable, if not find an abaliable direction.*/
	while (path >= 'B' && path <= 'Z') {
		up = false, down = false, left = false, right = false, direction = 0;
		if (j - 1 < 10 && j - 1 >= 0 && walk[i][j-1] == '.') left = true;
		if (j + 1 < 10 && j + 1 >= 0 && walk[i][j+1] == '.') right = true;
		if (i + 1 < 10 && i + 1 >= 0 && walk[i+1][j] == '.') down = true;
		if (i - 1 < 10 && i - 1 >= 0 && walk[i-1][j] == '.') up = true;
		if (up == false && down == false && right == false && left == false) break;

		direction = rand() % 4;

		/*fall throughs are intentional*/
		switch(direction) {
			case 0:
				if (up)  {
					i--;
					walk[i][j] = path++;
					break;
			}
				direction = 1;
			case 1:
				if (right)  {
					j++;
					walk[i][j] = path++;
					break;
			}
				direction = 2;
			case 2:
				if (down)  {
					i++;
					walk[i][j] = path++;
					break;
			}
				direction = 3;
			case 3:
				if (left)  {
					j--;
					walk[i][j] = path++;
					break;
			}
			default:
				break;
		
		}
	}
}

void print_walk(char walk[10][10]) {
	int i, j;
	for (i = 0; i < 10; i++) {
		for(j = 0; j < 10; j++) {
			printf("%c ", walk[i][j]); 
		}
		printf("\n");
	}
	printf("\n");
}
	

