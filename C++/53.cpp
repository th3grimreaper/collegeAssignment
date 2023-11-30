#include <algorithm>
#include <iostream>
#include <ostream>

#include "info.h"

class copyCon {
  int x;

public:
  copyCon(int x) { this->x = x; }
  int showval() { return x; }
  copyCon(copyCon &o) { x = o.x; };
};

int main() {
  info();
  copyCon obj(10);
  std::cout << "value of first object is " << obj.showval() << std::endl;
  copyCon obj2(obj);
  std::cout
      << "value of second object after copying value of first obj into it is "
      << obj2.showval() << std::endl;
  return 0;
}
