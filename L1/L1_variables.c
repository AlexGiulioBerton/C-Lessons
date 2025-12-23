#include <stdio.h>

int main()
{
    // Ex 1: given two variables a, b, swap the value of the variables
    int a = 10;
    int b = 40;

    printf("Variable A: %d\n", a);
    printf("Variable B: %d\n", b);

    int swap = a;
    a = b; // the value of b saved inside a

    /*
        a:      20
        b:      20
        swap:   10
    */

    b = swap;

    /*
        a:      20
        b:      10
        swap:   10
    */

    printf("-------------------\n");

    printf("Variable A: %d\n", a);
    printf("Variable B: %d\n", b);

    return 0;
}