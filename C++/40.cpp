#include <iostream>

#include "info.h"

int main() {
  const int size = 5;
  int arr[size];
  info();
  std::cout << "enter 5 values to store inside the array:" << std::endl;
  for (int i = 0; i < size; i++) {
    std::cin >> arr[i];
  }

  std::cout << "values of the array printed in reverse order:" << std::endl;
  for (int i = size - 1; i >= 0; i--) {
    std::cout << arr[i] << std::endl;
  }
  return 0;
}
