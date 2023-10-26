#include <iostream>
#include "info.h"

int main() {
  info();
  int a, b;
  std::cout << "enter two numbers a and b:" << std::endl;
  std::cin >> a >> b;
  std::cout << "the two numbers are " << ((a^b)?"not equal":"equal") << std::endl;
  return 0;
}
