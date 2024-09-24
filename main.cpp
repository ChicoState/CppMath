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

  cout<< "Addition: "<< first << "+" << second << "=";
  cout<< (first+second) << endl;
  cout<< "Subtraction: "<< first << "-" << second << "=";
  cout<< (first-second) << endl;
  cout<< "Multiplication: "<< first << "*" << second << "=";
  cout<< (first*second) << endl;

  if (!second)
    std::cout<< "Division: Error - cannot divide by zero!\n";
  else
    std::cout<< "Division: "<< first<< "/"<< second<< "=" << (first/second)<<std::endl;
// new change

  return 0;
}
