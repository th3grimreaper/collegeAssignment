#include <iostream>

#include "info.h"

int main() {
  int number;
  std::cout << "Enter a number: ";
  std::cin >> number;

  if (number > 0) {
    goto positive;
  } else if (number < 0) {
    goto negative;
  } else {
    goto zero;
  }

positive:
  std::cout << "The number is positive." << std::endl;
  goto end;

negative:
  std::cout << "The number is negative." << std::endl;
  goto end;

zero:
  std::cout << "The number is zero." << std::endl;

end:
  return 0;
}
