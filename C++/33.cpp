#include <iostream>

#include "info.h"

int simpleInterest(float P = 10000, float R = 5, float T = 2) {
  return (P * R * T) / 100;
}

int main() {
  info();
  std::cout
      << "Simple Interest with default values P = 10000, R = 5 and T = 2 is "
      << simpleInterest() << "." << std::endl;
  return 0;
}
