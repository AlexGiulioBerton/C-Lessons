#include <stdio.h>
#include <math.h>

int main()
{
    // Given three marks, calculate the average and print "PROMOTED" if the avg is over than 6.0

    int v1, v2, v3;

    v1 = 8;
    v2 = 5;
    v3 = 5;

    double avg = (v1 + v2 + v3)/3;

    if (avg >= 6.0)
    {
        printf("PROMOTED\n");
    }
    else
    {
        printf("FAILED\n");
    }

    return 0;
}