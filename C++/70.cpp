#include <fstream>
#include <iostream>

#include "info.h"
int main() {
  info();
  // Open the file in truncate mode
  std::ofstream outputFile("example", std::ios::trunc);
  // Checking if the file is open
  if (!outputFile.is_open()) {
    std::cout << "Error opening the file!" << std::endl;
    return 1;
  }
  // Add content to the file (optional)
  std::cout << "Enter content to write to the file:\n";
  std::string content;
  getline(std::cin, content);
  outputFile << content << std::endl;
  // Close the file stream
  outputFile.close();
  std::cout << "Truncate operation performed successfully." << std::endl;
  return 0;
}
