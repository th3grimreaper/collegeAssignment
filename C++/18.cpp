#include <iostream>
#include "info.h"

int main() {
  info();
  double dbl;
  std::cout << "enter a double value: ";
  std::cin >> dbl;
  std::cout << "the value you entered was " << dbl << std::endl;
  std::cout << "the value after typecasting it to int is " << int(dbl) << std::endl;
  return 0;
}
