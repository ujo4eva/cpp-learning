#include "lib.h"

int main()
{
    Person p1 = Person("Dupe");
    Person p2 = Person("Isaac Newton", 42);

    p2.userDetails();

    Person p14("Tomi");

    fibonacci(1, 2, 10);

    return 0;
}
