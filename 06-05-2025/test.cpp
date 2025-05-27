#include <iostream>
using namespace::std;

int main() {
    unsigned long int f1 = 7;
    unsigned long int f2 = 11;
    unsigned long int f3;

    cout << f1 << endl;
    cout << f2 << endl;

    for (int i = 1; i <= 50; i++) {
        f3 = f1 + f2;

        cout << f3 << endl;

        f1 = f2;
        f2 = f3;
    }

return 0;
}