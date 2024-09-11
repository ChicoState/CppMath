#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
  double first, second;

  cout << "First number: ";
  cin >> first;
  cout << "Second number: ";
  cin >> second;

  cout << "Addition: "<< first << "+" << second << "=";
  cout << (first + second) << endl;
  cout << "Subtraction: "<< first << "-" << second << "=";
  cout << (first - second) << endl;
  cout << "Multiplication: "<< first << "*" << second << "=";
  cout << (first * second) << endl;

  if (second != 0.0) {
      cout << "Division: " << first << " / " << second << " = " << (first / second) << endl;
  }

  return 0;
}
