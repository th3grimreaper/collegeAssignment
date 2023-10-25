#include <iostream>
#include "info.h"
using namespace std;

void callByAddr(int &x, int &y) {
  int temp;
  temp = x;
  x = y;
  y = temp;
}

int main() {
  info();
  int a, b;
  std::cout << "enter a and b: " << std::endl;
  std::cin >> a >> b;
  std::cout << "before swap: a = " << a << ", b = " << b << std::endl;
  callByAddr(a,b);
  std::cout << "after swap: a = " << a << ", b = " << b << std::endl;
  return 0;
}
