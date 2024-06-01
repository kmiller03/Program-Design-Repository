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
        numeratorModDenominator = numerator % denominator;
        denominatorModNumerator = denominator % numerator;

        //Tests and outputs if the fraction simplifies to a whole number
        if (numeratorModDenominator == 0) {
            simplifiedNumerator = numerator / denominator;
            printf("In lowest terms: %d\n", simplifiedNumerator);
            continue;
        }
        //Case for fractions with numerator that simplifies to 1
        else if(denominatorModNumerator == 0) {
            simplifiedNumerator = 1;
            simplifiedDenominator = denominator / numeratorModDenominator;
        }
        //Case for fractions with a greatest common denominator
        else if(denominatorModNumerator != 0 && (denominator % denominatorModNumerator) == 0) {
            simplifiedNumerator = numerator / denominatorModNumerator;
            simplifiedDenominator = denominator / denominatorModNumerator;
        }
        //Case for already simplified fractions
        else {
            simplifiedNumerator = numerator;
            simplifiedDenominator = denominator;
        }
        //Simplifies negative denominators
        if (simplifiedDenominator < 0) {
            simplifiedNumerator *= -1;
            simplifiedDenominator *= -1;
        }
        
        //Output
        printf("In lowest terms: %d/%d\n", simplifiedNumerator, simplifiedDenominator);
    } while (numerator != 0 && denominator != 0);


    return 0;
}
