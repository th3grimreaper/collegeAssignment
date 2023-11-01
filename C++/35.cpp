#include <iostream>

#include "info.h"

template <class T>

class Calculator {
  T x, y;

public:
  Calculator(T x, T y) {
    this->x = x;
    this->y = y;
  }

  T add() { return x + y; }

  T subtract() { return x - y; }

  T multiply() { return x * y; }

  T divide() { return x / y; }

  T remainder() { return x % y; }
};

int main() {
  info();
  int a, b;
  std::cout << "enter two integers: " << std::endl;
  std::cin >> a >> b;
  Calculator<int> obj(a, b);
  std::cout << "addition: " << obj.add() << std::endl;
  std::cout << "subtraction: " << obj.subtract() << std::endl;
  std::cout << "multiplication: " << obj.multiply() << std::endl;
  std::cout << "division: " << obj.divide() << std::endl;
  std::cout << "modulus: " << obj.remainder() << std::endl;
  return 0;
}
