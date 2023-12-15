#include <fstream>
#include <iostream>
#include <ostream>

#include "info.h"
int main() {
  info();
  // Creating the file using the constructor
  std::ofstream outputFile("Rudra");
  // Checking if the file is open
  if (!outputFile.is_open()) {
    std::cout << "Error creating the file!" << std::endl;
    return 1;
  }
  // Writing some content to the file (optional)
  outputFile << "Hello, rudra this side." << std::endl;
  // Close the file stream
  outputFile.close();
  std::cout << "File 'Rudra' created successfully." << std::endl;
  return 0;
}
