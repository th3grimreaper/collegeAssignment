#include <iostream>

#include "info.h"

// program to illustrate the implementation of multilevel inheritance in C++

class ParentOne {
  int parentOneVar = 10;

public:
  int returnValPOne() { return parentOneVar; }
};

class firstChild : public ParentOne {
  int firstChildVar = 20;

public:
  int returnFChildVal() { return firstChildVar; }
};

class secondChild : public firstChild {
  int secondChildVar = 30;

public:
  int returnSChildVal() { return secondChildVar; }
};

int main() {
  info();
  secondChild obj;
  std::cout << "value of secondChildVar is: " << obj.returnSChildVal()
            << std::endl;
  std::cout << "value of firstChildVar is: " << obj.returnFChildVal()
            << std::endl;
  std::cout << "value of parentOneVar is: " << obj.returnValPOne() << std::endl;
  return 0;
}
