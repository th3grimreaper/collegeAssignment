#include <iostream>
#include "info.h"

void callByRef(int* x, int* y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  info();
  int a, b;
  std::cout << "enter a and b: " << std::endl;
  std::cin >> a >> b;
  std::cout << "before swap: a = " << a << ", b = " << b << std::endl;
  callByRef(&a,&b);
  std::cout << "after swap: a = " << a << ", b = " << b << std::endl;
  return 0;
}
