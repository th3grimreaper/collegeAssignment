#include <iostream>

#include "info.h"

inline float areaOfSquare(float side) { return side * side; }

int main() {
  info();
  float s;
  std::cout << "enter the size of the square's side: ";
  std::cin >> s;
  std::cout << "area of square with side " << s << " is " << areaOfSquare(s)
            << std::endl;
  return 0;
}
