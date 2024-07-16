#include <stdio.h>

int main() {
    int digit1;
    int digit2;

    printf("Input a two digit integer:");
    scanf("%1d%1d", &digit1, &digit2);

    printf("Reversed: %d%d", digit2, digit1);

    return 0;
}