#include <iostream>

int main()
{
    std::cout << "Enter a month number 1-12: ";
    int n {};
    std::cin >> n;

    switch (n)
    {
    case 1:
        std::cout << "January has 31 days" << std::endl;
        break;
    case 2:
        std::cout << "February may have 28 or 29 days depending on whether the year is a leap year" << std::endl;
        break;
    case 3:
        std::cout << "March has 31 days" << std::endl;
        break;
    case 4:
        std::cout << "April has 30 days" << std::endl;
        break;
    case 5:
        std::cout << "May has 31 days" << std::endl;
        break;
    case 6:
        std::cout << "June has 30 days" << std::endl;
        break;
    case 7:
        std::cout << "July has 31 days" << std::endl;
        break;
    case 8:
        std::cout << "August has 31 days" << std::endl;
        break;
    case 9:
        std::cout << "September has 30 days" << std::endl;
        break;
    case 10:
        std::cout << "October has 31 days" << std::endl;
        break;
    case 11:
        std::cout << "November has 30 days" << std::endl;
        break;
    case 12:
        std::cout << "December has 31 days" << std::endl;
        break;
    default:
        std::cout << "Not a valid month number" << std::endl;
        break;
    }
    
    return 0;
}