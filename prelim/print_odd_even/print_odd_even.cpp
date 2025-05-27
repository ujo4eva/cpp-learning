#include <iostream>
#include <cmath>

using namespace std;

void checkEven(int number) {
    if (number % 2 == 0) {
        cout << number << " is even" << endl;
    } else {
        cout << "Not an even number, try again" << endl;
        cin >> number;
        checkEven(number);
    }
} 
void prime() {
    int end;
    cout << "Enter an end number" << endl;
    cin >> end;
    for (int i = 2; i < end; i++) {

        int isPrime = 1;

        for (int j = 2; j <= sqrt(i); j++) {

            if (i % j == 0) {

                isPrime = 0;

                break;

            }
        }
        if (isPrime) {
            cout << i << endl;
        }
    }
}


void print_odd() {
    cout << "Odd Numbers" << endl;
    for (int i = 1; i <= 100; i+=2) {
        cout << i << ", ";
    }
    cout << endl;
}

void print_even() {
    cout << "Even Numbers" << endl;

    for (int i = 2; i <= 100; i+=2) {
        cout << i << ", ";
    }
    cout << endl;
}

int main() {
    print_odd();
    print_even();
    prime();

    int num;
    cout << "Enter a number:" << endl;
    cin >> num;
    checkEven(num);
}