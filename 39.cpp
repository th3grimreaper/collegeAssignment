#include <iostream>
#include "info.h"
using namespace std;

int main() {
  info();
  int arr[7];
  int average = 0;
  std::cout << "enter 7 values to store inside the array:" << std::endl;
  for (int i = 0; i < 7; i++) {
    std::cin >> arr[i];
  }

  for (int i = 0; i < 7; i++) {
     average += arr[i];
  }
  std::cout << "average of the 7 values stored inside the array is:" << average/7 << std::endl;
  
  return 0;
}
