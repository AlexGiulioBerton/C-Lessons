#include <stdio.h>

int main() // the function where everything begins
{
    printf("Hello World!"); // printf is the function used to print to the terminal

    // Variables
    // A variable is part of the memory where we put inside data
    /*
        Variable types:
        1. int = ... , -1, 0, 1, 2 ....
        2. double = 1.5, 0.2, 1.9, 2.6 (8 bytes)
        3. float = 1.5, 0.2, 1.9, 2.6 (4 bytes)
        4. char = a, b, c, d, ecc
    */

    // TYPE name_variable; Definition statement (reserve memory for a variable but we don't put anything inside)

    int a;

    // Definition and assignment statment: TYPE name_variable = value;

    int b = 5;
    //int a = 6; // NOT PERMITTED: inside two brackets we haven't to put variables with the same name

    {
        int a = 2;
    }

    // double variable definition
    double d = 8.9;

    // float variable definition
    float f = 8.9;

    // char variable definition
    char c = 'A';

    return 0; // here the program stop
}