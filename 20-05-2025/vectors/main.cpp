#include <iostream>
#include <vector>

std::pmr::vector<double> calcSalary()
{
    double amount {};
    std::pmr::vector<double> salaries {};
    std::cout << "Enter salary payment: \n";
    std::cin >> amount;
    salaries.push_back(amount);

    return salaries;
}

int main()
{
    int numbers[] {2, 7, 8, 19, 20};
    std::pmr::vector<int> number2 {78, 89};

    int numsize1 = sizeof(numbers)/sizeof(numbers[0]);

    number2.push_back(100);
    number2.pop_back();

    return 0;
}
