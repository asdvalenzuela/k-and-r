#include <stdio.h>

// Write a program to copy its input to its output, replacing each
// tab by \t, each backspace by \b, and each backslash by \ \. This makes tabs
// and backspaces visible in an unambiguous way
int main() {
	int c;

	while ((c = getchar()) != EOF) {
		// '\t' is a character constant equal to a numerical value in ASCII
		if (c == '\t') {
			putchar('\\');
			putchar('t');
			// "\t" is a string constant equal to the tab character
			// printf("\\t");
		} else if (c == '\b') {
			putchar('\\');
			putchar('b');
			// printf("\\b");
		} else if (c == '\\') {
			putchar('\\');
			putchar('\\');
			// printf("\\\\");
		} else {
			putchar(c);
		}
	}
}
