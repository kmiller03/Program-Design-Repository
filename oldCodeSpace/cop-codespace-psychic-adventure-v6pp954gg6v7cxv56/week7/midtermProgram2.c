#include <stdio.h>

void print_binary(int n) {
    if (n == 0) {
        return;
    }
    int quotient;
    int remainder;

    quotient = n / 2;
    remainder = n % 2;
    print_binary(quotient);

    printf("%d", remainder);
}

int main() {
    int number;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    if (number < 0) { number *= -1; }
    printf("A decimal number is %d.\n", number);
    if (number == 0) {
        printf("The binary representation is 0.\n");
    }
    else {
        printf("The binary representation is ");
        print_binary(number);
        printf(".\n");
    }

    return 0;
}