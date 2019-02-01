/* Write the function htoi (s ), which converts a string of 
hexadecimal digits (including an optional 0x or 0X) into its 
equivalent integer value. The allowable digits are 0 through 9,
a through f, and A through F. */

# include <stdio.h>
# include <ctype.h>

# define YES 1
# define NO 0

int htoi(char s[]);

int main() {
	int n;
	n = htoi("0Xabcd");
	printf("%d\n", n);
}

int htoi(char s[]) {
    int hexdigit, i, inhex, n;
    i = 0;

    // if preceded by optional 0x or 0X, skip these chars
    if (s[i] == '0' && (s[i+1] == 'x' || s[i+1] == 'X')) {
        i = i + 2;
    }
    
    n = 0;
    inhex = YES;

    for (; inhex == YES; ++i) {
        if (s[i] >= '0' && s[i] <= '9')
            hexdigit = s[i] - '0';
        else if (s[i] >= 'a' && s[i] <= 'f')
            hexdigit= s[i] - 'a' + 10;
        else if (s[i] >= 'A' && s[i] <= 'F')
            hexdigit= s[i] - 'A' + 10;
        else
        	// not a valid hex character, skip it
            inhex = NO;
        
        if (inhex == YES)
            n = (16 * n) + hexdigit;
    }
    return n;
}
    