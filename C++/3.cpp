#include <iostream>

#include "info.h"

int main() {
  info();
  int a, b;
  std::cout << "enter a and b: " << std::endl;
  std::cin >> a >> b;
  std::cout << "Relational Operators: "
            << std::endl; // returns 1 if the operation returns true, returns 0
                          // otherwise (when false)
  std::cout << a << " > " << b << " gives: " << (a > b) << std::endl;
  std::cout << a << " < " << b << " gives: " << (a < b) << std::endl;
  std::cout << a << " >= " << b << " gives: " << (a >= b) << std::endl;
  std::cout << a << " <= " << b << " gives: " << (a <= b) << std::endl;
  std::cout << a << " == " << b << " gives: " << (a == b) << std::endl;
  std::cout << a << " != " << b << " gives: " << (a != b) << std::endl;
  return 0;
}
