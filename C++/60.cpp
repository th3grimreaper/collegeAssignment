#include <iostream>
#include <ostream>

#include "info.h"

class Base {
public:
  virtual void echo() {
    std::cout << "I have been called by a base class object." << std::endl;
  }
};

class Child : public Base {
public:
  void echo() {
    std::cout << "I have been called by a child class object." << std::endl;
  }
};

int main() {
  info();
  Base *ptr;
  Child obj;
  ptr = &obj;
  ptr->echo();
  return 0;
}
