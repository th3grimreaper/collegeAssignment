#include <iostream>
#include <ostream>

#include "info.h"

// add two complex numbers using friend function
class Complex {
  int real;
  int img;

public:
  Complex(int r, int i) {
    real = r;
    img = i;
  }

  void display() { std::cout << real << " + " << img << "i" << std::endl; }
  friend Complex operator+(Complex, Complex);
};

Complex operator+(Complex a, Complex b) {
  Complex temp(0, 0);
  temp.real = a.real + b.real;
  temp.img = a.img + b.img;
  return temp;
}

int main() {
  info();
  Complex obj1(1, 2), obj2(3, 4), obj3(0, 0);
  obj1.display();
  obj2.display();
  std::cout << "Adding obj1 and obj2, we get: ";
  obj3 = obj1 + obj2;
  obj3.display();
  return 0;
}
