// Name: Kadin Miller
// NetID: kadinmiller
// Description: Creates and tracks up to 10 bank accounts
#include <stdio.h>
#include <stdlib.h>

#define MAXIMUM_NAME_LENGTH 30

void printMainMenu() {
    printf("******* Main menu *******\n"
            "c(reate an account)\n"
            "d(eposit money)\n"
            "w(ithdraw money)\n"
            "s(sort and print accounts)\n"
            "q(uit program)\n"
            "*************************\n"
            "Enter operation code (c, d, w, s, q):");
}

struct bank_account{
    int accountNumber;
    char accountType;
    char accountOwner[MAXIMUM_NAME_LENGTH];
    char openDate[10];
    int balance;
};


int main() {
    printMainMenu();

    return 0;
}