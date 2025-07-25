#include <stdio.h>
// program that breaks down isbn number
int main(void) {
	int gs1, groupid, publishcode, itemno, checkdig;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d-%d", &gs1, &groupid, &publishcode, &itemno, &checkdig); 
	printf("GS1 Prefix: %d\nGroup identifier: %d\nPublisher Code: %d\n"
			"Item Number: %d\nCheck Digit: %d\n"
			,gs1, groupid, publishcode, itemno, checkdig);
	return 0;
}
