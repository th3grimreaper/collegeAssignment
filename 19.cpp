#include <iostream>
#include "info.h"

int main() {
  info();
  int sumEven = 0;
  int sumOdd = 0;
  for (int i = 1; i <= 20; i++) {
    if(i%2==0) {
      sumEven += i;
    }
  }
  std::cout << "addition of first 1 to 20 even numbers gives: " << sumEven << std::endl;

  for (int i = 1; i <= 20; i++) {
    if(!(i%2==0)) {
      sumOdd += i;
    }
  }
  std::cout << "addition of first 1 to 20 odd numbers gives: " << sumOdd << std::endl;
  return 0;
}
