#include <iostream>
#include <string>

class SystemValidationException
{
    std::string name;
    int serialNumber;

    public:

    SystemValidationException(const std::string& n, int serialNum)
    {
        if (n.empty() || !(0.1 < (serialNum % 10000000000) < 1))
        {
            throw SystemValidationException("Invalid name or serial number", serialNum);
        }
    }
    ~SystemValidationException() {}

};

int main()
{
    try
    {
        SystemValidationException("System", 123456789);
    } catch (const SystemValidationException& e)
    {
        std::cout << "Exception caught: " << e.what() << std::endl;
    }
}
