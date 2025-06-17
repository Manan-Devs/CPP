#include <iostream>
using namespace std;

// function to generate prime numbers less than given number
void primeNumbers(int number){
     for(int i = 2; i < number; i++){
         bool checkPrime = true;
         for(int j = 2; j < i; j++){
             if(i % j == 0){
                checkPrime = false;
                break;
             }
         }
          if (checkPrime == true){
             cout << i << " ";
          }
     }
}
   int main() {
    int number;
    cout << "Enter the number: ";
    cin >> number;
    cout << "Prime numbers less than number are: " << endl;
    primeNumbers(number);
    return 0;
  
}