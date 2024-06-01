//Name: Kadin Miller
//Net ID: kadinmiller
//Description: Reduces a given fraction to its simplest terms
#include <stdio.h>

int main() {
    int numerator, denominator, simplifiedNumerator, simplifiedDenominator;
    do {
        //Takes inputs & breaks if 0
        printf("Enter a fraction (enter 0 to stop):");
        scanf("%d/%d", &numerator, &denominator);
        if (numerator == 0 || denominator == 0) {
            break;
        }

        //Tests and outputs if the fraction simplifies to a whole number
        if ((numerator % denominator) == 0) {
            simplifiedNumerator = numerator / denominator;
            printf("In lowest terms: %d\n", simplifiedNumerator);
        }
        else if (denominator % numerator == 0) {
            simplifiedNumerator = 1;
            simplifiedDenominator = denominator / numerator;
            printf("In lowest terms: %d/%d\n", simplifiedNumerator, simplifiedDenominator);
        }
        else {
            simplifiedNumerator = numerator;
            simplifiedDenominator = denominator;
            printf("In lowest terms: %d/%d\n", simplifiedNumerator, simplifiedDenominator);
        }

        //Three cases: whole number, unsimplifiable, and denominator is a multiple of the numerator



    } while (numerator != 0 && denominator != 0);


    return 0;
}
