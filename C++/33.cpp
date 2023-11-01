#include <iostream>

#include "info.h"

int simpleInterest(int P = 10000, int R = 5, int T = 2) {
  return (P * R * T) / 100;
}

int main() {
  info();
  std::cout
      << "Simple Interest with default values P = 10000, R = 5 and T = 2 is "
      << simpleInterest() << "." << std::endl;
  return 0;
}
