#include <stdio.h>

int main()
{
    // Find the maximum between three numbers
    int a = 50, b = 20, c = 30;

    int max = a;

    if (b > max)
    {
        max = b;
    }
    
    if (c > max)
    {
        max = c;
    }

    printf("The maximum between %d, %d and %d is %d\n", a, b, c, max);

    return 0;
}