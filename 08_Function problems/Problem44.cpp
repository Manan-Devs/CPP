#include <iostream>
#include <cmath>
using namespace std;

  int PowerOfNumber(int base , int exponent) {
      int result = 1;
      for(int i = 1; i <= exponent; i++){
          result*=  base;
      }
      return result;
  }

    int main() {
    int base , exponent;
    cout << "Enter your base and exponent: ";
    cin >> base >>  exponent;
    cout << PowerOfNumber(base,exponent);

    return 0;
}