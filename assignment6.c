// Name: Kadin Miller
// NetID: kadinmiller
// Description: Creates and tracks up to 10 bank accounts, and includes a sort feature
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXIMUM_NAME_LENGTH 30
#define CHARACTER_LIMIT 1000
#define ACCOUNT_MAXIMUM 10

// Account struct
struct bank_account
{
    int accountNumber;
    char accountType;
    char accountOwner[MAXIMUM_NAME_LENGTH];
    char openDate[11];
    int balance;
};

// Prints main menu text
void printMainMenu()
{
    printf("******* Main menu *******\n"
           "c(reate an account)\n"
           "d(eposit money)\n"
           "w(ithdraw money)\n"
           "s(sort and print accounts)\n"
           "q(uit program)\n"
           "*************************\n"
           "Enter operation code (c, d, w, s, q):");
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

// Clears an array
void clearArray(char *inputArray, int length)
{
    for (char *iterator = inputArray; iterator < inputArray + length; iterator++)
    {
        *iterator = '\0';
    }
}

struct bank_account createNewAccount(struct bank_account *accountArray)
{
    struct bank_account newAccount;

    // Runs continuously until a valid account number is entered, then assigns it to newAccount
    int accountNumber;
    while (1)
    {
        printf("Enter account number (4 digits): ");
        scanf("%d", &accountNumber);
        if (accountNumber > 9999 || accountNumber < 1000)
        {
            printf("Enter a number between 1000 and 9999.\n");
            continue;
        }

        for (int i = 0; i < ACCOUNT_MAXIMUM; i++)
        {
            if (accountArray[i].accountNumber == accountNumber)
            {
                printf("Account already exists. Please enter a different account number.\n");
                continue;
            }
        }
        newAccount.accountNumber = accountNumber;
        break;
    }

    // Runs until a valid account type is entered
    char accountType;
    printf("Enter account type: c(hecking), s(avings)\n"
           "c or s: ");
    while (1)
    {
        while (getchar() != '\n' && getchar() != EOF)
            ;
        scanf("%c", &accountType);
        accountType = tolower(accountType);
        if (accountType != 'c' && accountType != 's')
        {
            printf("Wrong account type. Enter c or s.\n");
            continue;
        }
        newAccount.accountType = accountType;
        break;
    }

    // Adds account holder's name to the newAccount struct
    char accountOwner[30];
    printf("Enter account holder's name: ");
    while (getchar() != '\n' && getchar() != EOF)
        ;
    scanf("%30s", accountOwner);
    for (int i = 0; i < strlen(accountOwner); i++)
    {
        newAccount.accountOwner[i] = accountOwner[i];
    }

    // Adds open date to newAccount
    while (1)
    {
        char openDateTemp[22];
        char openDate[22];
        int year = 0;
        int day = 0;
        int month = 0;
        char yearStr[4];
        char dayStr[2];
        char monthStr[2];
        while (getchar() != '\n' && getchar() != EOF)
            ;
        printf("Enter open date (YYYY-MM-DD): ");
        scanf("%s", openDate);
        strcpy(openDateTemp, openDate);
        if ((3 != sscanf(openDate, "%d-%d-%d", &year, &day, &month)) || ((year < 0 || year > 9999) || (day < 1 || day > 31) || (month < 1 || month > 12)))
        {
            printf("%s Wrong date format.\n", openDate);
            continue;
        }
        if ((3 != sscanf(openDate, "%s-%s-%s", yearStr, dayStr, monthStr)) || (strlen(yearStr) != 4) || (strlen(dayStr) != 2) || (strlen(monthStr) != 2))
        {
            while (getchar() != '\n' && getchar() != EOF)
            ;

            printf("%s Wrong date format.\n", openDate);
            continue;
        }
        //try checking character by character for the format instead :/
        for (int i = 0; i < strlen(openDate); i++)
        {
            newAccount.openDate[i] = openDate[i];
        }
        break;
    }

    float accountBalance;
    printf("Enter balance (number only): ");
    scanf("%f", &accountBalance);
    newAccount.balance = accountBalance;
    return newAccount;
}

int main()
{
    char inputArray[CHARACTER_LIMIT + 1];
    struct bank_account accountArray[ACCOUNT_MAXIMUM];

    // Prints the main menu and determines what function to call based on user input, then clears input
    printMainMenu();
    readLineTerminate(inputArray, '\0', CHARACTER_LIMIT);
    switch (inputArray[0])
    {
    case 'c':
        createNewAccount(accountArray);
        break;
    case 'd':
        break;
    case 'w':
        break;
    case 's':
        break;
    case 'q':
        break;
    default:
        printf("Error: Command not recognized\n");
        return 1;
    }
    clearArray(inputArray, CHARACTER_LIMIT + 1);
    return 0;
}
