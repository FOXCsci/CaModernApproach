#include <stdio.h>
/* program that takes phone number in format (xxx)-xxx-xxxx and converts it
into xxx.xxx.xxxx*/
int main(void) {
	int first, mid, last;
	printf("Enter phone number [(xxx)-xxx-xxxx]: ");
	scanf("%d-%d-%d", &first, &mid, &last);
	printf("You entered %d.%d.%d\n", first, mid, last);
	return 0;
}
