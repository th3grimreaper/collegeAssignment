#include <fstream>
#include <iostream>
#include <string>

#include "info.h"
using std::cout;
using std::endl;
using std::ifstream;
using std::string;

int main() {
  info();
  // Creating a file stream
  ifstream inputFile("example.txt");
  // Checking if the file is open
  if (!inputFile.is_open()) {
    cout << "Error opening the file!" << endl;
    return 1;
  }
  // Using read() function
  char buffer[100];
  cout << "Using read() function:" << endl;
  inputFile.read(buffer, 7); // Read 7 characters
  buffer[7] = '\0';          // Null-terminate the buffer
  cout << "Read using read(): " << buffer << endl;
  // Clearing the stream flags and resetting the position
  inputFile.clear();
  inputFile.seekg(0);
  // Using getline() function
  string line;
  cout << "\nUsing getline() function:" << endl;
  getline(inputFile, line); // Read a line
  cout << "Read using getline(): " << line << endl;
  // Close the file stream
  inputFile.close();
  return 0;
}
