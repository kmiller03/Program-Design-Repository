//Name: Kadin Miller 
//NetID: kadinmiller
//Description: Takes a string input and prints whether or not it is a palindrome.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define INPUT_LENGTH 100

int main() {
char terminateProgram = ' ';
int isPalindrome = 1;
int count;

char ch;
char inputMessage[INPUT_LENGTH + 1];
char *inputPointer;
char *inversePointer;

while (terminateProgram != 'N' && terminateProgram != 'n') {
    
    //Takes input and clears any newlines, spaces, or special characters while doing so
    printf("Enter a message: ");
    count = 0;
    inputPointer = inputMessage;
    while ( ( (ch = getchar() ) != '\n') && count < INPUT_LENGTH) {
        if ( (ch != ' ') && (   /*lowercase */ (ch >= 'a' && ch <= 'z') || /* or uppercase */ (ch >= 'A' && ch <= 'Z')   ) ) {
            *inputPointer = ch;
            inputPointer++;
            count++;
        }
        if (count > INPUT_LENGTH) {
            printf("Error: input exceeded");
            return 0;
        }
    }
    *inputPointer = '\0';

    //Test if the inputted message is a palindrome
    isPalindrome = 1;
    inversePointer = inputMessage;
    inputPointer--;
    for (int i = 0; i < count / 2; i++) {
        if (*inversePointer != *inputPointer) {
            isPalindrome = 0;
            break;
        }
        inversePointer++;
        inputPointer--;
    }

    //Outputs whether or not a palindrome was detected
    if (isPalindrome == 0) {
        printf("Not a palindrome\n\n");
    }
    else {
        printf("Palindrome\n\n");
    }

    //Clears input array
    for (inputPointer = inputMessage; inputPointer < inputMessage + INPUT_LENGTH; inputPointer++) {
        *inputPointer = '\0';
    }

    //Terminates the program if an N is inputted as first char
    printf("Do you want to continue (N to stop)? ");
    do {
        if (ch == 'n' || ch == 'N') {
            return 0;
        }
        //ch = '\n';
    }while (((ch = getchar()) == ' ' || ch == '\n' ) && !isalpha(ch));
    if (ch == 'n' || ch == 'N') {
        return 0;
    }
    /*
    while (ch == '\n' || ch == 'n' || ch == 'N') {
        ch = getchar();
        if (ch == 'n' || ch == 'N') {
            return 0;
        }
    }
    */
    while ((ch = getchar()) != '\n');
}
    return 0;
}
