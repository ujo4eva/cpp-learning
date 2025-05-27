#include "add.h"
#include <iostream>

int add(int x, int y); // forward declaration of add function defined in
                       // /add.cpp

int main() {
  std::cout << "The sum of 3 and 4 is: " << add(3, 4) << std::endl;
  return 0;
}
