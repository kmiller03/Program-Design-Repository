#include <stdio.h>

int main() {
    int digits = 0, n;

    //Assigns n to input
    printf("Enter a nonnegative integer ");
    scanf("%d", &n);

    //Finds how many digits is in the entered number
    do{
        n /= 10;
        digits++;
    } while (n > 0);

    printf("The number has %d digits", digits);
    return 0;
}