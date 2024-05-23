#include <stdio.h>

int main() {
    float quiz1,quiz2,hw1,hw2,hw3,midterm,final;

    //Takes input for each assignment grade
    printf("This is the total grade calculator program.\n");
    printf("Enter Quiz1 grade: ");
    scanf("%f", &quiz1);

    printf("Enter Quiz2 grade: ");
    scanf("%f", &quiz2);

    printf("Enter Homework1 grade: ");
    scanf("%f", &hw1);

    printf("Enter Homework2 grade: ");
    scanf("%f", &hw2);

    printf("Enter Homework3 grade: ");
    scanf("%f", &hw3);

    printf("Enter Midterm exam grade: ");
    scanf("%f", &midterm);

    printf("Enter Final exam grade: ");
    scanf("%f", &final);

    //Calculates the average for each category and final value
    float quizAverage = ((quiz1+quiz2) / 2) * 0.1;
    float hwAverage = ((hw1+hw2+hw3) / 3) * 0.2;
    float midtermAverage = midterm * 0.3;
    float finalAverage = final * 0.4;

    float totalGrade = (quizAverage + hwAverage + midtermAverage + finalAverage); 
    //Individual average check print
    //printf("%.2f, %.2f, %.2f, %.2f", quizAverage,hwAverage,midtermAverage,finalAverage);

    printf("Total Grade: %0.2f", totalGrade);

    return 0;
}
