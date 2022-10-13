#include <stdio.h>
#include <stdlib.h>

FILE* open(const char*, const char*);

int main(int argc, char** argv) {
	if(argc != 4)
	{
		printf("Wrong number of arguments <programname> <pathname> <startingNumber> <endingNumber>\n");
		exit(EXIT_FAILURE);
	}
	
  	FILE* f = open(argv[1], "w");
  	for(int i = atoi(argv[2]); i <= atoi(argv[3]); ++i) {
		if (i % 3 == 0) {
	  		printf("Fizz");
	  		fprintf(f, "Fizz");
		}
		if (i % 5 == 0) {
	  		printf("Buzz");
	  		fprintf(f, "Buzz");
		}
		if ((i % 3 != 0) && (i % 5 != 0)) {
	  		printf("%d", i);
	  		fprintf(f, "%d", i);
		}
		printf("\n");
		fprintf(f, "\n");
  	}
  	return 0;
}

FILE* open(const char* path, const char* mode) {
  	return fopen(path, mode);
}

// Hint: Check out https://man7.org/linux/man-pages/man3/atoi.3.html