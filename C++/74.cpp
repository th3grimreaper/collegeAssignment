#include <iomanip>
#include <iostream>

#include "info.h"
using std::cout;
using std::endl;
using std::setbase;
using std::setfill;
using std::setprecision;
using std::setw;

int main() {
  info();
  // setw: Set the width of the next input/output field
  cout << "Using setw(10):" << endl;
  cout << setw(10) << "Hello" << setw(10) << "World" << endl;
  // setprecision: Set the number of digits to display for floating-point
  // numbers
  cout << "\nUsing setprecision(3):" << endl;
  double pi = 3.141592653589793;
  cout << "Pi: " << setprecision(3) << pi << endl;
  // setbase: Set the base for integer output (dec, oct, hex)
  cout << "\nUsing setbase:" << endl;
  int number = 255;
  cout << "Decimal: " << setbase(10) << number << endl;
  cout << "Octal: " << setbase(8) << number << endl;
  cout << "Hexadecimal: " << setbase(16) << number << endl;
  // setfill: Set the fill character for setw
  cout << "\nUsing setfill('*'):" << endl;
  cout << setfill('*') << setw(10) << "Hello" << setw(10) << "World" << endl;
  return 0;
}
