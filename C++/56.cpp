#include <iostream>
#include <ostream>

#include "info.h"

// Program to demonstrate function overriding

class Parent {
public:
  void func() { std::cout << "Hello, I'm the parent." << std::endl; }
};

class Child : public Parent {
public:
  void func() { std::cout << "Hello, I'm the child." << std::endl; }
};

int main() {
  info();
  Parent pobj;
  pobj.func();
  Child cobj;
  cobj.func();
  return 0;
}
