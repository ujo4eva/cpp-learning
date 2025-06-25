#include <iostream>
#include <chrono>
#include <thread>

int main()
{
    std::cout << "Delay user for some seconds... \n";
    std::this_thread::sleep_for(std::chrono::seconds(3));

    for (int i = 1; i <= 20; i++)
    {
        std::this_thread::sleep_for(std::chrono::seconds(2));
        std::cout << "Number: " << i << '\n';
    }

    std::cout << "This should print immediately \n";

    std::cout << "Just returned from sleep" << std::endl;
    return 0;
}