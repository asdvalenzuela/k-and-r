#include <stdio.h>

// count blanks, tabs, and newlines
int main() {
	int c, n;

	n = 0;
	while ((c = getchar()) != EOF) {
		if ((c == '\n') || (c == '\t') || (c == ' ')) {
			++n;
		}
	}
	printf("%d\n", n);
}