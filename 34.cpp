#include <iostream>
#include "info.h"
using namespace std;

template <class T, class S>
void sumIntFloat(T i1, T i2, S f1, S f2) {
  std::cout << "sum of integers i1 and i2 is : " << i1 + i2 << std::endl;
  std::cout << "sum of floating point numbers f1 and f2 is : " << f1 + f2 << std::endl;
}

int main() {
  info();
  int i1, i2;
  float f1, f2;
  std::cout<< "enter two integers i1 and i2: "<< std::endl;
  std::cin >> i1 >> i2;
  std::cout<< "enter two floating point numbers f1 and f2: "<< std::endl;
  std::cin >> f1 >> f2;
  sumIntFloat(i1, i2, f1, f2);
  return 0;
}
