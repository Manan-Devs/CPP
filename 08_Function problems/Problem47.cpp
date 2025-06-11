#include <iostream>
using namespace std;

// function to generate sum of prime numbers in a given range
 int sumPrimeInRange(int start, int end){
     int sum = 0;
     for (int i = start+1; i <= end; i++){
        bool checkPrime = true;
         for(int j = i - 1; j > 1; j--){
            if (i % j == 0) {
                checkPrime = false;
                break;
            }
         }
            if (checkPrime == true){
                 sum+= i;
            }
     }
      return sum;
 }

   int main() {
    int start;
    int end;
    cout << "Enter your start value : ";
    cin >> start;
    cout << "Enter your end value : ";
    cin >> end;
    cout << "Sum of prime numbers in your given range is : " << sumPrimeInRange(start,end);
    return 0;
}