#include <iostream>
#include <string>

class SystemValidationException : public std::exception
{
    std::string name;
    int serialNumber;
    std::string message;

    public:

    SystemValidationException(const std::string& n, int serialNum)
    {
        if (n.empty() || !(0.1 < (serialNum % 10000000000) < 1))
        {
            throw SystemValidationException("Invalid name or serial number", serialNum);
        }
    }
    ~SystemValidationException() {}

    const char* what() const noexcept override
    {
        return message.c_str();
    }

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
