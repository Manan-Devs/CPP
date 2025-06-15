#include <iostream>
#include <cmath>
using namespace std;

// function to find the sum of prime factors of given number
   int sumPrimeFactorsOfN(int N){
      int sum = 0;
      for(int i = 2; i <= N; i++){
          bool checkPrime = true;
          for(int j = 2; j < i; j++){
             if(i%j == 0){
                checkPrime = false;
                break;
             }
          }
          if (checkPrime == true && N % i == 0){
              sum+= i;
          }
      }
      return sum;
}
     
    int main() {
    int N;
    cout << "Enter your number : ";
    cin >> N;
    cout << "Sum of prime factors of given number is : " << endl;
    cout << sumPrimeFactorsOfN(N);
    return 0;
}