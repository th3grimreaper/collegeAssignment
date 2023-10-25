#include <iostream>
#include "info.h"
using namespace std;

int main() {
  info();
  int a, b;
  std::cout << "enter a and b: " << std::endl;
  std::cin >> a >> b;
  std::cout << "Logical Operators: " << std::endl;
  std::cout << a << " && " << b << " gives: " << (a&&b) << std::endl;
  std::cout << a << " || " << b << " gives: " << (a||b) << std::endl;
  std::cout << "  !" << a << " gives: " << (!a) << std::endl;
  return 0;
}
