#include <stdio.h>

/*
    Calulate the factorial of 3, 4, 7, 8, 9

    6! = 6 * 5 * 4 * 3 * 2 * 1
*/

int factorial(int A)
{
    int fact = 1;

    while (A > 1)
    {
        fact = fact * A;
        A--;
    }

    return fact;
}

int foo(int A)
{
    A += 4;
    A = A/8;
    A = A*A;

    return A;
}

int main()
{
    int v = 3;

    int v_result = factorial(v);

    print("%d", v);

    int A = 9;
    foo(A);
    

    return 0;
}