#include <stdio.h>

int main() {
    int dayOfWeek;
    printf("Enter the number (0-6): ");
    scanf("%d", &dayOfWeek);
    
    switch () {
        case 0:
        case 5: 
        case 6: printf("There is not class.");  
                break;
        case 1: printf("You have Biology class.");
                break;
        case 2: printf("You have Calculus class.");
                break;
        case 3: printf("You have English class.");
                break;
        case 4: printf("You have Program Design class.");
                break;
    }
    printf("\n");


    return 0;
}