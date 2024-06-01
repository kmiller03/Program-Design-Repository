#include <stdio.h>

int main() {

    /*
    int number;
    printf("enter a number:");
    scanf("%d", &number);

    while (number > 5 || number < 0) {
        printf("Invalid\n");
        printf("enter a number:");
        scanf("%d", &number);

    } 
    */

   /*
    //Generates an infinite loop because it skips 0 with the interior --n, which 
    int n;
    for (n = 9; n != 0; n--) {
        printf("%d", --n);
    }
    */

   /*
   int n = 0;
   int sum = 0;

    //adds up to 5 nonzero integers
    while (n < 5) {
    int i;
    scanf("%d", &i);
    if (i == 0)
        continue; //if you used break, here, it would cause it to immediately print sum
    sum += i;
    n++;
   }
    printf("Sum: %d\n", sum);
    */

   /*
   int sum = 0;
   for (int i = 0; i < 3; i++) {
        if (i%2 == 1) {
            break;
        }
    */

   //This is an infinite loop because of the semicolon after the while conditional
    int i = 3;
    while (i > 0); {
        printf("%d", i);
        i--;
    }
   
    return 0;
}