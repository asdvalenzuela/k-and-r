/* Write a program to remove trailing blanks and tabs from each
line of input, and to delete entirely blank lines */

# include <stdio.h>
# define MAXLINE 1000 // maximum input line size

int loadLine(char line[], int maxline);
void removeBlanksAndTabs(char line[], int len);

int main() {
	int len;
	char line[MAXLINE]; // current input line

	while ((len = loadLine(line, MAXLINE)) > 0) {
		removeBlanksAndTabs(line, len);
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

// read a line into s and remove trailing blanks and tabs
void removeBlanksAndTabs(char s[], int len) {
	int c, i;

	for (i = (len-1); i >= 0; i--) {
		if (s[i] == ' ' || s[i] == '\t') {
			s[i] = '\0';
		}
	}
}
