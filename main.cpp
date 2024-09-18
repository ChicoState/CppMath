#include <iostream>

using std::cout;
using std::cin;
using std::endl;

long nCr(int n, int r);
long fact(int n);

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
  cout<< "Binomial coefficient: "<< first << " choose " << second << "=";
  cout<< (nCr(first,second)) << endl;

  return 0;
}


// credit to https://www.geeksforgeeks.org/program-calculate-value-ncr/

// Returns n choose r
long nCr(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}

// Returns factorial of n
long fact(int n)
{
      if(n==0)
      return 1;
    long res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}