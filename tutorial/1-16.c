/* Revise the main routine of the longest-line program so it will
correctly print the length of arbitrarily long input lines, and as much as possible
of the text. */

# include <stdio.h>
# define MAXLINE 1000 // maximum input line size

int loadLine(char line[], int maxline);
void copy(char to[], char from[]);

int main() {
	int c;
	int len; //current line length
	int max; //maximum length seen so far
	char line[MAXLINE]; //current input line
	char longest[MAXLINE]; //longest line saved here

	max = 0;
	while ((len = loadLine(line, MAXLINE)) > 0) {
		if (line[len-1] != '\n') {
			while ((c = getchar()) != EOF && c != '\n')  {
				++len;
			}
		}	
		if (len > max) {
			max = len;
			copy(longest, line);
		}
	}
	if (max > 0) {
		printf("%s", longest);
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

// copy from into to, assume to is big enough
void copy(char to[], char from[]) {
	int i;
	i = 0;
	while ((to[i] = from[i]) != 0)
		++i;
}
