#include <iostream>

int main(int argc, char const *argv[])
{
    int x;        // define a variable named x, of type int
    double width; // define a variable named width, of type double
    int a, b;     // correct
    /* int a, int b; // wrong (compiler error) */

    // int a, double b; // wrong (compiler error)

    int a; double b; // correct (but not recommended)

    // correct and recommended (easier to read)
    int a;
    double b;
    return 0;
}
