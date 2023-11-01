#include <iostream>

#include "info.h"
#define PI 3.14

inline float areaOfCircle(float radius) { return PI * radius * radius; }

int main() {
  info();
  float r;
  std::cout << "enter radius of circle: " << std::endl;
  std::cin >> r;
  std::cout << "area of circle is: " << areaOfCircle(r) << std::endl;
  return 0;
}
