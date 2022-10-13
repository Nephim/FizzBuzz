#include <stdio.h>

int main() {
  //int i;
  for(int i = 1; i <= 15; ++i) {
    if (i % 3 == 0) {
      printf("Fizz");
    }
    if (i % 5 == 0) {
      printf("Buzz");
    }
	if ((i % 3 != 0) && (i % 5 != 0)) {
      printf("%d", i);
    }
	printf("\n");
  }
  return 0;
}

// Build from CLI: gcc cizzbuzz.c -o cizzbuzz
// Hint: Are all variables initialized correctly?
// Hint: Is the syntax correct?
