// Name: Kadin Miller
// NetID: kadinmiller
// Description: Takes a string input and prints whether or not it is a palindrome.
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define INPUT_LENGTH 100

int isPalindrome(char *inputArray, int length)
{
    char *beginningPointer = inputArray;
    char *endPointer = inputArray + length - 1;
    for (int i = 0; i < length; i++)
    {
        if (*beginningPointer != *endPointer)
        {
            return 0;
        }
        beginningPointer++;
        endPointer--;
    }
    return 1;
}

void clearArray(char *inputArray, int length)
{
    for (char *iterator = inputArray; iterator < inputArray + length; iterator++)
    {
        *iterator = '\0';
    }
}

// Reads the next line of inputs, ignoring any newlines until new entries. Returns 1 if termination character is detected.
// Requires string.h and ctype.h
int readLineTerminate(char *inputArray, char terminationCharacter, int maxLength)
{
    while (fgets(inputArray, maxLength, stdin))
    {
        // Removes newline character from end of input
        char *endOfInput = inputArray + strlen(inputArray) - 1;
        if (strlen(inputArray) > 0 && *endOfInput == '\n')
        {
            *endOfInput = '\0';
        }

        // If the string still has content, return 1 if termination character is present and 0 if not
        if (strlen(inputArray) > 0)
        {
            while (*inputArray)
            {
                if (tolower(*inputArray) == tolower(terminationCharacter))
                {
                    return 1;
                }
                inputArray++;
            }
            break; // exits input loop
        }
    }
    return 0;
}

int main()
{
    int inputLength;

    char ch;
    char inputMessage[INPUT_LENGTH + 1];
    char terminationArray[150];
    char *inputPointer;

    while (1)
    {
        // Takes input and clears any newlines, spaces, or special characters while doing so
        printf("Enter a message: ");
        inputLength = 0;
        inputPointer = inputMessage;
        if (((ch = getchar()) != '\n') && (ch != ' ') && (/*lowercase */ (ch >= 'a' && ch <= 'z') || /* or uppercase */ (ch >= 'A' && ch <= 'Z')))
        {
            *inputPointer = tolower(ch);
            inputPointer++;
            inputLength++;
        }
        while (((ch = getchar()) != '\n') && inputLength < INPUT_LENGTH)
        {
            if ((ch != ' ') && (/*lowercase */ (ch >= 'a' && ch <= 'z') || /* or uppercase */ (ch >= 'A' && ch <= 'Z')))
            {
                *inputPointer = tolower(ch);
                inputPointer++;
                inputLength++;
            }
            if (inputLength > INPUT_LENGTH)
            {
                printf("Error: input exceeded");
                return 0;
            }
        }
        *inputPointer = '\0';

        // Outputs whether or not a palindrome was detected
        if (isPalindrome(inputMessage, inputLength))
        {
            printf("Palindrome\n\n");
        }
        else
        {
            printf("Not a palindrome\n\n");
        }

        // Clears input array
        clearArray(inputMessage, inputLength);

        // Terminates the program if an N or n is inputted
        printf("Do you want to continue (N to stop)? ");
        if (readLineTerminate(terminationArray, 'n', 150))
        {
            return 0;
        }
    }
    return 0;
}
