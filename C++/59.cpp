#include <iostream>
#include <ostream>

#include "info.h"

class Second_class;
class First_class {
public:
  int firstVar = 14;
  friend void addTwoClassVar(First_class, Second_class);
};

class Second_class {
public:
  int secondVar = 20;
  friend void addTwoClassVar(First_class, Second_class);
};

void addTwoClassVar(First_class obj1, Second_class obj2) {
  std::cout << "addition of " << obj1.firstVar << " and " << obj2.secondVar
            << " gives " << obj1.firstVar + obj2.secondVar << std::endl;
}

int main() {
  info();
  First_class obj;
  Second_class obj2;
  addTwoClassVar(obj, obj2);
  return 0;
}
