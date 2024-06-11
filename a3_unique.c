//Name: K Miller 
//NetID: k miller
//Description: Takes a quantity of integers and list of integers from 0 to 200 and prints only unique numbers entered


#include <stdio.h>

int main() {
    int integerCount, newInt;
    
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

        //Defines a list based on inputted length and takes input for list of integers, ignoring invalid inputs
        int list[integerCount];
        printf("Enter numbers (0 – 200): ");
        for (int i = 0; i < integerCount + 1; i++) {
            scanf("%d", &newInt);
            if (newInt < 0 || newInt > 200) {
                printf("%d: invalid and ignored\n", newInt);
                continue; 
            }
            else {
                list[i] = newInt;
            }
        }

        //Prints all the unique valid numbers inputted
        printf("Unique numbers: ");
        for (int i = 0; i < integerCount; i++) {
            printf("%d, ", list[i]);
        }
        printf("%d\n", list[integerCount]);
        
    } while (integerCount != 0);

    return 0;
}
