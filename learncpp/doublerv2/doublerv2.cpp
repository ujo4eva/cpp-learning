#include <iostream>

int getUserValue()
{
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;

    return input;
}

int main()
{
    int num{getUserValue()};

    std::cout << "Double that value is: " << num * 2 << std::endl;

    return 0;
}