#include <stdio.h>

int main() {
    int number;
    int count = 0;
    int isPalindrome;

    printf("First 50 palindromic numbers:\n");
    for (number = 11; count < 50; number++)
    {
        isPalindrome = 0;

        int n = number, remainder, reverse = 0;
        while (n != 0){
            remainder = n % 10;
            reverse = reverse * 10 + remainder;
            n = n/10;
        }
        if (reverse == number) {
            isPalindrome = 1;
        }
        if (isPalindrome == 1) {
            printf("%d\n",number);
            count++;
            continue;
        }
    }

    return 0;
}