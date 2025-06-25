#include <iostream>

int fibonacci(int f0, int f1, int current, int n)
{
    if (current == n)
        return f0;
    return fibonacci(f1, f0 + f1, current + 1, n);
}

int main()
{
    std::cout << "Enter a number: ";
    int n {};
    std::cin >> n;

    std::cout << "The " << n << "th term of the fibonacci series is " << fibonacci(0, 1, 0, n) << std::endl;
}