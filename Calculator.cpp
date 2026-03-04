#include <iostream>
#include <cmath>

int printMenu();

int main()
{
    double num1;
    double num2;
    int operation;

    operation = printMenu();

    std::cout << "\nFirst number: ";
    std::cin >> num1;

    std::cout << "Secound number: ";
    std::cin >> num2;

    switch (operation)
    {
    case 1: // Addition
        std::cout << "Result = ", num1 + num2;
        std::cout << num1 + num2;
        break;

    case 2: // Subtraction
        std::cout << "Result = ";
        std::cout << num1 - num2;
        break;

    case 3: // Multiplication

        std::cout << "Result = ";
        std::cout << num1 * num2;
        break;

    case 4: // Division
        if (num2 == 0)
        {
            std::cout << "Error: Cannot Divide by Zero!";
            break;
        }
        std::cout << "Result = ";
        std::cout << num1 / num2;
        break;

    case 5: // Exponent
        std::cout << "Results = ";
        std::cout << pow(num1, num2);
        break;

    case 6: // Root
        std::cout << "Results = ";
        std::cout << pow(num1, (1 / num2));
        break;

    case 7: // Percentage
        std::cout << "result = ";
        std::cout << num1 * (num2 / 100);
        break;

    default:
        std::cout << "Error: Invalid Operation!";
        break;
    }

    return 0;
}

int printMenu()
{
    int operation;
    std::cout << "\nSelect an Operation\n";
    std::cout << "[1] Addition\n";
    std::cout << "[2] Subtraction\n";
    std::cout << "[3] Multipication\n";
    std::cout << "[4] Division\n";
    std::cout << "[5] Exponent\n";
    std::cout << "[6] Root\n";
    std::cout << "[7] Percentage\n";
    std::cout << "----> ";
    std::cin >> operation;

    return operation;
}