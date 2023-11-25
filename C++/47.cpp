#include <iostream>

#include "info.h"

// program to illustrate the implementation of single level inheritance in C++

class Parent {
  int parentVar = 20;

public:
  int returnVal() { return parentVar; }
};

class childClass : public Parent {
  int childVar = 30;

public:
  int returnValChild() { return childVar; }
};

int main() {
  info();
  childClass obj;
  std::cout << "value of childVar is: " << obj.returnValChild() << std::endl;
  std::cout << "value of parentVar is: " << obj.returnVal() << std::endl;
  return 0;
}
