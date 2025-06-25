#include <iostream>

int main()
{
    std::cout << "Enter the value of n: ";
    int n {};
    std::cin >> n;

    int total {};

    for (int i {1}; i <= n; i++)
    {   
        if (i != 1)
        {
            std::cout << " + ";
        }

        std::cout << "(" << i << " * " << i << ")";

        if (i == n)
        {
            std::cout << " = ";
        }

        total += (i * i);
    }
    std::cout << total;

    return 0;
}