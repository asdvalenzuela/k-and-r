// Write a program to print a histogram of the lengths of words in
// its input. It is easy to draw the histogram with the bars horizontal; a vertical
// orientation is more challenging.

#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word

int main() {
	int c, length, i, j, state;
	length = 0;

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
	for (i = 0; i < 10; ++i) {
		printf("%d: ", i);
		for (j = 0; j < wordLengths[i]; ++j) {
			printf(" x ");
		}
		printf("\n");
	}
}