// different data types and their sizes
// sizeof()
// declaring of variable
#include <iostream>

int main()
{
    int integer1;
    float float1;
    double double1;
    char char1;
    // short
    // long
    // long long
    //  bool --> fun fact bool is 1 byte of memory... later we will learn how to store 8 bool values in 1 byte

    // printing the size of the different data types (using edl to change ine)
    std::cout << "Size of int: " << sizeof(integer1) << " bytes" << std::endl;
    std::cout << "Size of float: " << sizeof(float1) << " bytes" << std::endl;
    std::cout << "Size of double: " << sizeof(double1) << " bytes" << std::endl;
    std::cout << "Size of char: " << sizeof(char1) << " bytes" << std::endl;
    // define a new variable (int) get input, operate and print output
    int a = 8;
    std::cout << "a+3=" << a + 3 << std::endl;

    return 0;
}