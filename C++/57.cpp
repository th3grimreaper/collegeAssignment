#include <iostream>
#include <string>

#include "info.h"

// program to demonstrate use of pointer to object

class Student {
  std::string name;
  int age;

public:
  void Stu_info(std::string name, int age) {
    this->name = name;
    this->age = age;
  }

  void show_info() {
    std::cout << "name : " << name << std::endl;
    std::cout << "age : " << age << std::endl;
  }
};
int main() {
  info();
  std::string name;
  int age;
  Student obj, *ptr;
  ptr = &obj;
  std::cout << "enter student name:" << std::endl;
  std::cin >> name;
  std::cout << "enter student age:" << std::endl;
  std::cin >> age;
  ptr->Stu_info(name, age);
  ptr->show_info();

  return 0;
}
