#include <iostream>
#include "info.h"
using namespace std;

enum weekdays {
  sunday,
  monday,
  tuesday,
  wednesday,
  thursday,
  friday,
  saturday
};

int main() {
  info();
  int counter = 0;
  for (int i = sunday; i <= saturday; i++) {
    counter++;
  }
  std::cout << "The length of enum is " << counter << "." << std::endl;
  return 0;
}
