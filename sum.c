//Written by the teacher. Fact, square, and cube functions are in week 9-2 slides.
#include <stdio.h>

int sum(int (*f)(int), int start, int end)
{
    int i;
    int result = 0;
    for (i = start; i < end; i++) {
        result += f(i);
    }
    return result;
}
int fact(int n)
{
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}

int square(int n)
{
}
int cube(int n)
{
}

int fact(int n)
{
}

int main()
{
    int start = 0;
    int end = 5;
    int result = sum(fact, start, end);
    printf("Result of factorial %d to %d is %d\n", start, end, result);
    int result = sum(square, start, end);
    printf("Result of square %d to %d is %d\n", start, end, result);
    int result = sum(cube, start, end);
    printf("Result of cube %d to %d is %d\n", start, end, result);

    return 0;
}