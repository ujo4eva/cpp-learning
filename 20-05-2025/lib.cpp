#include "lib.h"

void fibonacci(int t1, int t2, int len)
{
    std::cout << t1 << "\n";
    std::cout << t2 << "\n";

    for (int i {1}; i <= len; i++)
    {
        int tnext {t1 + t2};

        std::cout << tnext << "\n";

        t1 = t2;
        t2 = tnext;
    }
}
