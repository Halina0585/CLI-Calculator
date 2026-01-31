#include <iostream>

int printMenu();
void basicMath();

int main()
{

    int choice = printMenu();

    switch (choice)
    {
    case 1:
        basicMath();
        break;

    default:
        std::cout << "Invalid Mode!";
        break;
    }

    return 0;
}

int printMenu()
{
    int choice = 1;
    std::cout << "\nThis is a CLI Calculator written in C++\n";
    std::cout << "\nPlease select what mode you would like to enter\n";
    std::cout << "Basic arthematic operations [1]\n";
    std::cout << "Area and Volumes [2]\n";
    std::cout << "----> ";
    std::cin >> choice;

    return choice;
}

void basicMath()
{

    double num1;
    double num2;
    char op;

    std::cout << "First number: ";
    std::cin >> num1;

    std::cout << "Operation[+,-,*,/]: ";
    std::cin >> op;

    std::cout << "Secound number: ";
    std::cin >> num2;

    if (op == '+')
    {
        std::cout << "Result = ", num1 + num2;
        std::cout << num1 + num2;
    }
    else if (op == '-')
    {
        std::cout << "Result = ";
        std::cout << num1 - num2;
    }
    else if (op == '*')
    {
        std::cout << "Result = ";
        std::cout << num1 * num2;
    }
    else if (op == '/')
    {
        std::cout << "Result = ";
        std::cout << num1 / num2;
    }
    else
    {
        std::cout << "Invalid Operation!";
    }
}