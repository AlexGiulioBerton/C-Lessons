#include <stdio.h>

/*
    18 -> 10010(2)

      :2 
    18 | 0 
    9  | 1
    4  | 0
    2  | 0
    1  | 1
    0
*/

int main()
{
    int N = 18;

    while (N > 0)
    {
        printf("%d\n", N % 2);
        N = N / 2;
    }

    return 0;
}