#include <iostream>

#include "info.h"

class UnaryOpOv {
  int x;

public:
  UnaryOpOv(int x) { this->x = x; }

  void operator++(int) { x++; }

  void display() { std::cout << "x: " << x << std::endl; }
};

int main() {
  info();
  UnaryOpOv obj(34);
  std::cout << "value of obj before increment is:" << std::endl;
  obj.display();
  obj++;
  std::cout << "value of obj after increment is:" << std::endl;
  obj.display();
  return 0;
}
