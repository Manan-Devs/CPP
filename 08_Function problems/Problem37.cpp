#include <iostream>
using namespace std;


  int summingDigits(int N) {
      int sum = 0;
      while(N > 0){
         sum+= N % 10; // Add the last digit to sum
         N /= 10; // Remove the last digit
      }
      return sum;
  }
    
    int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    cout << "The sum of all digits of your number is: " << summingDigits(N) << endl;
    return 0;
}