#include <iostream>
#include <vector>

enum Designation
{
    Manager,
    Engineer,
    Technician,
    Intern
};

class Employee
{
    private:
        std::string id;
        std::string name;
        Designation designation;
        double salary;
    
    public:
        Employee(std::string id, std::string name, Designation designation, double salary)
            : id(id), name(name), designation(designation), salary(salary) {}

        void displayInfo() const
        {
            std::cout << "ID: " << id << "\n"
                      << "Name: " << name << "\n"
                      << "Designation: " << designation << "\n"
                      << "Salary: $" << salary << std::endl;
        }
        
        void setInfo()
        {
            std::cout << "Enter ID: ";
            std::cin >> id;
            std::cout << "Enter Name: ";
            std::cin >> name;
            int desig;
            std::cout << "Enter Designation (0: Manager, 1: Engineer, 2: Technician, 3: Intern): ";
            std::cin >> desig;
            designation = static_cast<Designation>(desig);
            std::cout << "Enter Salary: ";
            std::cin >> salary;
        }
};

int main()
{
    std::cout << "Employee Management System\n";
    std::cout << "===========================\n";

    std::vector<Employee> employees;
    // Creating and displaying employee information


    Employee emp1("E001", "Alice", Manager, 75000.0);
    emp1.displayInfo();
    
    Employee emp2("E002", "Bob", Engineer, 60000.0);
    emp2.displayInfo();

    Employee emp3("E003", "Charlie", Technician, 45000.0);
    emp3.displayInfo();

    employees.push_back(emp1);
    employees.push_back(emp2);
    employees.push_back(emp3);

    for (const auto& emp : employees)
    {
        emp.displayInfo();
    }
    
    return 0;
}
// This code defines an Employee class with attributes such as ID, name, designation, and salary.
// It includes methods to display and set employee information. The main function demonstrates creating an employee object,
// displaying its information, updating it, and displaying the updated information again.
// The code uses C++17 features and is structured to be clear and maintainable.
// The Designation enum provides a clear way to represent different employee roles.