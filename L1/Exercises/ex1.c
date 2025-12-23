#include <stdio.h>

int main() {
    // Given the r of a circle find the length of the circumference
    double r = 2.78;
    double π = 3.1415;

    // circ = r * π * 2.0

    double circumference = r * π * 2.0;

    printf("The circumference of the circle is %f\n", circumference);

    return 0;
}