#include <stdio.h>

int main () {
    char ch;
    int is_valid = 1;
    int count = 0;

    printf("Input password\n");

    ch = getchar();
    while (ch != '\n') {
        if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')))
            is_valid = 0;
        count++;
        ch = getchar();

    }

    if (count < 8) 
        is_valid = 0;
    
    if (is_valid == 0)
        printf("Invalid password");
    else
        printf("Valid password");
    //ch must be between 48 and 57, 65 and 90, or 97 and 122.

    return 0;
}