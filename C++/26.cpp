#include <iostream>

#include "info.h"

struct Date {
  int day, month, year;
};

void showinput(Date s) {
  std::cout << "Date entered is: " << s.day << "/" << s.month << "/" << s.year
            << std::endl;
}

void getinput() {
  Date str;
  std::cout << "enter the Day, Month and Year:" << std::endl;
  std::cin >> str.day >> str.month >> str.year;
  showinput(str);
}

int main() {
  info();
  getinput();
  return 0;
}
