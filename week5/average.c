#include <stdio.h>

int main() {
	int array[10], sum = 0; //sum should be a float, ideally. They didn't specify integers.
	int *indexValue = &array[0];
	float average;
	

	for (int i = 0; i < 10; i++) {
        //Scanf can't print, numnuts
        printf("Input value:");
        //lmao in first attempt forgot to add )
		scanf("%d", &array[i]);
	}

    //she used indexValue entirely instead of i, here. 
	for (int i = 0; i < 10; i++) {
		sum += *indexValue; 
		*indexValue++;
	}
	average = sum/10;
    printf("actual average: %f. Teacher rounded: %.f\n", average, average);
	printf("The average is %0.1f.", average);

	return 0;
}