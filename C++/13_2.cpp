#include <iostream>

#include "info.h"

int main() {
  info();
  int length;
  std::cout << "enter the length: " << std::endl;
  std::cin >> length;
  for (int i = 1; i <= length; i++) {
    for (int j = 1; j <= i; j++) {
      std::cout << "*";
    }
    std::cout << std::endl;
  }
  return 0;
}
