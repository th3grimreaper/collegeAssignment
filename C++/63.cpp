#include <iostream>

#include "info.h"

class OverloadEqual {
  int x;

public:
  OverloadEqual(int x) { this->x = x; }

  bool operator==(OverloadEqual obj) { return (x == obj.x); };
};

int main() {
  info();
  OverloadEqual obj1(4), obj2(4);
  std::cout << "is equal? " << ((obj1 == obj2) ? "true" : "false") << std::endl;
  return 0;
}
