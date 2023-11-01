#include <iostream>

#include "info.h"

int main() {
  info();
  const float PI = 3.14;
  float radius, area, perimeter;
  std::cout << "enter radius of the circle: ";
  std::cin >> radius;
  std::cout << "area of circle is: " << PI * radius * radius << std::endl;
  std::cout << "perimeter of circle is: " << 2 * PI * radius << std::endl;
  return 0;
}
