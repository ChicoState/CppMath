#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
  double first, second;

  cout<< "1st number: ";
  cin>> first;
  cout<< "2nd number: ";
  cin>> second;

  cout<< "Add: "<< first << "+" << second << "=";
  cout<< (first+second) << endl;
  cout<< "Sub: "<< first << "-" << second << "=";
  cout<< (first-second) << endl;
  cout<< "Multiply: "<< first << "*" << second << "=";
  cout<< (first*second) << endl;

  return 0;
}
