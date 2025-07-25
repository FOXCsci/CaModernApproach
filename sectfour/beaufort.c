#include <stdio.h>

/*Program that takes user input of wind speede in knots and displays a description*/ \

int main(void) {
	int wind; // wind speed from user input
	printf("Enter wind speed (in knots): ");
	scanf("%d", &wind);
	
	if (1 > wind) printf("Calm\n");
	else if (1 <= wind && 3 >= wind) printf("Light air\n");
	else if (4 <= wind && 27 >= wind) printf("Breeze\n");
	else if (28 <= wind && 47 >= wind) printf("Gale\n");
	else if (48 <= wind && 63 >= wind) printf("Storm\n");
	else printf("Hurricane\n");


	return 0;
}
