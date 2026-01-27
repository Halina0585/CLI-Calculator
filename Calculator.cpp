#include <iostream>

int main()
{

    double num1;
    double num2;
    char operation;

    std::cout << "This is a CLI Calculator written in C++\n";

    std::cout << "First number: ";
    std::cin >> num1;

    std::cout << "Operation[+,-,*,/]: ";
    std::cin >> operation;

    std::cout << "Secound number: ";
    std::cin >> num2;

    if (operation == '+')
    {
        std::cout << num1 + num2;
    }
    else if (operation == '-')
    {
        std::cout << num1 - num2;
    }
    else if (operation == '*')
    {
        std::cout << num1 * num2;
    }
    else if (operation == '/')
    {
        std::cout << num1 / num2;
    }
    else
    {
    }

    return 0;
}