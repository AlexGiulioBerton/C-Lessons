#include <stdio.h>

// 2.1 page 12
// Calculate the sum of the integer numbers between 0 to N (where N is a variable)

int main()
{
    int N = 17;
    int sum = 0;

    for (int i = 0; i <= N; i++)
    {
        sum += i;
    }

    return 0;
}