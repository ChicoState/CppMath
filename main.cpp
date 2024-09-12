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

  if((first != 0) && (second != 0)){
  cout<< "Division: "<< first << "/" << second << "=";
  cout<< (first/second) << endl;
  }
  else{
  cout << "Error: Either number can't be Zero, can't do Division." << endl;		  
  }
  
  return 0;
}
