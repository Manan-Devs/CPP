#include <iostream>
using namespace std;


// function to find the sum of digits of the factorial of a number 
  int FactorialDigitSum(int N) {
      int num;
      int digitSum = 0;
      for (int i = N - 1; i > 0; i--) {
          N*= i;
      }
      num = N;
         while(num > 0){
          digitSum += num % 10;
          num/= 10;
         }
      return digitSum;
  }
    
    int main() {
     int N;
     cout << "Enter value of N: ";
     cin >> N;
     cout << "Sum of Digits of the Factorial of " << N << " " << "is : " << FactorialDigitSum(N) << endl;
    return 0;
}