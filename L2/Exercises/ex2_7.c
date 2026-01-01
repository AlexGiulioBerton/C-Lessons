#include <stdio.h>


/*
    Calulate the factorial of a number

    6! = 6 * 5 * 4 * 3 * 2 * 1
*/

int main()
{
    int v = 6;
    int fact = 1;

    while (v > 1)
    {
        fact = fact * v;
        v--;
    }

    return 0;
}