#include <stdio.h>

int main() 
{
    // Calculate the seconds that have passed since the begging of the day
    // 1h = 60 min = 3600 sec
    // 1 min = 60 seconds

    int h;
    int m;
    int s;

    h = 12;
    m = 5;
    s = 50;

    int seconds = h * 3600 + m * 60 + s;

    printf("The seconds is: %d\n", seconds);

    return 0;
}