
#include <iostream>
#include <ostream>

#include "info.h"

// implement unary minus operator using friend function
class Complex {
  int x;

public:
  Complex(int x) { this->x = x; }

  void display() { std::cout << "value of x is: " << x << std::endl; }
  friend Complex operator-(Complex);
};

Complex operator-(Complex a) {
  a.x = -a.x;
  return a;
}

int main() {
  info();
  Complex obj1(34);
  obj1.display();
  std::cout << "After applying unary minus operator on x, we get: ";
  obj1 = -obj1;
  obj1.display();
  return 0;
}
