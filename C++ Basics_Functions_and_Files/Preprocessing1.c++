//The #ifdef preprocessor directive allows the preprocessor to check whether an identifier has been previously #defined. If so, the code between the #ifdef and matching #endif is compiled. If not, the code is ignored.

//Consider the following program:

#include <iostream>

#define PRINT_JOE

int main()
{
#ifdef PRINT_JOE
    std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
#endif

#ifdef PRINT_BOB
    std::cout << "Bob\n"; // will be ignored since PRINT_BOB is not defined
#endif

    return 0;
}


//Because PRINT_JOE has been #defined, the line std::cout << "Joe\n" will be compiled. Because PRINT_BOB has not been #defined, the line std::cout << "Bob\n" will be ignored.