#include <iostream>
#include <ostream>

#include "info.h"

class Base {
  int x, y;

public:
  Base(int x, int y) {
    this->x = x;
    this->y = y;
  }
  friend class Child;
};

class Child {
public:
  void greaterOfTwo(Base obj) {
    std::cout << "Among " << obj.x << " and " << obj.y << ", "
              << ((obj.x > obj.y) ? obj.x : obj.y) << " is greater."
              << std::endl;
  }
};

int main() {
  info();
  int a, b;
  std::cout << "Enter two numbers: ";
  std::cin >> a >> b;
  Base bobj(a, b);
  Child cobj;
  cobj.greaterOfTwo(bobj);
  return 0;
}
