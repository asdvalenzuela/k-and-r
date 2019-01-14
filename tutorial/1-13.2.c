// Write a program to print a vertical histogram of 
// the lengths of words in its input

#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word

int main() {
	int c, length, i, j, state, maxLength;
	length = maxLength = 0;

	// initialize an array of ints with length 10
	int wordLengths[10];

	// initialize all indices of array to 0
	for (i = 0; i < 10; ++i) {
		wordLengths[i] = 0;
	}

	state = OUT;
	while ((c = getchar()) != EOF) {
		if ((c == ' ') || (c == '\n') || (c == '\t')) {
			state = OUT;
			if (length > maxLength) {
				maxLength = length;
			}
			wordLengths[length]++;
			length = 0;
		} else if (state == OUT) {
			state = IN;
			++length;
		} else if (state == IN) {
			++length;
		}
	}

	// prints the histogram
	// could improve magic number 10 here
	for (i = maxLength; i > 0; --i) {
		for (j = 0; j < 10; ++j) {
			if( i <= wordLengths[j]) {
				printf(" * ");
			} else {
				printf("   ");
			}
		}
		putchar('\n');
	}
	for (i = 0; i < 10; ++i) {
		printf(" %d ", i);
	} 
}
