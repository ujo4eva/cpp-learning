#include <iostream>

int enterNumber()
{
    std::cout << "Enter a number: ";
    int num {};
    std::cin >> num;

    return num;
}
int main()
{
    int num1 {enterNumber()};
    int num2 {enterNumber()};

    if (num1 > num2)
    {
        std::cout << num1 << " is greater than " << num2 << std::endl;
    } else if (num1 < num2) {
        std::cout << num2 << " is greater than " << num1 << std::endl;
    } else {
        std::cout << num1 << " is equal to " << num2 << std::endl;
    }

}