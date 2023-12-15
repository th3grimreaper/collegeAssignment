#include <fstream>
#include <iostream>
#include <string>

#include "info.h"
int main() {
  info();
  // Creating the file and writing details
  std::ofstream outputFile("Info");
  // Checking if the file is open
  if (!outputFile.is_open()) {
    std::cout << "Error creating the file!" << std::endl;
    return 1;
  }
  // Writing details to the file
  outputFile << "Name: Sai\n";
  outputFile << "Age: 23\n";
  outputFile << "Class: MCA-I\n";
  outputFile << "Address: Raigarh \n";
  // Close the file stream
  outputFile.close();
  // Reading and displaying details from the file
  std::ifstream inputFile("Info");
  // Checking if the file is open
  if (!inputFile.is_open()) {
    std::cout << "Error opening the file!" << std::endl;
    return 1;
  }
  std::cout << "Details from the file:\n";
  // Read and display contents until the end of the file
  while (!inputFile.eof()) {
    std::string line;
    getline(inputFile, line);
    std::cout << line << std::endl;
  }
  // Close the file stream
  inputFile.close();
  return 0;
}
