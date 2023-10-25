#include <iostream>
#include "info.h"

int main() {
  info();
  int age;
  char gender;
  std::cout << "Enter your age: ";
  std::cin >> age;
  std::cout << "Enter your gender (M/m for Male, F/f for Female): ";
  std::cin >> gender;

  if (age >= 18) {
    if (gender == 'M' || gender == 'm') {
      std::cout << "Send him to room number 10 for voting." << std::endl;
    } else if (gender == 'F' || gender == 'f') {
      std::cout << "Send her to room number 12 for voting." << std::endl;
    } else {
      std::cout << "Gender not recognized. Send to room number 8." << std::endl;
    }
  } else {
    std::cout << "Not eligible for voting." << std::endl;
  }
  return 0;
}
