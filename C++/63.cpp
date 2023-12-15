#include <iostream>
#include <ostream>

#include "info.h"

class OverloadEqual {
  int x;

public:
  OverloadEqual(int x) { this->x = x; }

  bool operator==(OverloadEqual obj) { return (x == obj.x); };
};

int main() {
  info();
  int x, y;
  std::cout << "enter two values for x and y respectively: ";
  std::cin >> x >> y;
  OverloadEqual obj1(x), obj2(y);
  std::cout << "is equal? " << ((obj1 == obj2) ? "true" : "false") << std::endl;
  return 0;
}
