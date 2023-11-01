#include <iostream>

#include "info.h"

int main() {
  info();
  int res = 25, p = 3;
  std::cout << "Initial value of res is " << res << " and that of p is " << p
            << "." << std::endl;
  std::cout << "value of res with post decrement operator: " << res--
            << std::endl;
  std::cout << "value of res with pre increment operator: " << ++res
            << std::endl;
  p = p * ++res;
  std::cout << "value of updated p: " << p << std::endl;
  return 0;
}
