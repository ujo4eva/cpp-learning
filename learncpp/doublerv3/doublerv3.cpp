#include <iostream>

int getUserNumber()
{
    int num {}; //list-initialize num variable
    std::cout << "Enter an integer: ";

    std::cin >> num;

    return num;
}

int doubleNumber(int num)
{
    return num * 2;
}

int main()
{
    int num {getUserNumber()};

    std::cout << "Double that is " << doubleNumber(num) << "." << std::endl;

    return 0;
}