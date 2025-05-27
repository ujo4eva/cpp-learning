#include <iostream>

int main()
{
    int num1{};
    int num2{};

    std::cout << "Enter two numbers separated by a space: ";

    std::cin >> num1;
    std::cin >> num2;

    std::cout << num1 << " + " << num2 << " = " << num1 + num2 << "\n";
    std::cout << num1 << " - " << num2 << " = " << num1 - num2 << std::endl;
}