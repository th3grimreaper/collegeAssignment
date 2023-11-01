#include <iostream>

#include "info.h"

int main() {
  info();
  int oneArr[5];
  std::cout << "size of 1-D array oneArr[5] is " << 5 * sizeof(oneArr[0]) << "."
            << std::endl;
  int twoArr[2][5];
  std::cout << "size of 2-D array twoArr[2][5] is "
            << 2 * 5 * sizeof(twoArr[0][0]) << "." << std::endl;

  int threeArr[2][5][8];
  std::cout << "size of 2-D array twoArr[2][5][8] is "
            << 2 * 5 * 8 * sizeof(threeArr[0][0][0]) << "." << std::endl;
  return 0;
}
