#include <iostream>

int main(){
  double first, second;

  std::cout<< "First number: ";
  std::cin>> first;
  std::cout<< "Second number: ";
  std::cin>> second;

  cout<< "Addition: "<< first << "+" << second << "=";
  cout<< (first+second) << endl;
  cout<< "Subtraction: "<< first << "-" << second << "=";
  cout<< (first-second) << endl;
  cout<< "Multiplication: "<< first << "*" << second << "=";
  cout<< (first*second) << endl;

  return 0;
}