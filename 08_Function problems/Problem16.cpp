#include <iostream>
using namespace std;

// function to find the Sum of first N prime numbers 
 int sumPrime(int N) {
     int count = 0;
     int sum = 0;
     bool checkPrime;
     for(int i = 2; count < N; i++){
         for (int j = i - 1; j > 1; j--){
             if (i % j != 0){
                checkPrime = true;
             }
             else {
                checkPrime = false;
                break;
             }
         }
          if (checkPrime == true) {
             sum = sum + i;
             count++;
          }
     }
     return sum;
 } 
 




int main() {
    int N;
    cout << "Enter your N: ";
    cin >> N;
    cout << sumPrime(N);
    return 0;
}