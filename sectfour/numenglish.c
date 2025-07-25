#include <stdio.h>


/*Program that gets a two digit number input from the user and converts it to english*/

int main(void) {
	int num, tens, ones; 
	printf("Enter a two-digit number: ");
	scanf("%d", &num);
	if(20 > num && num > 10) {
		tens = num;
		ones = num;
	}
	else {
		if(num > 99 || num < 10) {
			ones = -1;
			tens = 100;
		}	
		else { 
			ones = num%10;	
			tens= ((num-ones)%100)/10;
		}
	}
	switch (tens) {
	case 2: printf("You entered the number Twenty");
			break;
	case 3: printf("You entered the number Thirty");
			break;
	case 4: printf("You entered the number Fourty");
			break;
	case 5: printf("You entered the number Fifty");
			break;
	case 6: printf("You entered the number Sixty");
			break;
	case 7: printf("You entered the number Seventy");
			break;
	case 8: printf("You entered the number Eighty");
			break;
	case 9: printf("You entered the number Ninety");
			break;
	case 10: printf("You entered the number Ten");
			break;
	case 11: printf("You entered the number Eleven");
			break;
	case 12: printf("You entered the number Twelve");
			break;
	case 13: printf("You entered the number Thirteen");
			break;
	case 14: printf("You entered the number Fourteen");
			break;
	case 15: printf("You entered the number Fifteen");
			break;
	case 16: printf("You entered the number Sixteen");
			break;
	case 17: printf("You entered the number Seventeen");
			break;
	case 18: printf("You entered the number Eighteen");
			break;
	case 19: printf("You entered the number nineteen");
			break;
	default: printf("Error\n");
			break;
	}
	switch (ones) { 
		case 0: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17:
		case 18: case 19: printf("\n");
						break;
		case 1: printf("-One\n");
				break;
		case 2: printf("-Two\n");
				break;
		case 3: printf("-Three\n");
				break;
		case 4: printf("-Four\n");
				break;
		case 5: printf("-Five\n");
				break;
		case 6: printf("-Six\n");
				break;
		case 7: printf("-Seven\n");
				break;
		case 8: printf("-Eight\n");
				break;
		case 9: printf("-Nine\n");
				break;
		default: break;
	}

	return 0;
}
