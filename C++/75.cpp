#include <iomanip>
#include <ios>
#include <iostream>
#include <string>

#include "info.h"
using std::cin;
using std::cout;
using std::endl;
using std::left;
using std::setfill;
using std::setw;
using std::string;

int main() {
  info();
  cout << "Enter a string: ";
  string userInput;
  cin >> userInput;
  // Set the width to 8, left-justify, and fill unused space with '#'
  cout << "Left-justified output with width 8 and fill '#' :" << endl;
  cout << setfill('#') << setw(8) << left << userInput << endl;
  return 0;
}
