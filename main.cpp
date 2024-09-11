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
  std::cout<< "Multiuplication: "<< first << "*" << second << "=";
  std::cout<< (first*second) << std::endl;
  std::cout<< "Division: "<< first << "/" << second << "=";
  std::cout<< (first/second) << std::end

  return 0;
}