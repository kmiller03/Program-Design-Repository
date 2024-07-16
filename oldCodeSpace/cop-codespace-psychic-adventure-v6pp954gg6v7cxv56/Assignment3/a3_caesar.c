//Name: Kadin Miller 
//NetID: kadinmiller
//Description: Runs a caeser cypher encryption over inputted text
#include <stdio.h>
#include <ctype.h>

#define INPUTMAXLENGTH 1500
int main() {
    int shiftAmount, count;
    char inputChar, encryptionMessage[INPUTMAXLENGTH - 1];

    do {

        //Takes sentence input limited to 150 characters
        printf("Enter message to be encrypted: ");
        inputChar = getchar();
        count = 0;
        while (inputChar != '\n' && count < INPUTMAXLENGTH) {
            encryptionMessage[count] = inputChar;
            inputChar = getchar();
            count++;
        }

        //Input and input verification
        printf("Enter shift amount (1-25, enter 0 to stop): ");
        scanf("%d", &shiftAmount);
        while (getchar()!= '\n'); //clears buffer
        if (shiftAmount == 0) {
            break;
        }
        else if (shiftAmount < 1 || shiftAmount > 25) {
            printf("Invalid number\n");
            continue;
        }

        //Encrypts message
        for (int i = 0; i < count; i++) {
            if (encryptionMessage[i] >= 'a' && encryptionMessage[i] <= 'z') {
                encryptionMessage[i] = 'a' + ( (encryptionMessage[i] - 'a' + shiftAmount) % 26);
            }
            else if (encryptionMessage[i] >= 'A' && encryptionMessage[i] <= 'Z'){
                encryptionMessage[i] = 'A' + ( (encryptionMessage[i] - 'A' + shiftAmount) % 26);
            }
        }

        //Prints encrypted message
        printf("Encrypted message: ");
        for (int i = 0; i < count && i < 150; i++) {
            printf("%c", encryptionMessage[i]);
        }
        printf("\n");

    } while (shiftAmount != 0);

    return 0;
}

