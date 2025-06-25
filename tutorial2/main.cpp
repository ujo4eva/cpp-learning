#include <iostream>
#include <string>

class Person
{
    private:

    std::string name;
    int age;

    public:

    virtual ~Person()
    {
        std::cout << "Person destructor called\n";
    }

    virtual void create()
    {
        std::cout << "Enter a name: ";
        //std::cin.ignore(1, '\n');
        std::getline(std::cin, name);

        std::cout << "Enter age: ";
        while (!(std::cin >> age))
        {
            std::cout << "Please enter a number: ";
            std::cin.clear();
            std::cin.ignore(1000, '\n');
        }
    }

    virtual void display() const
    {
        std::cout << "Name: " << name << ", Age: " << age << '\n';
    }
};

class Student : public Person
{
    private:
    std::string department;

    public:

    virtual ~Student()
    {
        std::cout << "Student destructor called\n";
    }

    virtual void create() override
    {
        Person::create();
        std::cout << "Enter a department: ";
        std::cin.ignore(1, '\n');
        std::getline(std::cin, department);
    }

    virtual void display() const override
    {
        Person::display();
        std::cout << "Department: " << department << '\n';
    }
};

int main()
{
    Person p1;
    p1.create();
    std::cout << "Person data: \n";
    p1.display();

    Student s1;
    s1.create();
    std::cout << "Student data: \n";
    s1.display();

    return 0;
}
