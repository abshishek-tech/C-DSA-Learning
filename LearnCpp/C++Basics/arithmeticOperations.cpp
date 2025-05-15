// arithmetic operations on variables

#include <iostream>

int main()
{
	std::cout << "Enter an integer: ";
	int num ;
	std::cin >> num;

	int doublenum = num * 2 ;										 // Multiplication
	std::cout << "Double that number is: " << doublenum << '\n';

	int halfnum = num / 2 ;											// Division (number will be without decimal)
		std::cout << "Half that number is: " << halfnum << '\n';

		std::cout << "Number + 2 =" << num + 2 << '\n';				// Addition
		std::cout << "Number -2 =" << num-2 << '\n';				//Subtraction

	return 0;
} 