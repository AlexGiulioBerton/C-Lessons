#include <stdio.h>

/* Develop a calculator */
/*
    We want to create the functions able to:
    1. Calculate the sum of two values
    2. Calculate the difference of two values
    3. Print A * B
    4. Caluculate A / B
    5. Calculate A^B
    6. Calculate A^A
*/

int sum(int A, int B)
{
    int sum = A + B;
    return sum;
}

int difference(int A, int B)
{
    return A - B;
}

void mult(int A, int B)
{
    int ris = A * B;
    printf("%d\n", ris);
}

double division(int A, int B)
{
    return A / B;
}

int main()
{

    return 0;
}