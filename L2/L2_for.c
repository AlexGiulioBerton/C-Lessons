#include <stdio.h>

/*
    Write Hello for ten times on the terminal
*/


int main()
{
    // We use for loop to execute something for a DEFINED number of times
    for (int i = 0; i < 10; i++)
    {
        printf("Hello\n");
    }


    // We use for while to execute something for a UNDEFINED number of times (until a condition is verified)
    int i = 0;
    while (i < 10)
    {
        printf("Hello\n");
        i++;
    }
    return 0;
}