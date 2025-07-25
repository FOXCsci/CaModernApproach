#include <stdio.h>
#define INCHES_PER_POUND 166

int main(void) 
{
	int length = 12, width = 10, height = 8;
	int volume = length * width * height;
	printf("Dimensions: %dx%dx%d\n", length, width, height);
	printf("Volume: %d\n", volume);
	printf("Dimensional Weight (pounds): %d\n", (volume + INCHES_PER_POUND - 1)/166);
	return 0;
}
