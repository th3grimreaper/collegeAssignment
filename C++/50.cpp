#include <algorithm>
#include <iostream>
#include <ostream>

#include "info.h"

// program to initialize three integers using constructor
class illustrateConstructor {
  int first, second, third;

public:
  illustrateConstructor(int x, int y, int z) {
    first = x;
    second = y;
    third = z;
  }

  void showValues() {
    std::cout << "first value is: " << first << std::endl;
    std::cout << "second value is: " << second << std::endl;
    std::cout << "third value is: " << third << std::endl;
  }
};

int main() {
  info();
  illustrateConstructor obj(23, 24, 25);
  obj.showValues();
  return 0;
}
