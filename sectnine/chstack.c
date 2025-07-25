/*Uses a stack model to determine if braces/parenthese entered by the user are correctly nested*/

#include <stdio.h>
#include <stdbool.h> /*bool type*/
#include <stdlib.h> /*exit*/

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;

void stack_overflow(void);
void stack_undeflow(void);
void make_empty(void);
bool is_emtpy(void);
bool is_full(void);
void push(char c);
int pop(void);

int main(void) {
	char c;
	bool check = true;

	printf("Enter parentheses and/or braces: ");
	while((c = getchar()) != '\n') {
		if (c == '(' || c == '{') push(c);
		else if (c == ')') check == true ?  (check = (pop() == '(')) : (check = false);
		else if (c == '}') check == true ? (check = (pop() == '{')) : (check = false);
		else /*NULL*/;
	}
	if (check) printf("Parentheses/braces are nested properly\n");
	else printf("Parentheses/braces are not nested properly\n");

	return 0;
}

/************************************************************************************				
* stack_oveflow:  prints error message for stack overflow and exits program.        *
*                                                                                   *	
*************************************************************************************/
void stack_overflow(void) {
		printf("Stack Overflow\n");
		exit(EXIT_SUCCESS);
	}

/************************************************************************************				
* stack_undeflow:  prints that parentheses/braces are not nested properly becuase   *
*                  stack underflow means no left parentheses/braces were ever       *
*				   entered.                                                         *	
*************************************************************************************/
void stack_underflow(void) {
		printf("Parentheses/braces are not nested properly\n");
		exit(EXIT_SUCCESS);		
}	

/************************************************************************************				
* make_empty:  makes the current position of the stack empty.                       *
*                                                                                   *	
*************************************************************************************/
void make_empty(void) {
	top = 0;
}

/************************************************************************************				
* is_empty: returns if the stack if empty.                                          *
*                                                                                   *	
*************************************************************************************/
bool is_empty(void) {
	return top == 0;
}	

/************************************************************************************				
* is_full:  returns if the stack is full.                                           *
*                                                                                   *	
*************************************************************************************/
bool is_full(void) {
	return top == STACK_SIZE;
}

/************************************************************************************				
* push: "pushes" item (char c)to stack, adding a item to the top of the stack.      *
*                                                                                   *	
*************************************************************************************/
void push(char c) {
	if(is_full()) stack_overflow();
	else contents[top++] =  c;
}

/************************************************************************************				
* pop:  "pops" item from stack, returns the most recent item on stack               *
*                                                                                   *	
*************************************************************************************/
int pop(void) {
	if (is_empty()) stack_underflow();
	else return contents[--top];	
}

