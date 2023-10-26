#include <iostream>
#include "info.h"

int main() {
  info();
  int num;
  std::cout << "enter a number:" << std::endl;
  std::cin >> num;
  std::cout << "cube of numbers from 1 to n:" << std::endl;
  for (int i = 1; i <= num; i++) {
    std::cout << i*i*i << std::endl;
  }
  return 0;
}
