#include <iostream>
#include <string>

std::string reverseString(std::string& oNger, int first, int last)
{
    if (first < last)
    {
        std::swap(oNger[first], oNger[last]);
        reverseString(oNger, first + 1, last - 1);
    }

    return oNger;
}

int main()
{
    std::cout << "Enter your registration number: ";
    std::string regNo {};
    std::cin >> regNo;

    std::string oNger {regNo};
    oNger = {reverseString(oNger, 0, regNo.length() - 1)};

    std::cout << "The normal string is: " << regNo << "\n";
    std::cout << "The reversed string is: " << oNger << std::endl;

    return 0;
}
