#include <iostream>
#include <string>

struct bankAccount {
    //private:

    int acctNo;
    float balance;
    std::string name;

    void displayDetails()
    {
        std::cout << acctNo << '\n' << balance << '\n' << name << '\n';
    }
};

struct Person
{
    bankAccount account;
};

int main()
{

    bankAccount one;

    std::cout << one.balance << '\n';

    one.balance = 10.24;

    std::cout << one.balance;

    Person favour;
    favour.account = one;

    favour.account.displayDetails();

    return 0;
}
