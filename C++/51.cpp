#include <iostream>
#include <ostream>

#include "info.h"

class Sub {
  int ppr1_code, ppr2_code;

public:
  Sub() {
    ppr1_code = 10;
    ppr2_code = 11;
    std::cout << "Paper 1 code: " << ppr1_code << std::endl;
    std::cout << "Paper 2 code: " << ppr2_code << std::endl;
  }
};
class Mark {
  float ppr1_mark, ppr2_mark;

public:
  Mark(int x, int y) {
    ppr1_mark = x;
    ppr2_mark = y;
    std::cout << "Paper 1 mark: " << ppr1_mark << std::endl;
    std::cout << "Paper 2 mark: " << ppr2_mark << std::endl;
  }
  Sub obj;
};

int main() {
  info();
  Mark obj(13, 14);
  return 0;
}
