#include <fstream>
#include <iostream>

#include "info.h"
using std::cout;
using std::endl;
using std::fstream;
using std::ios;
using std::streampos;

int main() {
  info();
  // Open a file stream for reading and writing
  fstream file("example.txt", ios::in | ios::out);
  // Checking if the file is open
  if (!file.is_open()) {
    cout << "Error opening the file!" << endl;
    return 1;
  }
  // Get the current position of the input pointer (get pointer)
  streampos inputPosition = file.tellg();
  // Get the current position of the output pointer (put pointer)
  streampos outputPosition = file.tellp();
  cout << "Current position of the input pointer (get pointer): "
       << inputPosition << endl;
  cout << "Current position of the output pointer (put pointer): "
       << outputPosition << endl;
  // Perform some file operations here...
  // Close the file stream
  file.close();
  return 0;
}
