#include "lib.h"

int main()
{
    Person p1 {"Favour", 18, 1.57, 51.8};
    Person p2 {"Treasure", 19, 1.72, 60.5};
    Person p3 {"Temiloluwa", 21, 1.94, 78.9};
    Person p4 {"Bright", 19, 1.72, 61.1};
    Person p5 {"Omolayo", 51, 1.73, 88.4};
    
    std::vector<Person> people;
    people.push_back(p1);
    people.push_back(p2);
    people.push_back(p3);
    people.push_back(p4);
    people.push_back(p5);

    for (int i = 0; i < 5; i++)
    {
        people[i].getDetails();
        std::cout << '\n';
    }

    return 0;
}
