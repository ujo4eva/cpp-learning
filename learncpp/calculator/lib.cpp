#include <iostream>
#include "lib.h"

int getUserInput()
{
    std::cout << "Enter a number: ";
    int input {};
    std::cin >> input;

    return input;
}

char getOperation()
{
    std::cout << "Enter one of the following operators, '+, -, *, /': ";
    char op {};
    std::cin >> op;

    return op;
}

int calculateResult(int num1, char op, int num2)
{
    switch (op) {
        case '+':
            return num1 + num2;
            break;

        case '-':
            return num1 - num2;
            break;

        case '*':
            return num1 * num2;
            break;

        case '/':
            if (num2 == 0)
            {
                std::cout << "Olodo, you dey divide by zero" << std::endl;
                break;
            }

            return num1 / num2;
            break;

        default:
            std::cout << "No valid operation detected" << std::endl;
    }
    return 0;
}

void printResult(int num1, char op, int num2, int result)
{
    std::cout << num1 << " " << op << " " << num2 << " = " << result <<std::endl;
}
