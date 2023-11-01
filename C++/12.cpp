#include <iostream>

#include "info.h"

int main() {
  info();
  std::cout << "this program prints numbers from 2 to 20 using for loop:"
            << std::endl;
  for (int i = 1; i <= 10; i++) {
    std::cout << i * 2 << std::endl;
  }
  return 0;
}
