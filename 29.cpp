#include <iostream>
#include "info.h"

void swapWithoutThird(int &a, int &b) {
  a = a + b;
  b = a - b;
  a = a - b;
}

int main() {
  info();
  int a, b;
  std::cout << "enter a and b: " << std::endl;
  std::cin >> a >> b;
  std::cout << "before swap: a = " << a << ", b = " << b << std::endl;
  swapWithoutThird(a,b);
  std::cout << "after swap: a = " << a << ", b = " << b << std::endl;
  return 0;
}
