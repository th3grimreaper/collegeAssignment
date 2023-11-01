#include <iostream>

#include "info.h"

void printHollowSquare(int len, int breadth) {
  for (int i = 0; i < len; i++) {
    for (int j = 0; j < breadth; j++) {
      if ((i == 0 || i == len - 1) || (j == 0 || j == breadth - 1)) {
        std::cout << "*";
      } else {
        std::cout << " ";
      }
    }
    std::cout << std::endl;
  }
}

int main() {
  info();
  int len, brd;
  std::cout << "enter the length and breadth:" << std::endl;
  std::cin >> len >> brd;
  printHollowSquare(len, brd);
  return 0;
}
