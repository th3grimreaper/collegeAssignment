#include <iostream>

#include "info.h"

int main() {
  info();
  int a, b;
  std::cout << "Program to demonstrate the working of Logical Operators"
            << std::endl;
  std::cout << "enter a and b: " << std::endl;
  std::cin >> a >> b;
  std::cout << "Logical Operators: " << std::endl;
  std::cout << a << " && " << b << " gives: " << (a && b) << std::endl;
  std::cout << a << " || " << b << " gives: " << (a || b) << std::endl;
  std::cout << "  !" << a << " gives: " << (!a) << std::endl;
  return 0;
}
