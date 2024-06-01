//Name: Kadin Miller
//Net ID: kadinmiller
//Description: Calculates the gross pay, taxes due, and net pay per week for a given hours worked and hourly wage
#include <stdio.h>

#define OVERTIMETHRESHOLD 40
#define OVERTIMEMODIFIER 1.5

int main() {
    int hoursWorked, overtimeHours;
    float hourlyPay, grossIncome, netIncome, taxesDue, bracketOne, bracketTwo, bracketThree;

    //Continues program until exited by the user inputting 0
    do {
        //Hours input request and validation
        printf("Enter the number of hours worked in the week (enter 0 to stop):");
        scanf("%d", &hoursWorked);
        if (hoursWorked < 0) {
            printf("Invalid number\n");
            continue;
        }
        else if (hoursWorked == 0) {
            break;
        }

        //Wage input request and validation
        printf("Enter the pay rate (per hour, enter 0 to stop):");
        scanf("%f", &hourlyPay);
        if (hourlyPay < 0) {
            printf("Invalid number\n");
            continue;
        }
        else if (hourlyPay == 0) {
            break;
        }

        //Calculates gross income based on overtime hours
        overtimeHours = hoursWorked - OVERTIMETHRESHOLD;
        if (overtimeHours > 0) {
            grossIncome = ((hoursWorked - OVERTIMETHRESHOLD) * hourlyPay) + (overtimeHours * OVERTIMEMODIFIER * hourlyPay);
        }
        else {
            grossIncome = hoursWorked * hourlyPay;
        }
        
        //Calculates taxes due based on income
        if (grossIncome > 450) {
            bracketThree = (grossIncome - 450) * 0.2;
            bracketTwo = 150 * 0.15;
            bracketOne = 300 * 0.10;
        }
        else if (grossIncome > 300) {
            bracketThree = 0;
            bracketTwo = (grossIncome - 300) * 0.15;
            bracketOne = 300 * 0.10;
        }
        else {
            bracketThree = 0;
            bracketTwo = 0;
            bracketOne = grossIncome * 0.10;
        }
        taxesDue = bracketOne + bracketTwo + bracketThree;
        netIncome = grossIncome - taxesDue;

        //Prints gross pay, taxes, and net pay
        printf("Weekly pay (Gross): $%0.2f\n", grossIncome);
        printf("Tax: $%0.2f", taxesDue);
        printf("Weekly pay (Net): $%0.2f\n", netIncome);

    } while(hoursWorked != 0);

    return 0;
}