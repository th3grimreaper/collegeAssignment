#include <iostream>
#include "info.h"

int main() {
  info();
  int a, b;
  std::cout << "program to demonstrate the working of bitwise operators: " << std::endl;
  std::cout << "enter two numbers a and b:" << std::endl;
  std::cin >> a >> b;
  std::cout << "bitwise OR operation gives: " << (a|b) << std::endl;
  std::cout << "bitwise AND operation gives: " << (a&b) << std::endl;
  std::cout << "bitwise XOR operation gives: " << (a^b) << std::endl;
  std::cout << "bitwise leftshift on a by 1 gives: " << (a<<1) << std::endl;
  std::cout << "bitwise rightshift on b by 2 gives: " << (b>>2) << std::endl;
  return 0;
}
