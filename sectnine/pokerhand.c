/* Classifies a poker hand */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h> /*bool type, true/false*/

#define NUM_RANKS 13 /*2 - A, 13 cards*/
#define NUM_SUITS 4 /*diamonds, hearts, spades, clubs*/
#define NUM_CARDS 5 /*5 card hand*/

bool straight, flush, four, three, royal;
int pairs; /*can be 0, 1, or 2*/
int hand[5][2]; /*[cards][rank/suit], so [0][0] is rank of first card [0][1]  is suit of first card, int values of suits are as follows
0 = clubs, 1 = diamonds, 2 = hearts, 3 = spades*/

/* prototypes*/
void read_cards(void);
void analyze_hand(void);
void print_result(void);
bool duplicate_card(int rank, int suit, int current_hand[NUM_CARDS][2], int cards_read);

/***********************************************************************************
* main: calls read_cards, analyze_hand, and print_result repeatedly. Supplies      *
*      	necessary arguments to functions.                                          *
************************************************************************************/
int main(void) {
	for (;;) {
		read_cards();
		analyze_hand();
		print_result();
	}

	return 0;
}


/********************************************************************************
* duplicate_card: checks a hand for duplicate cards returns true if there are   *
*                 any duplicate cards.                                          * 
*********************************************************************************/
bool duplicate_card(int rank, int suit, int current_hand[NUM_CARDS][2], int cards_read) {
	int i;
	for (i = 0; i <= cards_read; i++) {
		if (current_hand[i][1] == suit && current_hand[i][0] == rank) return true;
	}
	return false;
}

/***********************************************************************************
* read_cards: Reads the cards into the arguments, num_in_rank and num_in_suit      *
*      	      checks for bad cards and duplicate cards.                            *
************************************************************************************/
void read_cards(void) {
	bool card_exists;
	char ch, rank_ch, suit_ch;
	int i;
	bool bad_card;
	int cards_read = 0;
	for (i = 0; i < NUM_CARDS; i++) {
		hand[i][0] = 0;
	}

	for (i = 0; i < NUM_CARDS; i++) {
		hand[i][1] = 0;
	}
	
	while (cards_read < NUM_CARDS) {
		bad_card = false;
		card_exists = false;

		printf("Enter a card: ");
		
		rank_ch = getchar();
		switch (rank_ch) {
			case '0': exit(EXIT_SUCCESS);
			case '2': hand[cards_read][0] = 2;
					  break;
			case '3': hand[cards_read][0] = 3;
					  break;
			case '4': hand[cards_read][0] = 4;
					  break;
			case '5': hand[cards_read][0] = 5;
					  break;
			case '6': hand[cards_read][0]= 6;
					  break;
			case '7': hand[cards_read][0] = 7;
					  break;
			case '8': hand[cards_read][0] = 8;
					  break;
			case '9': hand[cards_read][0] = 9;
					  break;
			case 't': case 'T': hand[cards_read][0] = 10;
					  break;
			case 'j': case 'J': hand[cards_read][0] = 11;
					  break;
			case 'q': case 'Q': hand[cards_read][0] = 12;
					  break;
			case 'k': case 'K': hand[cards_read][0] = 13;
					  break;
			case 'a': case 'A': hand[cards_read][0] = 14;
					  break;
			default: bad_card = true; 
		}

		suit_ch = getchar();
		switch (suit_ch) {
			case 'c': case 'C': hand[cards_read][1] = 0;
							break;
			case 'd': case 'D': hand[cards_read][1] = 1;
							break;	
			case 'h': case 'H': hand[cards_read][1] = 2;
							break;
			case 's': case 'S': hand[cards_read][1] = 3;
							break;
			default: bad_card = true;
					 break;
		}
		while ((ch = getchar()) != '\n') {
			if (ch != ' ') bad_card = true;
		}

		for (i = cards_read - 1; i >= 0; i--) {
			if (hand[i][0] == hand[cards_read][0] && hand[i][1] == hand[cards_read][1]) card_exists = true;
		}
	
		if (bad_card) printf("Bad card; ignored\n");
		else if (card_exists) printf("Duplicate card; ignored\n");
		else cards_read++;	
	}		
}


/***********************************************************************************
* analyze_hand: Determines whether the hand contains a straight, a flush,          *
*      	      four-of-a-kind, and/or three-of-a-kind; determines the number of     *
*			  pairs; stores the results into the external variables straight       *
* 			  flush, four, three, and pairs.                                       *
************************************************************************************/
void analyze_hand(void) {
	int matches, i, j, current_lowest, temp;
	straight = false, flush = false, four = false;
	pairs = 0;

	/*sort cards in hand by rank*/ 
	for (i = 0; i < NUM_CARDS; i++) {
		current_lowest = hand[i][0]; 
		for (j = i + 1; j < NUM_CARDS; j++) {
			if (hand[j][0] < current_lowest) {
				temp = current_lowest;
				current_lowest = hand[j][0];
				hand[j][0] = temp;
				hand[i][0] = current_lowest;
			}	 
		}
	}
	 
	/* check for flush */
	for (i = 0; i < NUM_CARDS; i++) {
		if (hand[i][1] != hand[0][1]) break;
	 	if(i == NUM_CARDS  - 1) flush = true;
	}

	/* check for straight */

	for (i = 1; i < NUM_CARDS; i++) {
		if (i == NUM_CARDS - 1 && hand[i][0] == 14) /*NULL*/;
		else if ((hand[i][0] - 1 == hand[i-1][0]) != 1) break;
		if (i == NUM_CARDS - 1) straight = true;
	}
	/*Check if straight is royal sequence, 10JQKA*/
	if (straight && hand[0][0] == 10 && hand[NUM_CARDS - 1][0] == 14) royal = true;
	
	/* Check for 4-of-a-kind, 3-of-a-kind, and pairs */
	for (i = 0; i < NUM_CARDS; i++) {
		matches = 0;
		for (j = i + 1; j < NUM_CARDS; j++) {
			if (hand[j][0] ==  hand[i][0]) matches++;
		}
		switch (matches) {
			case 3:
				four = true;
				i += 3;
				break;
			case 2: 
				three = true;
				i += 2;
				break;
			case 1: 
				i += 1; 
				pairs++;
				break;
			default: 
				break;	
		}
	}
}


/***********************************************************************************
* print_result: Prints the classification of the hand, based on the values, of the *
*               external variables, straight, flush, four, three, and pairs.       *
*                                                                                  *
************************************************************************************/
void print_result(void) {
	if (royal && flush) printf("Royal Flush");
	else if (straight && flush) printf("Straight Flush");
	else if (four) printf("Four of a kind");
	else if (three && (pairs == 1)) printf("Full House");
	else if (flush) printf("Flush");
	else if (straight) printf("Straight");
	else if (three) printf("Three of a kind");
	else if (pairs == 2) printf("Two pairs");
	else if (pairs == 1) printf("Pair");
	else printf("High Card");
	
	printf("\n\n"); 
}
