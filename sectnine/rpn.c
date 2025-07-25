/* Uses a stack to evaluate expressions in Reverse Polish Notation*/

#include <stdio.h>
#include <stdbool.h> /*bool type, true/false*/
#include <stdlib.h> /*exit() function*/

#define STACK_SIZE 100
/*external variables*/
int contents[STACK_SIZE];
int top = 0;

/*prototypes*/
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
int pop(void);


int main(void) {
	char ch;
	int result, x, y;

	for (;;) {
		printf("Enter an RPN expression: ");
		scanf(" %c", &ch);
		while (ch != '\n') {
			switch (ch) {
				case '0': case '1': case '2': case '3': case '4': case '5':  case '6': case '7': case '8': case '9':
					push(ch - '0');	
					break;
				case '+':
					x = pop();	/* Top Element*/
					y = pop();	/* Next Element*/
					result = x + y;
					push(result);
					break;		
				case '-':
					x = pop();
					y = pop();
					result = y - x;
					push(result);
					break;		
				case '*':
					x = pop();	
					y = pop();
					result = x * y;
					push(result);
					break;		
				case '/':
					x = pop(); 
					y = pop();
					result = y / x;
					push(result);
					break;
				case '=':
					printf("Value of RPN expression: %d\n", pop());
					goto exit_loop;		
				default:
					exit(EXIT_SUCCESS);
			}
			scanf(" %c", &ch);
		}	
		exit_loop: 
			make_empty();
	}
	
	
		
	return 0;
}

/*functions*/
void make_empty(void) {
	top = 0;
}

bool is_empty(void) {
	return top == 0;
}

bool is_full(void) {
	return top == STACK_SIZE;
}

void push(int i) {
	if(is_full()) {
		printf("Expression too complex\n"); /*Stack overflow*/
		exit(EXIT_SUCCESS);
	}
	else contents[top++] = i;
}

int pop(void) {
	if (is_empty()) {
		printf("Not enough operands in expression\n"); /*Stack underflow*/
		exit(EXIT_SUCCESS);
	}
	else return contents[--top]; 
}














