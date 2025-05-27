#include <iostream>
#include <vector>

class Person
{
    private:
    std::string name;
    int age;
    float height;
    float weight;

    public:
    Person()
    {

    }

    Person(std::string n, int a, float h, float w) : name(n), age(a), height(h), weight(w)
    {

    }

    ~Person()
    {

    }

    void setDetails()
    {
        std::cout << "Enter Name: ";
        std::cin >> name;
        std::cout << "Enter Age: ";
        std::cin >> age;
        std::cout << "Enter Height: ";
        std::cin >> height;
        std::cout << "Enter Weight: ";
        std::cin >> weight;
    }

    void getDetails()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Height: " << height << std::endl;
        std::cout << "Weight: " << weight << std::endl;
    }
};
