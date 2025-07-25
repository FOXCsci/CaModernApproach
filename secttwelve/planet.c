/* Checks planet names given to command-line argument */

#include <stdio.h>
#include <ctype.h> /* toupper */
#include <string.h> /* strcmp */

#define NUM_PLANETS 8

int main(int argc, char *argv[]) {
	char *planets[] = {"MERCURY", "VENUS", "EARTH", "MARS", "JUPITER", "SATURN", "URANUS", "NEPTUNE"};
	char current[8];	
	int i, j;


	for (i = 1; i < argc; i++) {
		if (strlen(argv[i]) > 7) {
			continue;
		}
		strcpy(current, argv[i]);
	
		for(j = 0; j < 8; j++) {
			current[j] = toupper(current[j]);
		}
	
		current[8] = '\0';
	
		for (j = 0; j < NUM_PLANETS; j++) {
			if (strcmp(current, planets[j]) == 0) {
				printf("%s is planet %d\n", current, j + 1);
				break;
			}
		}
			if (j == NUM_PLANETS) {
				printf("%s is not a planet\n", current);
			}	
	
	}
	

	return 0;
}
