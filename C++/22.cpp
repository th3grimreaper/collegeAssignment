#include <iostream>
#include "info.h"

int main() {
  info();
  int num;
  std::cout << "enter a number between 1 and 25:" << std::endl;
  while(std::cin>>num) {
    if(num>=1 && num<=25) {
      std::cout << "Thank you user." << std::endl;
      break;
    } else {
      std::cout << "Please enter a number between 1 to 25 only." << std::endl;
    }
  }
  return 0;
}
