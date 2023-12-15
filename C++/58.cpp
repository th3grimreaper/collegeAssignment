#include <iostream>
#include <string>

#include "info.h"

// program to demonstrate use of pointer to object

class thisPtr {
  int x, y;

public:
  thisPtr(int x, int y) {
    this->x = x;
    this->y = y;
  }

  void showVal() {
    std::cout << "Values of x and y are " << x << " and " << y
              << " respectively." << std::endl;
  }
};
int main() {
  info();
  int x, y;
  std::cout << "enter values for x and y:" << std::endl;
  std::cin >> x >> y;
  thisPtr obj(x, y);
  obj.showVal();
  return 0;
}
