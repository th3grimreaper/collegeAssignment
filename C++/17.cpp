#include <iostream>

#include "info.h"
#define AREA(l, b) (l * b)

int main() {
  info();
  int len, brd;
  std::cout << "enter the length and breadth of rectangle:" << std::endl;
  std::cin >> len >> brd;
  std::cout << "area of rectangle is " << AREA(len, brd) << std::endl;
  return 0;
}
