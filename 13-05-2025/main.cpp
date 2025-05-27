#include <iostream>

int main()
{
    std::string names[4] = {"Ibukun", "Surprise", "Samuel", "Victory"};
    int ages[] = {19, 20, 21, 17};

    std::cout << "Length of names: " << sizeof(names)/sizeof(names[0]) << "\n";
    std::cout << "Length of ages: " << sizeof(ages)/sizeof(ages[0]) << "\n";

    int length = sizeof(ages)/sizeof(ages[0]);

    for(int i = 0; i < length; i++)
    {
        std::cout << "Name: " << names[i] << " Age: " << ages[i] << "\n";
    }

    return 0;
}