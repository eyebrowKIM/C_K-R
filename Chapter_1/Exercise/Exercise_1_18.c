#include <stdio.h>
#define MAX_LENGTH 1000

int my_getline(char line[], int max);
void remove_blanks_and_tabs(char line[], int len, char result[]);

int main() {
    
    int len;
    char line[MAX_LENGTH];
    char result[MAX_LENGTH];

    while ((len = my_getline(line, MAX_LENGTH)) > 0) {
        remove_blanks_and_tabs(line, len, result);
        printf("%s\n", result);
    }

    return 0;
}

int my_getline(char s[], int lim) {
    int c, i;
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';

    return i;
}

void remove_blanks_and_tabs(char line[], int length, char result[]) {
    
    int i, tmp = 0;

    for (i = 0; i < length; i++)
        if (line[i] != '\t' && line[i] != '\n' && line[i] != ' ') {
            result[tmp] = line[i];
            tmp++;
        }
    result[tmp] = '\0';
}