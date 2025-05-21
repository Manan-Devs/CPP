#include <iostream>
using namespace std;

// function to find out All Divisors of the Product of two numbers 
 void divisors(int number1 , int number2) {
     int product = number1 * number2;
     for (int i = 1; i <= product; i++){
         if (product % i == 0){
             cout << " " << i;
         }
     }
 }
  
  int main() {
    int number1;
    int number2;
    cout << "Enter your number1: ";
    cin >> number1;
    cout << "Enter your number2: ";
    cin >> number2;
    divisors(number1, number2);
    cout << endl;
    cout << "List of all divisors from 1 to product of number 1 and number2";
    return 0;
}