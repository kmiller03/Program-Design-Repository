#include <stdio.h>

int main() {
    char arr[100];
    char *ptr, ch;
    int len = 0;
    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n') {
        if (len < 100) {
            arr[len++] = ch;
        }
    }
    printf("Original sentence: ");
    for (ptr = arr; ptr < &arr[len]; ptr++) {
        printf("%c", *ptr);
    }
    int wc = 0;
    int word = 0;
    for (ptr = arr; ptr < &arr[len]; ptr++) {
        if (*ptr == ' ') {
            word = 0;
        }
        if (*ptr >= 'a' && *ptr <= 'z') {
            *ptr = 'A' + *ptr - 'a';
        }
        if (*ptr >= 'A' && *ptr <= 'Z') {
            if (word ==0) {
                word = 1;
                wc++;
            }
            else { continue;} 
        }
    }
    printf("\nWord count: %d\n", wc);
    printf("Final sentence: ");
    for (ptr = arr; ptr < &arr[len];  ptr++) {
        printf("%c", *ptr);
    }
    printf("\n");
    return 0;
}