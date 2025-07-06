#include <iostream>
#include <cmath>
using namespace std;

// function to check if a given number is Narcissistic 
string NarcissisticNum(int number){
    int sum = 0;
    int digits = 0;
    int tempNum = number;
    // count digits of number
    while(tempNum > 0){
        tempNum /= 10;
        digits++;
    }
    tempNum = number;
    // check number is narcissistic
    while(tempNum > 0){
        int digit = tempNum % 10;
        sum += round(pow(digit, digits));
        tempNum /= 10;
    }
    if (sum == number){
        return "Narcissistic Number";
    } 
    else if (sum != number){
      return "Not Narcissistic Number";
    }
    
}
   
   int main() {
    int number;
    cout << "Enter your number: ";
    cin >> number;
    cout << NarcissisticNum(number);
    return 0;
}
