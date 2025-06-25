#include <iostream>

int main()
{
    std::cout << "Enter a number: ";
    int m {};
    std::cin >> m;

    int n {};

    if (m > 0) {
        n = {1};
        
        std::cout << "n is " << n << " because m is positive.";

    } else if (m < 0) {
        n = {-1};

        std::cout << "n is " << n << " because m is negative.";

    } else {
        n = {0};

        std::cout << "n is " << n << " because m is zero.";
    }

    return 0;
}