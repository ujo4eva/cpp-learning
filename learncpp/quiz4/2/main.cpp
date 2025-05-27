#include <iostream>

int convertToASCII(char ch)
{
    return ch;
}

int main()
{
    std::cout << "Enter a character: ";
    char ch {};
    std::cin >> ch;

    std::cout << "You entered: " << ch << "\n";
    std::cout << "ASCII value: " << convertToASCII(ch) << std::endl;

    return 0;
}
