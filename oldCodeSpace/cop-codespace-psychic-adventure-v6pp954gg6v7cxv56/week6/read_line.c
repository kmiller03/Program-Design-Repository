#include <stdio.h>

#define STR_LEN 10
int read_line2(char *str, int n);

int main() {
    int num_chars;
    char sen[STR_LEN+1];
    printf("Enter a sentence: ");
    num_chars = read_line2(sen, STR_LEN);
    printf("You entered: %s, it has %d characters\n", sen, num_chars);
    return 0;
}

int read_line2(char *str, int n) {
    int ch, i = 0;
    while ((ch = getchar()) == ' ') { ;}
    *str++ = ch;
    i++;

    while ((ch = getchar()) != '\n') {
        if (i < n) {
            *str++ = ch;
            i++;
        }
    }
    *str = '\0';
    return i;
}



/*
int read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n') {
        if (i < n) {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}
*/