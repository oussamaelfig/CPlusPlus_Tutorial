//#if 0 

//One more common use of conditional compilation involves using #if 0 to exclude a block of code from being compiled (as if it were inside a comment block):

#include <iostream>

int main()
{
    std::cout << "Joe\n";

#if 0 // Don't compile anything starting here
    std::cout << "Bob\n";
    std::cout << "Steve\n";
#endif // until this point

    return 0;
}
//The above code only prints “Joe”, because “Bob” and “Steve” were inside an #if 0 block that the preprocessor will exclude from compilation.