#include <stdio.h>

int main()
{
    // Print all the even numbers between 0 to 20 [0; 20]
    // Res 1:
    for (int i = 0; i <= 20; i++)
    {
        if (i % 2 == 0) // % is used to retrive the rest of a division
        {
            printf("%d\n", i);
        }
    }


    // Res 2:
    for (int i = 0; i <= 20; i += 2)
    {
        // 0 (1) 2 (3) 4 (5) 6 (7) 8 (9) ...
        printf("%d\n", i);
    }

    // Res 3: using a while loop
    int i = 0;
    while (i <= 20)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }

        i++;
    }


    // Res 4: using a while loop
    int i = 0;
    while (i <= 20)
    {
        printf("%d\n", i);
        i += 2;
    }

    return 0;
}