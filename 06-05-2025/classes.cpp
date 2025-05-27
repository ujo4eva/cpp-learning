#include <iostream>

enum grade {
    first,
    second,
    third,
    fourth,
    fifth,
    sixth,
    seventh,
    eigth,
    ninth,
    tenth,
    eleventh,
    twelfth
};
class Person {
    private:
        std::string name;
        unsigned int age = 0;
        bool isMarried = false;
        unsigned int noChildren = 0;

    protected:
    
    
    public:
        Person(std::string n, unsigned int a, bool m, unsigned int c) {
            this->name = n;
            this->age = a;
            this->isMarried = m;
            this->noChildren = c;
        }
        virtual ~Person();

    void getPersonalDetails() {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Married: " << isMarried << std::endl;
        std::cout << "Number of Children: " << noChildren << std::endl;
    };
};

class Student : Person {
    std::string school;
    grade grade;
};

int main() {
    Person ujo4eva = Person("Osadebamwen", 21, false, 0);

    ujo4eva.getPersonalDetails();
}