#include <iostream>

using namespace::std;

int main() {
    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int length = sizeof(numbers)/sizeof(numbers[0]);

    for (int i = 0; i < length; i++) {
        cout << numbers[i] << endl;
    }
    return 0;
}