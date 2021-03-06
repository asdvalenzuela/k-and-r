/* for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i) {
Write a loop equivalent to the for loop above without using && or || */

int loadLine(char s[], int lim) {
    int i,c;

    for(i = 0; i < lim - 1; ++i) {
        c = getchar();
        if (c == EOF)
            break;
        if (c == '\n')
            break;
        s[i] = c;
    }

    if(c == '\n') {
        s[i] = c;
        ++i;
    }

    s[i] = '\0';
    return i;
}