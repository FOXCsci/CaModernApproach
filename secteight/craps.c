/*Simulates a came of craps, uses functions*/

#include <stdio.h>
#include <stdlib.h> /*srand and rand*/
#include <time.h> /*time*/
#include <stdbool.h> /*bool true/false*/

int roll_dice(void);
bool play_game(void);

int main(void) {
	int wins, losses; 
	char c;

	srand((unsigned) time(NULL));

	for(;;) {
		if(play_game()) wins++;
		else losses++;
		printf("Play again (y/n)? ");
		scanf(" %c", &c);
		if (c != 'Y' && c != 'y') break;
	}
	
	printf("\nWins %d\tLosses: %d\n", wins, losses);
	return 0;
}

int roll_dice(void) {
	int n, m; /*dice 1, dice 2*/
	n = rand() % 6;
	m = rand() % 6;
	/*To ensure n is n not 0*/
	n++;
	m++;
	return n + m;
}

bool play_game(void) {
	int i, point;
	i = roll_dice();
	bool status = true;
	
	if (i == 7 || i == 11) {
		printf("You rolled %d\n", i);
		printf("You win!\n\n");
		return true;
	}
	else if (i == 2 || i == 3 || i == 12) {
			printf("You rolled %d\n", i);
			printf("You lose!\n\n");
			return false;
	}

	else  {
		point = i;
		printf("You rolled %d\n", i);
		printf("Your point is %d\n", point);
	}
	
	while (i = roll_dice()) {
		printf("You rolled %d\n", i);
		if (i == point) break;
		if (i == 7) {
			status = false;
			break;
		}
	}
	if (status) {
		printf("You win!\n\n");
		return true;
		}
	else {
		printf("You lose!\n\n");
		return false;
	}
}
