//Developing your first program

// The preceding lessons have introduced a lot of terminology and concepts that we’ll use in just about every program we create. In this lesson, we’ll walk through the process of integrating this knowledge into our first simple program.

// Multiply by 2

// First, let’s create a program that asks the user to enter an integer, waits for them to input an integer, then tells them what 2 times that number is. The program should produce the following output (assume I entered 4 as input):

#include<iostream>

int main(int argc, char const *argv[])
{
    std::cout << "Enter an integer: ";
    int num{};
    std::cin >> num;
    std::cout << "Double this number is: " << (num*2) << std::endl;
    return 0;
}
