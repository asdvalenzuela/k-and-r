#include <stdio.h>

// Verify that the expression getchar() != EOF is 0 or 1

// type any letter to get a result of 1
// type ctrl + D to give EOF signal to result in 0
// demonstrates that != takes precedence over assignment
int main() {
	int c;
	c = getchar() != EOF;
	printf("%d\n", c);
}