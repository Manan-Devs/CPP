#include <iostream>
#include <string> // Include string for using string type
#include <vector> // Include vector for using vector type 
using namespace std;

// Function to calculate the circumference of a circle
float areaOfCircle(int r) {
    float pi = 3.14;
    float area = pi * r * r; // Formula for area 
    return area;
}

// Function to find Even or Odd
string findEvenOdd(int n) {
    if (n % 2 == 0) {
        return "Even";
    } else {
        return "Odd";
    }
}

 // Function to print Factorial of any number 
  int Factorial(int num ){
       int fact = num;
       for (int i = num; i > 1; i--){
         fact = fact * (i - 1);
       }
       return fact;
  }

  // Function to check isNumberPrime or not

   string primeNumber(int primeNum) {
        if (primeNum <= 1) {
             return "not prime";
        }
        else {
           for (int i = primeNum - 1; i > 1; i--) {
               if (primeNum % i == 0) {
                  return "not prime"; // not prime
               }
           } 
         return "true"; // prime 
        }
   }

   
 // A.I assisted
// Function to print all prime numbers from 1 to N
vector<int> printPrimetoN(int N) {
    vector<int> primes; // Vector to store prime numbers
    if (N > 1) {
        for (int i = 2; i <= N; i++) { // Loop through numbers from 2 to N
            bool isPrime = true; // Assume the number is prime
            for (int j = 2; j <= i / 2; j++) { // Check divisors from 2 to i/2
                if (i % j == 0) { // If divisible, it's not prime
                    isPrime = false;
                    break; // Exit the inner loop
                }
            }
            if (isPrime) {
                primes.push_back(i); // Add the prime number to the vector
            }
        }
    }
    return primes; // Return the vector of prime numbers
}
  

int main() {
    // area of circle
    //int r;
    //cout << "Enter the radius of circle" << endl;
    //cin >> r;
    //cout << "Area of circle is : " << areaOfCircle(r) << endl;

    // Even or Odd
    //int n;
    //cout << "Enter the number" << endl;
    //cin >> n;
    //cout << "Number is: " << findEvenOdd(n) << endl;

    int num;
    //cout << "Enter the number" << endl;
    //cin >> num;
    //cout << "Factorial of your given number is : " << Factorial(num) << endl;
    
     //Check if the number is prime or not 
    int primeNum;
    cout << "Enter the number" << endl;
    cin >> primeNum;
    cout << "Your given number is :" << primeNumber(primeNum) << endl;
 
     // Print all prime numbers from 1 to N
    int N;
    cout << "Enter the Number" << endl;
    cin >> N;

    // Get all prime numbers from 1 to N
    vector<int> primes = printPrimetoN(N);

    // Print the prime numbers
    cout << "All prime numbers from 1 to " << N << " are: ";
    for (int prime : primes) {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}
