#include <iostream>
#include <string_view>

enum Color
{
    red,
    black,
    blue,
};

constexpr std::string_view getColorName(Color color)
{
    switch (color)
    {
    case black: return "black";
    case red: return "red";
    case blue: return "blue";
    default: return "???";
    }
}

//function to teach operator<< to print a Color
std::ostream& operator<<(std::ostream& out, Color color)
{
    return out << getColorName(color);
}

int main()
{
    Color shirt {blue};

    std::cout << "Your shirt color is: " << shirt << std::endl;

    return 0;
}