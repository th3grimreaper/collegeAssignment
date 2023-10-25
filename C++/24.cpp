#include <iostream>
#include "info.h"

int main() {
  info();
  std::cout << "Here, the program breaks out of the loop when it reaches 5: " << std::endl;
    for (int i = 0; i < 10; i++) {
      if (i == 5) {
        break; // This will exit the loop completely.
      }
      std::cout << i << " ";
    }
  std::cout << std::endl;

  std::cout << "And here, the program skips the value 5 when continue statement is used: " << std::endl;
  for (int i = 0; i < 10; i++) {
    if (i == 5) {
      continue; // This will skip to the next iteration of the loop.
    }
    std::cout << i << " ";
  }
  std::cout << std::endl;
  return 0;
}
