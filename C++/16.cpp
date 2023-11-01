#include <iostream>

#include "info.h"

int main() {
  info();
  int sum = 0;
  std::cout
      << "program to calculate value of 132x8 without using the * operator: "
      << std::endl;
  for (int i = 1; i <= 8; i++) {
    sum += 132;
  }
  std::cout << "the value of 132x8 is " << sum << std::endl;
  return 0;
}
