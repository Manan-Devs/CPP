#include <iostream>
using namespace std;

  
// function to finding the sum of squares of Digits 
 int sumSquaresDigits(int number){
     int sum = 0;
      while(number > 0){
        int digit = number % 10;
        sum+= digit * digit;
        number/= 10;
      }
      return sum;
 }
    int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    cout << sumSquaresDigits(number);
    return 0;
}