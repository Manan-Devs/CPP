#include <iostream>
using namespace std;


  // function to find sum of digits of the product of two numbers 
     long long sumOfDigits(int num1 , int num2) {
      long long multiplyNums = abs(num1 * num2);
      long long sum = 0;
      while(multiplyNums > 0) {
         sum+= multiplyNums % 10;
         multiplyNums/= 10;
      }
      return sum;
  }
   
   
   
   int main() {
     int num1;
     int num2;
     cout << "Enter your number 1: ";
     cin >> num1;
     cout << "Enter your number 2: ";
     cin >> num2;
     cout << "Sum of digits of product of both numbers are: " << sumOfDigits(num1 , num2) << endl;
    return 0;
}
