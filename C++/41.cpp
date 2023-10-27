#include <iostream>
#define SIZE 5
#include "info.h"

class Student {
  int rollno;
  int marks[SIZE];

public:
  void getdata();
  void showdata();
  void totalmarks();
};

void Student::getdata() {
  std::cout << "Enter your rollno: ";
  std::cin >> rollno;
  for (int i = 0; i < SIZE; i++) {
    std::cout << "Enter the marks for subject " << i + 1 << " : ";
    std::cin >> marks[i];
  }
  std::cout << std::endl;
}

void Student::showdata() {
  std::cout << "The marks for the student with roll no " << rollno
            << " are as follows:" << std::endl;
  for (int i = 0; i < SIZE; i++) {
    std::cout << "Subject " << i + 1 << " : " << marks[i] << std::endl;
  }
  std::cout << std::endl;
}

void Student::totalmarks() {
  float sum = 0;
  for (int i = 0; i < SIZE; i++) {
    sum += marks[i];
  }
  std::cout << "The total marks for the student with roll no " << rollno
            << " is : " << sum << std::endl;
}

int main() {
  info();
  Student stud;
  stud.getdata();
  stud.showdata();
  stud.totalmarks();
  return 0;
}
