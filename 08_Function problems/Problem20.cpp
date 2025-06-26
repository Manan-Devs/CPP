#include <iostream>
#include <vector> // uses vector 
using namespace std;
 
// function to find the largest prime factor of a given number
   void largestPrime(int num) {
     vector<int> largestPrime;
     // find all prime factors of the number
     for(int i = 2; i < num; i++){
         bool checkPrime = true;
         for (int j = i - 1; j > 1; j--){
             if (i % j == 0){
                 checkPrime = false;
                 break;
             }
         }
         // check number is prime and if it divides the given number
          if (checkPrime == true && num % i == 0) {
             largestPrime.push_back(i);
            }
    }
     // Print largest prime factor
    cout << largestPrime.back() << " ";
 }
    int main() {
    int num;
    cout << "Enter your number: ";
    cin >> num;
    cout << "Largest prime factor of your given number is: ";
    cout << endl;
    largestPrime(num);
    return 0;
}
