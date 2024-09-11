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
  // Multiplication
  std::cout<< "Multiplication: "<< first << "*" << second << "=";
  std::cout<< (first*second) << std::endl;

  return 0;
}