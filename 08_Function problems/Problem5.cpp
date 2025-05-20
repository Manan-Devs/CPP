#include <iostream>
using namespace std;

// function to find the GCD of multiple numbers 
int GCD(int num1 , int num2 , int num3)   {
     int GCD;
     if (num1 % num1 == 0 && num2 % num1 == 0 && num3 % num1 == 0 ){
          GCD = num1;
      }
      else if (num1 % num2 == 0 && num2 % num2 == 0 && num3 % num2 == 0) {
           GCD = num2;
      }
       else if (num1 % num3 == 0 && num2 % num3 == 0 && num3 % num3 == 0) {
           GCD = num3;
       }
     return GCD;
}
 

  int main() {
    int num1;
    int num2;
    int num3;
    cout << "Enter the num1: ";
    cin >> num1;
    cout << "Enter the num2: ";
    cin >> num2;
    cout << "Enter the num3: ";
    cin >> num3;
    cout << "The Greatest Common Divisor in these numbers are: " << GCD(num1 , num2 , num3);
    return 0;
}