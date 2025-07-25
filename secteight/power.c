/*Uses a function to calculate x^n, buy using (x^(n/2))^2 if x is even,x * x^(n-1) is x is odd*/

#include <stdio.h>

int power(int x, int n); /*x^n*/

int main(void) {
	int x, n;
	printf("Computes value of x^n\nEnter Value for x: ");
	scanf("%d", &x);
	printf("Enter value for n: ");
	scanf("%d", &n);
		
	printf("Value: %d\n", power(x, n));
}

int power(int x, int n) {
	int i;

	if (n == 0) return 1;
	else if (n%2 == 0) {
		i = power(x, (n/2));
		return i*i;
	}
	else return x * power(x, n-1); 
} 
