#include <iostream>
#include "info.h"

int area(int a) {
  return a*a;
}

int area(int l, int b) {
  return l*b;
}

int main() {
  info();
  std::cout << "Area of square with side 5: " << area(5) << std::endl;
  std::cout << "Area of rectangle with length 5 and breadth 3: " << area(5,3) << std::endl;
  return 0;
}
