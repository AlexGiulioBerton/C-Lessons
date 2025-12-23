#include <stdio.h>
#include <math.h>

int main()
{
    // Given the two catent of a rectangle triangle, calculate the hypotenuse

    // i^2 = c1^2 + c2^2
    // i*i = c1*c1 + c2*c2
    // i = (c1*c1 + c2*c2)/i

    // c1 = 3, c2 = 4

    double c1 = 3, c2 = 4;

    double i = sqrt(c1*c1 + c2*c2); // sqrt = √ 

    printf("The hypotenuse of the rect triangle of c1 = %f and c2 = %f is %f\n", c1, c2, i);

    return 0;
}