#ifndef LIB_H
#define LIB_H

#include <iostream>

class Person {
    private:

    int age;
    std::string full_name;

    public:

    Person(std::string name)
    {
        std::cout << "Welcome " << name << std::endl;
    }

    Person(std::string fn, int age) : full_name(fn), age(age)
    {
        //age = age;
        //full_name = fn;
        std::cout << "Object created successfully!\n";
    }

    void userDetails()
    {
        std::cout << "Name: " << full_name << " Age: " << age << "\n";
    }
};

void fibonacci(int t1, int t2, int len);

#endif
