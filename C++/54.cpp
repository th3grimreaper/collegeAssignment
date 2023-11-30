#include <iostream>
#include <ostream>

#include "info.h"

// program to demonstrate constructor overloading

class multipleConstructors {
  int x, y;

public:
  multipleConstructors() {
    x = 10;
    y = 20;
  }
  multipleConstructors(int a) {
    x = a;
    y = 20;
  }
  multipleConstructors(int a, int b) {
    x = a;
    y = b;
  }
  int returnX() { return x; }
  int returnY() { return y; }
};

int main() {
  info();
  multipleConstructors obj0, obj1(23), obj2(34, 56);
  std::cout << "value of x for obj0 is: " << obj0.returnX() << std::endl;
  std::cout << "value of y for obj0 is: " << obj0.returnY() << std::endl;
  std::cout << "value of x for obj1 is: " << obj1.returnX() << std::endl;
  std::cout << "value of y for obj1 is: " << obj1.returnY() << std::endl;
  std::cout << "value of x for obj2 is: " << obj2.returnX() << std::endl;
  std::cout << "value of y for obj2 is: " << obj2.returnY() << std::endl;
  return 0;
}
