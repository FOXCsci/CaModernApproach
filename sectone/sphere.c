#include <stdio.h>
#define PI 3.14f
int main(void)
{
	float r; //RADIUS
	printf("Area of Sphere\nEnter Radius: ");
	scanf("%f", &r);
	printf("%f\n", (4.0f/3.0f)*PI*(r*r*r));
	return 0;
}
