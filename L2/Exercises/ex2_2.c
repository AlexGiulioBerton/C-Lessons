#include <stdio.h>

/* 
    2.2: calulate the sum of the squares of the numbers between 0 and N
*/

int main()
{
    int N = 17;
    int sum = 0;

    for (int i = 0; i <= N; i++)
    {
        sum += i * i;
    }

    printf("%d\n", sum);

    return 0;
}