#include <stdio.h>

int main()
{
    char file_name[1000] = "animals.csv";
    char name[1000];
    char gender[50];
    char type[50];
    int age;
    double weight;
    FILE *csv_file = fopen(file_name, "r");
    if (csv_file == NULL)
    {
        printf("unable to open the file");
        return 1;
    }
    while (!feof(csv_file) && !ferror(csv_file))
    {
        if (fscanf(csv_file, "%[^,], %[^,], %[^,], %d, %lf\n",
                   name, type, gender, &age, &weight) == 5)
        {
            printf("name = '%s' type = '%s' gender = '%s' age = '%d' weight = '%.1f'\n",
                   name, type, gender, age, weight);
        }
    }

    return 0;
}