#include <iostream>
#include <ostream>

#include "info.h"

// invoking a constructor with default arguments

class defArg {
  int a;

public:
  defArg(int a = 10) {
    this->a = a;
    std::cout << "value of a is: " << this->a << std::endl;
  }
};

int main() {
  info();
  defArg obj;
  return 0;
}
