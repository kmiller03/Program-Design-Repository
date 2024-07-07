#include <stdio.h>

int main() {
    char ch;

    printf("What do you want capitalized?\n");

    ch = getchar();
    while (ch != '\n') {
        if ((ch >= 'a' && ch <= 'z')) {
            ch -= ('a' - 'A');
            printf("%c", ch);
            ch = getchar();
            continue;
            
        }
            
        printf("%c",ch);
        ch = getchar();

    }



    return 0;
}