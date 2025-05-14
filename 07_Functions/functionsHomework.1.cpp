#include <iostream>
#include <string> // Include string for using string type
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

   string checkPrime(int primeNum) {
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
    cout << "Enter your number : " << endl;
    cin >> N;
    cout << "All prime numbers from 1 to " << N << " are : ";
     for (int j = 2; j <= N; j++) {
         if (checkPrime(j) == "prime") {
             cout << j << " "; // Print prime number 
         }
     } 
    cout << endl; 




    return 0;
}
