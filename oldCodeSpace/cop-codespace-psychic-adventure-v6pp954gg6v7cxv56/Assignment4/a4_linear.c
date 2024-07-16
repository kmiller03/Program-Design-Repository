//Name: Kadin Miller 
//NetID: kadinmiller
//Description: Creates an array of a length defined by the user, lets them input values, and searches for a value given by the user
#include <stdio.h>

int main() {
    int arrayLength;
    int newInt;
    int searchNumber;
    int searchCount;
    int count;
    int *arrayPointer;
    int *placePointer;

    //While loop runs program while the user has not inputted 0
    do {

        //Input and input verification
        printf("Enter the number of input integers (0 to stop): ");
        scanf("%d", &arrayLength);
        if (arrayLength == 0) {
            break;
        }
        else if (arrayLength < 0) {
            printf("Invalid number\n\n");
            continue;
        }

        //Records the entered list of numbers
        int array[arrayLength];
        printf("Enter numbers: ");
        for (arrayPointer = array; arrayPointer < array + arrayLength; arrayPointer++) {
            scanf(" %d", &newInt);
            *arrayPointer = newInt;
        }

        //Clears buffer so it loops right
        while (getchar()!= '\n');

        //Takes the value to be searched for and checks each value of the array for it
        printf("What is the search number? ");
        scanf("%d", &searchNumber);
        searchCount = 0;
        count = 0;
        int place[arrayLength];
        for (arrayPointer = array; arrayPointer < array + arrayLength; arrayPointer++) {
            if (searchNumber == *arrayPointer) {  
                place[searchCount] = count;           
                searchCount++;
            }
            count++;
        }

        //Outputs how many times the search number was found and if so in what position
        if (searchCount == 0) {
            printf("Not found: %d is not in the array.\n", searchNumber);
        }
        else {
            printf("Found: %d is in position ", searchNumber);
            for (placePointer = place; placePointer < place + searchCount - 1; placePointer++) {
                printf("%d, ", *placePointer);
            }
            printf("%d", *placePointer);
            printf(" in the array.\n");
        }
        printf("\n");

    } while (arrayLength != 0);

    return 0;
}
