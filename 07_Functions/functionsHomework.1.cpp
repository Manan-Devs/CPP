#include <iostream>
using namespace std;


// function to display area of circle
    float areaOfCircle(int r) {
       float pi = 3.14;
       float area =  pi * r * r;
       return area;
    }

 // function to find Even or odd
    string findEvenOdd (int n) {
        if (n % 2 == 0){
            return "Even";
        }
        else {
            return "Odd";
        }
    }
 
   
   // function to find factorial 
    int factorial(int num) {
        int fact = num;
        for (int i = num; i > 1 ; i--){
            fact = fact * (i - 1);
     }
        return fact;
    }


    

int main() {
    // Area of circle
   // int r;
    //cout << "Enter the radius of circle" <<endl;
   // cin >> r;
   // cout << "Area of circle is : " << areaOfCircle(r) <<endl;
    

    // Even or odd 
     int n;
    // cout << "Enter the number" <<endl;
     //cin >> n;
     //cout << "Number is: " << findEvenOdd(n) <<endl;

    // Factorial 
     int num;
     cout << "Enter the number to find factorial" <<endl;
     cin >> num;
     cout << "Factorial of " << num  << " is : " << factorial(num) <<endl;
    return 0;
}