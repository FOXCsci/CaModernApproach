#include <stdio.h>

/*Program that converts a numerical value into its corresponding letter grade*/


int main(void) {
	int grade; //user input
	printf("Enter a numerical grade: ");
	scanf("%d", &grade);
	if (grade > 100 || grade < 0) grade = 101;
		
	else  {
		grade = grade - (grade%10);	
		grade /= 10;
	}

	switch(grade) {
	case 10: case 9:	
			printf("Letter Grade: A\n");
			break;
	case 8: printf("Letter Grade: B\n");
			break;
	case 7: printf("Letter Grade: C\n");
			break;
	case 6: printf("Letter Grade: D\n");
			break;
	case 5: case 4: case 3: case 2: case 1: case 0:
			printf("Letter Grade: F\n");	
			break;
	default: printf("Error: Invalid grade number\n");
			 break;
	}
	return 0;
}
