//Name: Kadin Miller
//Net ID: kadinmiller
//Description: Reduces a given fraction to its simplest terms
#include <stdio.h>

int main() {
    int numerator, denominator, simplifiedNumerator, simplifiedDenominator, numeratorModDenominator, denominatorModNumerator;
    do {
        //Takes inputs & breaks if 0. Takes mod.
        printf("Enter a fraction (enter 0 to stop):");
        scanf("%d/%d", &numerator, &denominator);
        if (numerator == 0 || denominator == 0) {
            break;
        }

        //Tests and outputs if the fraction simplifies to a whole number
        numeratorModDenominator = numerator % denominator;
        denominatorModNumerator = denominator % numerator;
        printf("1: %d, 2: %d\n", numeratorModDenominator, denominatorModNumerator);
        if (numeratorModDenominator == 0) {
            simplifiedNumerator = numerator / denominator;
            printf("In lowest terms: %d\n", simplifiedNumerator);
            continue;
        }
        else if (numeratorModDenominator == 0) {
            simplifiedNumerator = 1;
            simplifiedDenominator = denominator / numerator;
        }
        else if(numeratorModDenominator != 0 && denominatorModNumerator == 0) {
            simplifiedNumerator = numerator / numeratorModDenominator;
            simplifiedDenominator = denominator / numeratorModDenominator;
        }
        else if(denominatorModNumerator != 0) {
            simplifiedNumerator = numerator / denominatorModNumerator;
            simplifiedDenominator = denominator / denominatorModNumerator;
        }
        else {
            simplifiedNumerator = numerator;
            simplifiedDenominator = denominator;
        }

        printf("In lowest terms: %d/%d\n", simplifiedNumerator, simplifiedDenominator);

        //Three cases: whole number, unsimplifiable, and denominator is a multiple of the numerator
        //Need to move - denominators to - numerators
        //Need to account for numerators and denominators with GCD's. Can probably do GCD = numerator % denominator or vice versa as a final step given that its no other case.



    } while (numerator != 0 && denominator != 0);


    return 0;
}
