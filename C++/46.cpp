#include <iostream>
#include <string>

#include "info.h"

class candidate {
  long RNo;
  std::string Name;
  float Score;
  std::string Remarks;
  void AssignRem() {
    if (Score >= 50) {
      Remarks = "Selected";
    } else if (Score < 50) {
      Remarks = "Not Selected";
    }
  }

public:
  void Enter() {
    std::cout << "Enter the RNo, Name and Score of the student: ";
    std::cin >> RNo >> Name >> Score;
    AssignRem();
    std::cout << std::endl;
  }

  void Display() {
    std::cout << "Registration Number: " << RNo << std::endl;
    std::cout << "Name: " << Name << std::endl;
    std::cout << "Score: " << Score << std::endl;
    std::cout << "Remarks: " << Remarks << std::endl;
  }
};

int main() {
  info();
  candidate can0;
  can0.Enter();
  can0.Display();
  return 0;
}
