#include <iostream>

int main()
{
    std::cout << "Enter a character: ";
    char ch {};
    std::cin >> ch;

    std::cout << "You entered: " << ch << "\n";
    std::cout << "The ASCII value of '" << ch << "' is " << static_cast<int>(ch) << "." << std::endl;

    return 0;
}
