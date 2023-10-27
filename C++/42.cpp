#include <iostream>

#include "info.h"

class LargestOfThree {
  int x, y, z;

public:
  void getdata(int x, int y, int z) {
    this->x = x;
    this->y = y;
    this->z = z;
  }

  int compareTwo(int a, int b) { return a > b; }

  int compareAll(int a, int b, int c) {
    return compareTwo(a, b) && compareTwo(a, c)   ? a
           : compareTwo(b, a) && compareTwo(b, c) ? b
                                                  : c;
  }

  void showLargest() {
    std::cout << "Largest number between " << x << ", " << y << " and " << z
              << " is " << compareAll(x, y, z) << "." << std::endl;
  }
};

int main() {
  info();
  int x, y, z;
  std::cout << "enter three numbers x, y and z: " << std::endl;
  std::cin >> x >> y >> z;
  LargestOfThree obj;
  obj.getdata(x, y, z);
  obj.showLargest();
  return 0;
}
