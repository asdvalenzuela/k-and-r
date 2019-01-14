// Write a program to print a histogram of the 
// frequencies of different characters in its input

#include <stdio.h>

#define TNOCHAR 128  /* Total Number of characters is 128: 0 - 127 */

int main() {
	int c, i, j;

	// initialize an array
	int chars[TNOCHAR];

	// initialize all indices of array to 0
	for (i = 0; i < TNOCHAR; ++i) {
		chars[i] = 0;
	}

	while ((c = getchar()) != EOF) {
		++chars[c];
	}

	// prints the histogram
	for (i = 0; i < TNOCHAR; ++i) {
		putchar(i);
		for (j = 0; j < chars[i]; ++j) {
			printf(" x ");
		}
		printf("\n");
	}
}