#include <iostream>
#include <cmath>

int printMenu();
int mode(int menuType);
void basicMath();

int main()
{

    int menuType = printMenu();

    switch (menuType)
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
    int choice = 0;
    std::cout << "\nThis is a CLI Calculator written in C++\n";
    std::cout << "\nPlease select what mode you would like to enter\n";
    std::cout << "Basic arthematic operations [1]\n";
    std::cout << "Area and Volumes [2]\n";
    std::cout << "----> ";
    std::cin >> choice;

    return choice;
}

int mode(int menuType)
{
    int mode;

    switch (menuType)
    {
    case 1: // Basic Athermatic
        std::cout << "\nSelect an Operation\n";
        std::cout << "[1] Addition\n";
        std::cout << "[2] Subtraction\n";
        std::cout << "[3] Multipication\n";
        std::cout << "[4] Division\n";
        std::cout << "[5] Exponent\n";
        std::cout << "[6] Root\n";
        std::cout << "[7] Percentage\n";
        std::cout << "----> ";
        std::cin >> mode;
        break;

    case 2: // Area
        std::cout << "[1] Rectriangle\n";
        std::cout << "[2] Triangle\n";
        std::cout << "[3] Circle\n";
        std::cout << "[4] Trapezium\n";
        std::cout << "[5] Parallelogram\n";
        std::cout << "[6] Kite\n";
        std::cout << "[7] Area\n";
        std::cout << "[8] Area\n";
        std::cout << "[9] Area\n";
        break;

    default:
        std::cout << "Error: Invalid Mode Selected!";
        break;
    }

    return mode;
}

void basicMath()
{

    double num1;
    double num2;
    int operation = mode(1);

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
}