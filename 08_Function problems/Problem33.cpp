#include <iostream>
#include <cmath>
using namespace std;

  // function to count no. of digits in N
   int countDigits(int N) {
       int count = 0;
        while(N > 0){
            count++;
            N /= 10;
        }
        return count;
   }

  // function to check if the given number is Armstrong or not 
  string checkArmstrong(int N) {  
        int TotalDigits = countDigits(N);
        int sum = 0;
        int originalN = N; // N is passed as a parameter to checkArmstrong and stored in originalN for later comparison
        for (int i = TotalDigits; i > 0; i--){
             int digit = N % 10;
             sum += int(round(pow(digit, TotalDigits)));
             N/= 10;
        }
        if (sum == originalN){
             return "Armstrong Number";
      } 
       else {
          return "Not Armstrong Number";
       }
    return 0;
}
    int main() {
    int N;
    cout << "Enter a number: ";
    cin >> N;
    cout << checkArmstrong(N);
    return 0;
}