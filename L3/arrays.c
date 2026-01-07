#include <stdio.h>

int main()
{
    // Create an array of 5 cells
    size_t SIZE = 5;
    int array[SIZE];
    
    
    // Put some values inside
    array[0] = 10;
    array[1] = 20;
    array[2] = 30;
    array[3] = 40;
    array[4] = 50;
    // array[5] = 60; -> out of bound exception
    
    // Print all the content of the array
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d\n", array[i]);
    }

    // Calculate the sum of the values stored
    int sum = 0;
    for (int i = 0; i < SIZE; i++)
    {
        sum += array[i];
    }


    return 0;
}