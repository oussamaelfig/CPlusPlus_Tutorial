// To use the functionality defined within the iostream library, we need to include the iostream header at the top of any code file that uses the content defined in iostream, like so:

#include <iostream>

// rest of code that uses iostream functionality here

int main()
{
    // std::cout
    // The iostream library contains a few predefined variables for us to use. One of the most useful is std::cout, which allows us to send data to the console to be printed as text. cout stands for “character output”.
    // As a reminder, here’s our Hello world program:

    std::cout << "Hello world!"; // print Hello world! to console
    std::cout << 4;              // print 4 to console

    int x{5};       // define integer variable x, initialized with value 5
    std::cout << x; // print value of x (5) to console

    // To print more than one thing on the same line, the insertion operator (<<) can be used multiple times in a single statement to concatenate (link together) multiple pieces of output. For example:
    std::cout << "Hello"
              << " world!";

    // Here’s another example where we print both text and the value of a variable in the same statement:
    int x{5};
    std::cout << "x is equal to: " << x;

    // std::endl
    // One way to do that is to use std::endl. When output with std::cout, std::endl prints a newline character to the console (causing the cursor to go to the start of the next line). In this context, endl stands for “end line”.
    std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line of the console
    std::cout << "My name is Alex." << std::endl;

    // Best practice
    // Prefer ‘\n’ over std::endl when outputting text to the console.

    // std::cin
    // std::cin is another predefined variable that is defined in the iostream library. Whereas std::cout prints data to the console using the insertion operator (<<), std::cin (which stands for “character input”) reads input from keyboard using the extraction operator (>>). The input must be stored in a variable to be used.
    std::cout << "Enter a number: "; // ask user for a number

    int x{};       // define variable x to hold user input (and zero-initialize it)
    std::cin >> x; // get number from keyboard and store it in variable x

    std::cout << "You entered " << x << '\n';

    // Just like it is possible to output more than one bit of text in a single line, it is also possible to input more than one value on a single line:
    std::cout << "Enter two numbers separated by a space: ";

    int x{};            // define variable x to hold user input (and zero-initialize it)
    int y{};            // define variable y to hold user input (and zero-initialize it)
    std::cin >> x >> y; // get two numbers and store in variable x and y respectively

    std::cout << "You entered " << x << " and " << y << '\n';
    return 0;
}