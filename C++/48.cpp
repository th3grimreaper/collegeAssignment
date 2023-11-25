#include <iostream>

#include "info.h"

// program to illustrate the implementation of multiple inheritance in C++

class ParentOne {
  int parentOneVar = 10;

public:
  int returnValPOne() { return parentOneVar; }
};

class ParentTwo {
  int parentTwoVar = 20;

public:
  int returnValPTwo() { return parentTwoVar; }
};

class childClass : public ParentOne, public ParentTwo {
  int childVar = 30;

public:
  int returnValChild() { return childVar; }
};

int main() {
  info();
  childClass obj;
  std::cout << "value of childVar is: " << obj.returnValChild() << std::endl;
  std::cout << "value of parentOneVar is: " << obj.returnValPOne() << std::endl;
  std::cout << "value of parentTwoVar is: " << obj.returnValPTwo() << std::endl;
  return 0;
}
