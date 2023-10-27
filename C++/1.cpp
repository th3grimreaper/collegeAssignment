#include <iostream>

#include "info.h"

int main() {
  info();
  std::cout << "size of char is " << sizeof(char) << std::endl;
  std::cout << "size of bool is " << sizeof(bool) << std::endl;
  std::cout << "size of int is " << sizeof(int) << std::endl;
  std::cout << "size of long is " << sizeof(long) << std::endl;
  std::cout << "size of long long is " << sizeof(long long) << std::endl;
  std::cout << "size of float is " << sizeof(float) << std::endl;
  std::cout << "size of double is " << sizeof(double) << std::endl;
  std::cout << "size of long double is " << sizeof(long double) << std::endl;

  return 0;
}
