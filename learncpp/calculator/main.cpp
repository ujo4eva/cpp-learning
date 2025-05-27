#include "lib.h"

int main()
{
    //getUserInput();
    int num1 {getUserInput()};

    //getOperation();
    char op {getOperation()};

    //getUserInput();
    int num2 {getUserInput()};

    //calculateResult();
    int result {calculateResult(num1, op, num2)};

    //printResult();
    printResult(num1, op, num2, result);

    return 0;
}
