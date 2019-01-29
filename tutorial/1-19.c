/* Write a function reverse (s) that reverses the 
character string s. Use it to write a program that 
reverses its input a line at a time. */

# include <stdio.h>
# define MAXLINE 1000 // maximum input line size

int loadLine(char line[], int maxline);
void reverse(char line[], int len);

int main() {
	int len; // current line length
	char line[MAXLINE]; // current input line

	while ((len = loadLine(line, MAXLINE)) > 0) {
		reverse(line, len);
		printf("%s", line);
	}
	return 0;
}

// read a line into s, return length
int loadLine(char s[], int lim) {
	int c, i;

	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
		s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}

// read a line into s and reverse it
void reverse(char s[], int len) {
	int i, temp;

	for (i = 0; i < len/2; i++) {
		temp = s[i];
		s[i] = s[len-(i+1)];
		s[len-(i+1)] = temp;
	}
}
