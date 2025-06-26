#include <iostream>
#include <stdexcept>

class Division
{
    public:

    Division() {}
    ~Division() {}

    template<typename T>
    T divide(T dividend, T divisor)
    {
        if (divisor == 0)
        {
            throw std::invalid_argument("Division by zero is not allowed");
        }

        return dividend / divisor;
    }


};

int main()
{
    Division div;

    try
    {
        div.divide(7, 0);
    } catch (const std::invalid_argument& e)
    {
        std::cout << "Error: " << e.what();
    }

    return 0;
}
