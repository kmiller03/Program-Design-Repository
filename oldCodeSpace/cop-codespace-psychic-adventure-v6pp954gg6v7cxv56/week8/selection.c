#include <stdio.h>
void selection_sort(int arr[], int n)
{
    int i, j, *ptr = arr;
    for (i = 0; i < n; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (*(ptr + min) > *(ptr + j))
                min = j;
        }
        if (min != i)
        {
            // swap the integers
            int temp;
            temp = *(ptr + min);
            *(ptr + min) = *(ptr + i);
            *(ptr + i) = temp;
        }
    }
}