#include <iostream>

using namespace::std;

int main() {
    int a;
    int b;

    cout << "Enter first number:";
    cin >> a;
    
    cout << "Enter second number:";
    cin >> b;

    int sum = (int)a + (int)b;

    cout << "The sum is: " << sum << endl;

    return 0;
}