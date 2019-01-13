#include <stdio.h>

// Write a program to copy its input to its output, replacing each
// string of one or more blanks by a single blank.
int main() {
	int c;
	int last;

	while ((c = getchar()) != EOF) {
		if ((last == ' ') && (c == ' ')) {
			continue;
		} else {
			putchar(c);
		}
		last = c;
	}
}
