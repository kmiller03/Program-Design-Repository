//Reverse the elements in array
#include <stdio.h>

int main() {
    int array[] = {10, 20, 30, 40, 50};

    //Finds the length of the array, for fun
    int arraySize = sizeof(array) / sizeof(array[0]);
    //int backwardsArray[arraySize];

/*
    //Inputs the values of the array into a new one in inverse order
    for (int i = 0, j = arraySize - 1; i < arraySize; i++, j--) {
        backwardsArray[i] = array[j];
        printf("%d", backwardsArray[i]);
    }
*/

    //reverse numbers (teacher)
    for (int i = 0; i < arraySize/2; i++) {
        int tmp = array[i];
        array[i] = array[arraySize - i - 1];
        array[arraySize - i - 1] = tmp;
    }

    //display numbers
    for (int i = 0; i < arraySize; i++) {
        printf("%d, ", array[i]);
    }

    return 0;
}