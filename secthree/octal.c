#include <stdio.h>

/*Program that gets a number input and displays it in octal */

int main(void) {
	int n; //input
	int x; // number converted to octal
	printf("Enter a number between 0 and 32767: ");
	scanf("%d", &n);	
	x = n%8; // first place
	n /=8;
	x += (n%8) * 10; // second place
	n /=8;
	x += (n%8) * 100; // third place
	n /= 8;
	x += (n%8) * 1000; // fourth place
	n /= 8;
	x += (n%8) * 10000; // fifth place
	printf("%d\n", x);
	return 0;
}
