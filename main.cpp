#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
  double first, second;

  cout<< "First number: ";
  cin>> first;
  cout<< "Second number: ";
  cin>> second;

<<<<<<< HEAD
  std::cout<< "Addition: "<< first << "+" << second << "=";
  std::cout<< (first+second) << std::endl;
  std::cout<< "Subtraction: "<< first << "-" << second << "=";
  std::cout<< (first-second) << std::endl;
  std::cout<< "Multiplecation: "<< first << "*" << second << "=";
  std::cout<< (first*second) << std::endl;
=======
  cout<< "Addition: "<< first << "+" << second << "=";
  cout<< (first+second) << endl;
  cout<< "Subtraction: "<< first << "-" << second << "=";
  cout<< (first-second) << endl;
  cout<< "Multiplication: "<< first << "*" << second << "=";
  cout<< (first*second) << endl;
>>>>>>> 14936c0a26d39b8368f0edd5a9f994a8c75474e4

  return 0;
}