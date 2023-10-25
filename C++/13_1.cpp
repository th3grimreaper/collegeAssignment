#include <iostream>
#include "info.h"

int main () {
  info();
  int length;
  std::cout << "enter the length: " << std::endl;
  std::cin >> length;
  for (int i = length; i >= 1; i--) {
    for (int j = i; j >= 1; j--) {
        std::cout << "*";
      }
    std::cout << std::endl;
  }
  return 0;
}
