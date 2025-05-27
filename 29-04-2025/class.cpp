#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 20; i++) {
        if(i >= 11) {
            for(int j = 1; j <= 20; j++) {
                if((i*j) % 2 != 0) {
                    cout << i << " x " << j << " = " << i*j << " \n";
                }
            }
        } else {
            for(int j = 1; j <= 20; j++) {
                cout << i << " x " << j << " = " << i*j << " \n";
            }
        }
    }
return 0;
}