/* Uses the function get_extension to store the extension of a file in the string extension*/

#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(void) {
	char file_name[] = "my_superCool_program.c";
	char extension[5];
	get_extension(file_name, extension);

	printf("File extension: %s\n", extension);
	
	return 0;
}


void get_extension(const char *file_name, char *extension) {	
	
	while (*file_name) {
		if(*file_name++ == '.') {
			strcpy(extension, file_name);
			return;
		}
	}
	strcpy(extension, "");
}
