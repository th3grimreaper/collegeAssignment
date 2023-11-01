#include <iostream>

#include "info.h"

int main() {
  info();
  int a, b, c;
  std::cout << "enter three numbers a, b and c:" << std::endl;
  std::cin >> a >> b >> c;
  std::cout << "largest of the three is: "
            << (((a > b) && (a > c))   ? a
                : ((b > a) && (b > c)) ? b
                                       : c)
            << std::endl;
  return 0;
}
