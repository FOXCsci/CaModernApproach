/* Uses a function to remove the file name at the end of a website's url, for example https://www.mywebsite.com/index.html the
function will remoe the index.html from the URL */

#include <stdio.h>

void remove_filename(char *url);

int main(void) {
	char url[] = "https://www.website.com/index.html";

	printf("Url: %s\n", url);

	remove_filename(url);
	
	printf("Url without file name: %s\n", url);
	
	return 0;
}


void remove_filename(char *url) {
	/* Search for the end of the url string*/
	while(*url) {
		url++;
	}

	while(*url != '/') {
		url--;
	}
	
	*url = '\0'; 	
}
