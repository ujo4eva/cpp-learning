#include "io.h"

int main()
{
    int num1 {readNumber()};
    int num2 {readNumber()};

    int num3 = num1 + num2;

    writeAnswer(num3);

    return 0;
}
