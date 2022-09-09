#include <iostream>

int main()
{
    int width;
    width = 5; // copy assignment of value 5 into variable width

    // variable width now has value 5

    width = 7; // change value stored in variable width to 7

    // variable width now has value 7

    int a;     // no initializer
    int b = 5; // initializer after equals sign
    // When an initializer is provided after an equals sign, this is called copy initialization. Copy initialization was inherited from the C language.
    //  Much like copy assignment, this copies the value on the right-hand side of the equals to the variable being created on the left-hand side. In the above snippet, variable width will be initialized with value 5.
    //  Copy initialization is not used much in modern C++. However, you may still see it in older code, or in code written by developers who learned C first.

    int c(6); // initializer in parenthesis
    // When an initializer is provided inside parenthesis, this is called direct initialization.
    // Direct initialization was initially introduced to allow for more efficient initialization of complex objects (those with class types, which we’ll cover in a future chapter). However, like copy initialization, direct initialization is not used much in modern C++ (except for one specific case that we’ll cover when we get to it).

    int d{7}; // initializer in braces
    // The modern way to initialize objects in C++ is to use a form of initialization that makes use of curly braces: brace initialization (also called uniform initialization or list initialization).
    // Brace initialization comes in three forms:

    int width{5};     // direct brace initialization of value 5 into variable width (preferred)
    int height = {6}; // copy brace initialization of value 6 into variable height
    int depth{};      // value initialization (see next section)

    int width{4.5}; // error: a number with a fractional value can't fit into an int
    // In the above snippet, we’re trying to assign a number (4.5) that has a fractional part (the .5 part) to an integer variable (which can only hold numbers without fractional parts).
    // Copy and direct initialization would simply drop the fractional part, resulting in the initialization of value 4 into variable width (your compiler may produce a warning about this, since losing data is rarely desired). However, with brace initialization, the compiler will generate an error instead, forcing you to remedy this issue before proceeding.
    // Conversions that can be done without potential data loss are allowed.

    int a = 5, b = 6; // copy initialization
    int c(7), d(8);   // direct initialization
    int e{9}, f{10};  // brace initialization (preferred)


    int a, b = 5; // wrong (a is not initialized!)
    int a = 5, b = 5; // correct
    return 0;
}