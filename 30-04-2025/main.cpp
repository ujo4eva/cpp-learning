#include <iostream>
using namespace::std;

int addition(int a, int b) {
    return a + b;
}

int addition(int a, int b, int c) {
    return a + b + c;
}

float addition(float a, float b) {
    return a + b;
}

int main() {
    int num1 = 23;
    int num2 = 85;
    int num3 = 12;
    float num4 = 2.5;
    float num5 = 3.47;

    cout << addition(num1, num2) << endl;
    cout << addition(num1, num2, num3) << endl;
    cout << addition(num4, num5) << endl;
}