//Name: Kadin Miller
//Net ID: kadinmiller
//Description: Takes an input and finds all pythagorean triples with a hypotenuse of length equal to or less than that value
#include <stdio.h>

int main() {
    int sideA, sideB, sideC = 0, i;

    do {
        //Requests an sideC and sends an error if the sideC is not larger than 4
        if (sideC < 5 && sideC != 0) {
            printf("Enter an integer larger than 4.\n"); }
        printf("Enter a length of hypothenuse (enter 0 to stop):");
        scanf("%d", &sideC);

        //Loops over each combination of side lengths from 0 to the hypotenuse inputs and prints valid pythagorean triples
        for (i = 1; i <= sideC; i++) {
            for (sideA = 1; sideA < sideC; sideA++) {
                for (sideB = 1; sideB < sideC; sideB++) {
                    if ( (i * i) == (sideA * sideA + sideB * sideB) ) {
                        printf("a=%d, b=%d, c=%d\n", sideA, sideB, i); }
                }
            }
        }
    } while (sideC != 0);
    

    
    

    return 0;
}