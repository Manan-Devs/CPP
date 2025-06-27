#include <iostream>
#include <limits.h>
#include <cmath> 
#include <vector>  
using namespace std;
 
// function to find the largest prime factor of any number 
 vector <int> primeFactors;

  void isPrime(int n) {
     for(int i = 2; i < n; i++){
         bool checkPrime = true;
         for (int j = 2; j <= sqrt(i); j++){
             if (i % j == 0){
                checkPrime = false;
                break;
             }
         }
          if (checkPrime && n % i == 0){
              primeFactors.push_back(i);
          }
    }
  }

  int main() {
    int n;
    cout << "Enter your number: ";
    cin >> n;
    cout << "The largest prime factor of " << n << " is: ";
    isPrime(n);
    // find the maximum prime factor from the vector array 
    int Maxi = INT_MIN;
    for(int i = 0; i < primeFactors.size(); i++){
         if (primeFactors[i] > Maxi) {
             Maxi = primeFactors[i];
     }
}
    cout << Maxi << endl;
}



// ✅ Optimized & Clean Version:
// cpp
// Copy
// Edit
// #include <iostream>
// using namespace std;

// long long largestPrimeFactor(long long n) {
//     long long largest = -1;

//     // Divide by 2 until odd
//     while (n % 2 == 0) {
//         largest = 2;
//         n /= 2;
//     }

//     // Try all odd factors up to sqrt(n)
//     for (long long i = 3; i * i <= n; i += 2) {
//         while (n % i == 0) {
//             largest = i;
//             n /= i;
//         }
//     }

//     // If anything is left of n and greater than 2, it's prime
//     if (n > 2) {
//         largest = n;
//     }

//     return largest;
// }

// int main() {
//     long long n;
//     cout << "Enter a number: ";
//     cin >> n;
//     cout << "The largest prime factor of " << n << " is: " << largestPrimeFactor(n) << endl;
//     return 0;
// }
