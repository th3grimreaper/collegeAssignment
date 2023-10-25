#include <iostream>
#include "info.h"

int main() {
  info();
  std::cout << "this program prints numbers from 1 to 10 using for loop:" << std::endl;
  for (int i = 1; i <= 10; i++) {
    std::cout << i << std::endl;
  }
  return 0;
}
