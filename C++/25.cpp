#include <iostream>
#include <string>

#include "info.h"

struct Student {
  std::string fname;
  int roll, marks;
};

void getandshowData() {
  Student s[5];
  for (int i = 0; i < 5; i++) {
    std::cout << "Enter name of student " << i + 1 << std::endl;
    std::cin >> s[i].fname;
    std::cout << "Enter roll no. of student " << i + 1 << std::endl;
    std::cin >> s[i].roll;
    std::cout << "Enter marks of student " << i + 1 << std::endl;
    std::cin >> s[i].marks;
    std::cout << std::endl;
  }

  std::cout << "Following are the details of 5 students: " << std::endl;
  for (int i = 0; i < 5; i++) {
    std::cout << "Name of student " << i + 1 << " is " << s[i].fname
              << std::endl;
    std::cout << "Roll no of student " << i + 1 << " is " << s[i].roll
              << std::endl;
    std::cout << "Marks of student " << i + 1 << " is " << s[i].marks
              << std::endl;
    std::cout << std::endl;
  }
}

int main() {
  info();
  getandshowData();
  return 0;
}
