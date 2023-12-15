#include <fstream>
#include <iostream>

#include "info.h"
using std::cin;
using std::cout;
using std::endl;
using std::ios;
using std::ofstream;
using std::string;

int main() {
  info();
  // Open the file in append mode
  ofstream outputFile("Shiva", ios::app);
  // Checking if the file is open
  if (!outputFile.is_open()) {
    cout << "Error opening the file!" << endl;
    return 1;
  }
  // Add content to the file
  cout << "Enter content to append to the file (Ctrl+D to end input on Linux): "
          "\n";
  // Read input from the user and append it to the file
  string content;
  while (getline(cin, content)) {
    outputFile << content << endl;
  }
  // Close the file stream
  outputFile.close();
  cout << "Content added to the file successfully." << endl;
  return 0;
}
