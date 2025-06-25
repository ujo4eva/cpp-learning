#include <iostream>
#include <cmath>

int main()
{
    std::cout << "Enter the first number in the range: ";
    int start {};
    std::cin >> start;

    std::cout << "Enter the last number in the range: ";
    int end {};
    std::cin >> end;

    //switch numbers if start is greater than end for some reason
    if (start > end)
    {
        int temp {end};
        end = {start};
        start = {temp};
    }

    //loop over all numbers in range and print all which pass the prime check
    for (start; start <= end; start++)
    {
        bool isPrime {true};

        for (int i = 2; i <= sqrt(start); i++)
        {
            if (start % i == 0)
            {
                isPrime = false;
                break;
            }
        }

        if (isPrime)
        {
            std::cout << start << " ";
        }
    }
}