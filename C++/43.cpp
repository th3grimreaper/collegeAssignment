#include <iostream>

#include "info.h"

class My_class {
private:
  int x, y;

public:
  My_class(int x, int y) {
    this->x = x;
    this->y = y;
  }

  int add() { return x + y; }

  int subtract() { return x - y; }

  int multiply() { return x * y; }
};

int main() {
  info();
  int a, b;
  std::cout << "enter two integers: " << std::endl;
  std::cin >> a >> b;
  My_class obj(a, b);
  std::cout << "addition: " << obj.add() << std::endl;
  std::cout << "subtraction: " << obj.subtract() << std::endl;
  std::cout << "multiplication: " << obj.multiply() << std::endl;
  return 0;
}
