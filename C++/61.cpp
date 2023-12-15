#include <iostream>

#include "info.h"

class Base {
public:
  virtual void echo() = 0;
};

class Child : public Base {
public:
  void echo() {
    std::cout
        << "This function overrides the do nothing function in the base class."
        << std::endl;
  }
};

int main() {
  info();
  Child obj;
  obj.echo();
  return 0;
}
