/* Uses function test_extension to determine if a file has a given extension */

#include <stdio.h>
#include <stdbool.h> /* bool and true/false */
#include <ctype.h> /* toupper */


bool test_extension(const char *file_name, const char *extension);


int main(void) {
	char extension[] = "java";
	char file_name[] = "program.JAVA";
		
	if (test_extension(file_name, extension)) {
		printf("The file extension is %s\n", extension);
	}

	else {
		printf("The file extension is not %s\n", extension);
	}

	return 0;
}

bool test_extension(const char *file_name, const char *extension) {
	while(*file_name != '.') {
		file_name++;
	}
	
	file_name++;

	while(*file_name++ && *extension++) {
		if (toupper(*file_name) != toupper(*extension)) {
			return false;
		}
	}

	return true;
}
