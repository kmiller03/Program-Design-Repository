// Name: Kadin Miller
// NetID: kadinmiller
// Description: Reads the inputted file and outputs average weather of each month to a new document when the command CAT is used
#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_TEMPERATURE_READINGS 100

int main(int argc, char *argv[])
{
    //Month title and boolean initialization
    float temperatureArray[12][31] = {0};
    int recordedDates[12][31];
    char *monthNames[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    for (int i = 0; i < 12; i++) {
        for (int b = 0; b < 31; b++) {
            recordedDates[i][b] = 0;
        }
    }
    int month;
    int day;
    float temperature;

    //File input and error checking
    FILE *inputFile = fopen(argv[1], "r");
    if (inputFile == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    //Records the inputted file's contents to an array
    fscanf(inputFile, "%*[^\n]\n");
    while (!feof(inputFile) && !ferror(inputFile)) {
        fscanf(inputFile, "%d, %d, %f\n", &month, &day, &temperature);

        //skips the line if it's been recorded already
        if (recordedDates[month-1][day-1] != 0) {
            continue;
        }
        recordedDates[month-1][day-1] = 1;
        temperatureArray[month-1][day-1] = temperature;
    }
    fclose(inputFile);

    //Generates new file to be written to based on inputted file's name
    char outputFileName[100];
    sprintf(outputFileName, "%s.txt", argv[1]);
    FILE *outputFile = fopen(outputFileName, "w");

    //Calculates the monthly and total measured days and average temperature
    int totalMeasuredDays = 0;
    float totalAverageTemperature = 0;
    for (int i = 0; i < 12; i++) {
        //Counts number of nonzero temperatures
        int measuredDays = 0;
        float monthAverageTemperature = 0;
        for (int b = 0; b < 31; b++) {
            if (recordedDates[i][b] != 0) {
                measuredDays++;
                monthAverageTemperature += temperatureArray[i][b];

                totalMeasuredDays++;
                totalAverageTemperature += temperatureArray[i][b];
            }
        }
        monthAverageTemperature /= measuredDays;

        //Skips month if there are no measured temperatures
        if (measuredDays == 0) {
            continue;
        }

        fprintf(outputFile, "**** %s ****\n", monthNames[i]);
        fprintf(outputFile, "Measured days: %d\n", measuredDays);
        fprintf(outputFile, "Average temperature: %f\n\n", monthAverageTemperature);
    }
    totalAverageTemperature /= totalMeasuredDays
    //Writes the total to the file
    fprintf(outputFile, "**** Total ****\n");
    fprintf(outputFile, "Measured days: %d\n", totalMeasuredDays);
    fprintf(outputFile, "Average temperature: %f\n\n", totalAverageTemperature);

    return 0;
}
