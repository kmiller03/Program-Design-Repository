#include <stdio.h>

int main() {
    /*
    int n = 12;
    if (n >= 1 >= 10) {
        printf("%d", n);
    }
    else {
        printf("lol no");
    }
    */


   int month1,day1,year1;
   int month2,day2,year2;

   //Take user input
   printf("Enter first date (mm/dd/yyyy):");
   scanf("%d/%d/%d", &month1,&day1,&year1);

   //Second user input
   printf("Enter second date (mm/dd/yyyy):");
   scanf("%d/%d/%d", &month2,&day2,&year2);

   //printf("First date: %d/%d/%d\nSecond date:%d/%d/%d", month1,day1,year1,month2,day2,year2);
    int date1earlier = 0;

    if (year2 > year1) {
        date1earlier = 1;
    }
    else if (year1 > year2) {
        date1earlier = 0;
    }
    else if (month2 > month1) {
        date1earlier = 1;
    }
    else if (month1 > month2) {
        date1earlier = 0;
    }
    else if (day2 > day1) {
        date1earlier = 1;
    }
    else if (day1 > day2) {
        date1earlier = 0;
    }


    if (date1earlier == 1) {
        printf("First date: %d/%d/%d\nSecond date:%d/%d/%d", month1,day1,year1,month2,day2,year2);
    }
    else {
        printf("First date: %d/%d/%d\nSecond date:%d/%d/%d", month2,day2,year2,month1,day1,year1);
    }


   return 0;
}