#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    printf("Enter a message\n");

    do {
        ch = getchar();

        if (isalpha(ch)) {
            ch = toupper(ch); }

        printf("%c",ch);
    }
    while (ch != '\n');

    return 0;
}