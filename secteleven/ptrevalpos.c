/* Evaluates chess board position using 8x8 array and pointers*/

#include <stdio.h>

int evaluate_position(const char board[8][8]);

int main(void) {
	char chess_board[8][8] = {{'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
							 {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
							 {'.', '.', '.', '.', '.', '.', '.', '.'},
							 {'.', '.', '.', '.', '.', '.', '.', '.'}, 
							 {'.', '.', '.', '.', '.', '.', '.', '.'}, 
							 {'.', '.', '.', '.', '.', '.', '.', '.'}, 
							 {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'}, 
							 {'R', 'N', 'B', '.', 'K', 'B', 'N', 'R'}};

	printf("Board evaluation: %d\n", evaluate_position(chess_board));
	
	return 0;
}

int evaluate_position(const char board[8][8]) {
	const char *p;
	int white = 0, black = 0;
	
	for (p = &board[0][0]; p <= &board[8][8]; p++) {
		switch (*p) {
			case 'Q': 
				white += 9;
				break;
			case 'R': 
				white += 5;
				break;
			case 'B': case 'N':
				white += 3;
				break;
			case 'P':
				white += 1;
				break;
			case 'q': 
				black += 9;
				break;
			case 'r': 
				black += 5;
				break;
			case 'b': case 'n':
				black += 3;
				break;
			case 'p':
				black += 1;
				break;
			default:
				break;

		}
	}

	return white - black;
}
