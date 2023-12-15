#include <iostream>
#include <string>

#include "info.h"

int main() {
  info();
  // Using >> operator
  std::cout << "Using >> operator:" << std::endl;
  std::string city;
  int population;
  std::cout << "Enter the name of a city: ";
  std::cin >> city;
  std::cout << "Enter the population of " << city << ": ";
  std::cin >> population;
  std::cout << "The city " << city << " has a population of " << population
            << " people." << std::endl;
  // Using getline() function
  std::cout << "\nUsing getline() function:" << std::endl;
  std::string quote;
  std::cout << "Enter a famous quote: ";
  getline(std::cin, quote);
  std::cout << "The quote you entered is: " << quote << std::endl;
  return 0;
}
