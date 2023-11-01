#include <iostream>

#include "info.h"

int main() {
  info();
  int length;
  std::cout << "enter the length: " << std::endl;
  std::cin >> length;
  for (int i = length; i > 0; i--) {
    for (int j = 1; j <= length; j++) {
      if (j >= i) {
        std::cout << "*";
      } else {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }
  return 0;
}
