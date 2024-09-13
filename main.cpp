#include <iostream>

int main(){
  double first, second;

  std::cout<< "First number: ";
  std::cin>> first;
  std::cout<< "Second number: ";
  std::cin>> second;

  std::cout<< "Addition: "<< first << "+" << second << "=";
  std::cout<< (first+second) << std::endl;
  std::cout<< "Subtraction: "<< first << "-" << second << "=";
  std::cout<< (first-second) << std::endl;
  if (second != 0) {
    std::cout<< "Division: "<< first << "/" << second << "=";
    std::cout<< (first/second) << std::endl;
  } else {
    std::cout<< "Division: Cannot divide by zero." << std::endl;
  }
  return 0;
}
