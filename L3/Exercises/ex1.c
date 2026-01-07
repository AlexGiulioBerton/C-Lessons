#include "stdio.h"

void calculate_average(double arr[], size_t DIM)
{
    double sum = 0.0;
    for (int i = 0; i < DIM; i++)
    {
        sum += arr[i];
    }

    double avg = sum / DIM;

    printf("The average temperature is: %f\n", avg);
}

double higher_temp(double temperatures[], size_t DIM)
{
    // Save the temporary higher value
    double higher = temperatures[0];

    for (int i = 0; i < DIM; i++)
    {
        if (temperatures[i] > higher)
        {
            higher = temperatures[i];
        }
    }

    return higher;
}

int main()
{
    // Given an array of temperatures
    double temp[] = {0, -1, -1.5, 1.2, 0.5, 0, 1};
    size_t DIM = 7;

    // calculate the average temperature of the day
    calculate_average(temp, DIM);

    // calculate the higher registered temperature 
    printf("The higher value is: %f\n", higher_temp(temp, DIM));

    return 0;
}