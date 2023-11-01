#include <iostream>

#include "info.h"

int main() {
  info();
  int a, b;
  char op;
  std::cout << " Select operation: ";
  std::cin >> op;
  std::cout << "Enter two values: ";
  std::cin >> a >> b;
  switch (op) {
  case '+':
    std::cout << "Addition of " << a << " and " << b << " gives " << a + b
              << std::endl;
    break;
  case '-':
    std::cout << "Subtraction of " << a << " and " << b << " gives " << a - b
              << std::endl;
    break;
  case '*':
    std::cout << "Multiplication of " << a << " and " << b << " gives " << a * b
              << std::endl;
    break;
  case '/':
    std::cout << "Division of " << a << " and " << b << " gives " << a / b
              << std::endl;
    break;
  case '%':
    std::cout << "Reminder of " << a << " and " << b << " is " << a % b
              << std::endl;
    break;
  default:
    std::cout << "Invalid operation selected!" << std::endl;
    break;
  }
  return 0;
}
