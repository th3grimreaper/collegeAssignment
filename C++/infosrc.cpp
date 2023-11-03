#include <iostream>

#include <ctime>

#include "info.h"

void info() {
  time_t timenow = time(0);
  char *displayTime = ctime(&timenow);
  std::cout << "Name: T. Sai Praveen" << std::endl;
  std::cout << "Roll no: 55" << std::endl;
  std::cout << "Class: MCA Ist" << std::endl;
  std::cout << "Date and Time: " << displayTime << std::endl;
  std::cout << "-----------------------------------------" << std::endl;
}
