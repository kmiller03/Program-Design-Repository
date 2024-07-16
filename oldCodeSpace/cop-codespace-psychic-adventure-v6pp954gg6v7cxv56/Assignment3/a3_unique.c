//Name: Kadin Miller 
//NetID: kadinmiller
//Description: Takes a quantity of integers and list of integers from 0 to 200 and prints only unique numbers entered


#include <stdio.h>

int main() {
    int integerCount, newInt, isRepeated, list[100], ignoredValues, count, printedCount, i;
    
    //While loop runs program while the user has not inputted 0
    do {
        //Input and input verification
        printf("Enter the number of input integers (0 to stop): ");
        scanf("%d", &integerCount);
        if (integerCount == 0) {
            break;
        }
        else if (integerCount < 0) {
            printf("Invalid number\n");
            continue;
        }

        //Initialize a list based on inputted length and takes input for list of integers, ignoring invalid inputs
        printf("Enter numbers (0 - 200): ");
        ignoredValues = 0;
        count = 0;
        printedCount = 0;
        for (i = 0; i < integerCount; i++) {
            scanf(" %d", &newInt);
            if (newInt < 0 || newInt > 200) {
                printf("%d: invalid and ignored\n", newInt);
                i--;
                continue; 
            }
//57 80 148 39 170 201 136 47

// 86 98 86 100 -13 500 27 30

//86 98 86 100 -13
//98 77
            //Tests for repeated inputs
            isRepeated = 0;
            for (int b = 0; b < count; b++) {
                if (newInt == list[b]) {
                    isRepeated = 1;
                    ignoredValues++;
                    count++;
                    break;
                }
            }

            if (isRepeated != 1) {
                list[printedCount] = newInt;
                printedCount++;
                count++;
            }
        }

        //Clears buffer so it loops right
        while (getchar()!= '\n');

        //Prints all the unique valid numbers inputted
        printf("Unique numbers: ");
        for (i = 0; i < ((integerCount - ignoredValues)-1); i++) {
            printf("%d, ", list[i]);
        }
        printf("%d\n", list[i]);

    } while (integerCount != 0);

    return 0;
}

