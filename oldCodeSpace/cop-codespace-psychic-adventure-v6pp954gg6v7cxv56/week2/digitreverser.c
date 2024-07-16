#include <stdio.h>

int main() {
    int userint = 0;
    int digit1;
    int digit2;

    printf("Input a two digit integer:");
    scanf("%d", &userint);

    digit2 = userint % 10;
    digit1 = userint / 10;
    //idk what I was trying to do here, but why does /10 work for digit 1?
    /*
    while (userint > 0) {
        userint /= 10;
        digit1++;
    }
    */
    printf("Reversed: %d%d", digit2, digit1);

    return 0;
}