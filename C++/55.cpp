#include <iostream>

#include "info.h"

int main() {
  info();
  int *ptr = new int;
  *ptr = 10;
  std::cout << "memory has been allocated to ptr dynamically. the value is "
            << *ptr << std::endl;
  delete ptr;
  std::cout << "the memory has been freed." << std::endl;
  return 0;
}
