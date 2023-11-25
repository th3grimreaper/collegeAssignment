#include <iostream>

#include "info.h"

class keepCount {
public:
  static int count;
  keepCount() { cnt(); }

  static void cnt() {
    count++;
    std::cout << count << std::endl;
  }
};

int keepCount::count = 0;

int main() {
  info();
  keepCount obj1, obj2, obj3;
  return 0;
}
