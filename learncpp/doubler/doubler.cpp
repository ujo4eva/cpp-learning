#include <iostream>

int main() 
{
    std::cout << "Enter an integer: "; //prompt user for input

    int num{};
    std::cin >> num;

    std::cout << "Double that number is: " << num * 2 << "\n";

    std::cout << "Triple that number is: " << num * 3 <<  std::endl;

    return 0;
}