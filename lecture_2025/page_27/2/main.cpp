#include <iostream>

bool isLeap(int year)
{
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            if (year % 400 == 0) {
                return true;
            }
        }
    }

    return false;
}

int main()
{
    std::cout << "Enter a year: ";
    int year {};
    std::cin >> year;

    if (isLeap(year) == true) {
        std::cout << year << " is a leap year." << std::endl;
    } else {
        std::cout << year << " is not a leap year." << std::endl;
    }

    return 0;
}