#include <iostream>
#include "info.h"

int main() {
  info();
  std::cout << "size of char is " << sizeof(char) << std::endl;
  std::cout << "size of bool is " << sizeof(bool) << std::endl;
  std::cout << "size of int is " << sizeof(int) << std::endl;
  std::cout << "size of float is " << sizeof(float) << std::endl;
  std::cout << "size of double is " << sizeof(double) << std::endl;
  
  return 0;
}
