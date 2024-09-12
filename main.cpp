#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
  // creating inputs 
  double first, second;

  // printing statements to alert the user to enter inputs
  cout<< "First number: ";
  cin>> first;
  cout<< "Second number: ";
  cin>> second;

  // printing results of operations
  cout<< "Addition: "<< first << "+" << second << "=";
  cout<< (first+second) << endl;
  cout<< "Subtraction: "<< first << "-" << second << "=";
  cout<< (first-second) << endl;
  cout<< "Multiplication: "<< first << "*" << second << "=";
  cout<< (first*second) << endl;

  return 0;
}
