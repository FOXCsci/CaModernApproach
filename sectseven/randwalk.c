/*Program what randomly"walks" on a 10x10 char array where all values are initialy '.' 
each spot that is walkedon is marked with a letter, starting with A all to way to Z. 
If all paths are blocked off, the program terminates*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	_Bool up = 0, down = 0, left = 0, right = 0;
	int direction, i = 0, j = 0, m, n;
	char path = 'A';
	char map[10][10];
	
	for(m = 0; m < 10; m++) {
		for(n = 0; n < 10; n++)	{
			map[m][n] = '.';
		}		
	}

	map[i][j] = path++;
	srand((unsigned) time(NULL));
	
	while(path >= 'B' && path <= 'Z') {
		up = 0, down = 0, left = 0, right = 0, direction = 0;
		if(j-1 < 10 && j-1 >= 0 && map[i][j-1] == '.') left = 1; 
		if(j+1 < 10 && j+1 >= 0 && map[i][j+1] == '.') right = 1; 
		if(i+1 < 10 && i+1 >= 0 && map[i+1][j] == '.') down = 1; 
		if(i-1 < 10 && i-1 >= 0 && map[i-1][j] == '.') up = 1; 
		if(up == 0 && down == 0 && right == 0 && left == 0) break;		
 
		direction = rand() % 4;

		switch(direction) {
			case 0:
				if(up) {
					i -= 1;
					map[i][j] = path++;
					break;
				}	
				direction = 1;		
			case 1:
				if(right) {
					j += 1;
					map[i][j] = path++;
					break;
				}
				direction = 2;		
			case 2:
					if(down) {
					i += 1;
					map[i][j] = path++;
					break;
				}
				direction = 3;		
			case 3:
					if(left) {
					j -= 1;
					map[i][j] = path++;
					break;
				}
				default:
					break;
		}
	}


	for (m = 0; m < 10; m++) {
		for (n = 0; n < 10; n++)	{
			printf("%c ", map[m][n]);
		}		
		printf("\n");
	}

	return 0;
}

