#include <stdio.h>

int main() {
    int grade = 3;

    switch (grade) {
        case 4: printf("Excellent\n");
                break;
        case 3: printf("Good\n");
                break;
        case 2: printf("Average\n");
                break;  
        case 1: printf("Failing\n");
                break;
        default: printf("Illegal grade\n");
                break;
    }

    return 0;
}