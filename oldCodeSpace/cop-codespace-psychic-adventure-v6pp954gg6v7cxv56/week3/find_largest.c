//Find the largest number
#include <stdio.h>

int main() {
    int userLength, max;

    //Defining array length
    printf("Enter the length of the array:");
    scanf("%d", &userLength);

    if (userLength <= 0) {
        printf("The length should be larger than 0.\n");
        return 0;
    }

    int numbers[userLength];

    printf("Enter %d integers:", userLength);
    //Getting integer numbers
    for (int i = 0; i < userLength; i++) {
        scanf("%d", &numbers[i]);
    }

    max = numbers[0];
    //find largest number
    for (int i = 0; i < 5; i++) {
        if (numbers[i] > max)
        max = numbers[i];
    }

    printf("max = %d\n", max);
    return 0;
}