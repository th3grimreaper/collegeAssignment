#include <iostream>
#include "info.h"
using namespace std;

enum Fruits {
  apple = 1,
  banana,
  kiwi,
  dragonfruit,
  orange
};

int main() {
  info();
  Fruits f;
  int i;
  std::cout << "Choose a number from 1 to 5:" << std::endl;
  std::cin >> i;
  switch (i) {
    case apple:
      std::cout << "You chose apple." << std::endl;
      break;
    case banana:
      std::cout << "You chose banana." << std::endl;
      break;
    case kiwi:
      std::cout << "You chose kiwi." << std::endl;
      break;
    case dragonfruit:
      std::cout << "You chose dragonfruit." << std::endl;
      break;
    case orange:
      std::cout << "You chose orange." << std::endl;
      break;
    default:
      std::cout << "Invalid option." << std::endl;
      break;
  }
  return 0;
}
