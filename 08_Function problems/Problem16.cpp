#include <iostream>
using namespace std;

// Optimized Version
// function to find the Sum of first N prime numbers 
 int sumPrime(int N) {
     int count = 0;
     int sum = 0;
     for(int i = 2; count < N; i++){
        bool checkPrime = true;
         for (int j = 2; j <= sqrt(i); j++){
             if (i % j == 0){
                checkPrime = false;
                break;
             }
         }
          if (checkPrime) {
             cout << i << " ";
             sum+= i;
             count++;
          }
     }
      cout << endl;
     return sum;
 } 
 




int main() {
    int N;
    cout << "Enter your N: ";
    cin >> N;
    cout << sumPrime(N);
    return 0;
}
